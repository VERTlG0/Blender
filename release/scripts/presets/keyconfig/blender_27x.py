import os
import bpy
from bpy.props import (
    EnumProperty,
)

dirname, filename = os.path.split(__file__)
idname = os.path.splitext(filename)[0]

def update_fn(_self, _context):
    load()


class Prefs(bpy.types.KeyConfigPreferences):
    bl_idname = idname

    select_mouse: EnumProperty(
        name="Select Mouse",
        items=(
            ('LEFT', "Left", "Use left Mouse Button for selection"),
            ('RIGHT', "Right", "Use Right Mouse Button for selection"),
        ),
        description=(
            "Mouse button used for selection"
        ),
        default='RIGHT',
        update=update_fn,
    )

    def draw(self, layout):
        split = layout.split()
        col = split.column()
        col.label(text="Select With:")
        col.row().prop(self, "select_mouse", expand=True)
        split.column()


blender_default = bpy.utils.execfile(os.path.join(dirname, "keymap_data", "blender_default.py"))

def load():
    from bl_keymap_utils.io import keyconfig_init_from_data

    kc = bpy.context.window_manager.keyconfigs.new(idname)
    kc_prefs = kc.preferences

    keyconfig_data = blender_default.generate_keymaps(
        blender_default.Params(
            select_mouse=kc_prefs.select_mouse,
            legacy=True,
        ),
    )
    keyconfig_init_from_data(kc, keyconfig_data)


if __name__ == "__main__":
    bpy.utils.register_class(Prefs)
    load()
