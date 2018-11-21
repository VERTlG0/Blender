/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Contributor(s): Tao Ju
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#include "manifold_table.h"

const ManifoldIndices manifold_table[256] = {
	{0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}}},
	{3, {{1, 1}, {2, 2}, {3, 3}, {0, 0}, {3, 3}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {3, 3}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {2, 2}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {2, 2}, {0, 0}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {2, 2}, {1, 1}, {2, 2}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}}},
	{3, {{1, 1}, {2, 2}, {0, 0}, {3, 3}, {1, 1}, {3, 3}, {0, 0}, {2, 2}, {1, 1}, {3, 3}, {2, 2}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {1, 1}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {1, 1}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{2, {{0, 0}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 2}, {2, 2}, {2, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {1, 2}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}}},
	{2, {{1, 1}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 2}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {1, 1}}},
	{3, {{1, 1}, {0, 0}, {2, 2}, {3, 3}, {1, 1}, {3, 3}, {2, 2}, {0, 0}, {1, 1}, {3, 3}, {0, 0}, {2, 2}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {2, 2}}},
	{2, {{1, 1}, {1, 1}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {2, 2}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}}},
	{2, {{1, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {1, 1}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {1, 1}}},
	{2, {{1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {2, 2}, {1, 1}, {1, 1}}},
	{2, {{0, 0}, {1, 2}, {1, 1}, {2, 2}, {2, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}}},
	{2, {{2, 2}, {1, 1}, {0, 0}, {1, 1}, {2, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 2}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {2, 2}}},
	{3, {{1, 1}, {2, 2}, {3, 3}, {0, 0}, {1, 1}, {0, 0}, {3, 3}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {3, 3}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {2, 2}, {0, 0}, {2, 2}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {2, 2}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {2, 2}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {1, 1}, {2, 2}, {1, 1}}},
	{2, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {2, 2}, {1, 1}, {2, 2}, {1, 1}}},
	{2, {{2, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {1, 2}, {1, 1}, {2, 2}}},
	{3, {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {0, 0}, {3, 3}, {2, 2}, {1, 1}, {0, 0}, {3, 3}, {1, 1}, {2, 2}}},
	{4, {{1, 1}, {2, 2}, {3, 3}, {4, 4}, {1, 1}, {4, 4}, {3, 3}, {2, 2}, {1, 1}, {4, 4}, {2, 2}, {3, 3}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {2, 2}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {2, 2}, {2, 2}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {2, 2}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {1, 1}}},
	{2, {{0, 0}, {0, 0}, {0, 0}, {2, 1}, {1, 1}, {0, 0}, {1, 1}, {2, 2}, {1, 2}, {0, 0}, {2, 2}, {1, 1}}},
	{2, {{1, 2}, {0, 0}, {0, 0}, {2, 1}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {2, 2}, {1, 1}}},
	{1, {{1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {1, 1}}},
	{2, {{2, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {1, 2}, {2, 2}, {1, 1}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{2, {{1, 1}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}}},
	{2, {{0, 0}, {1, 1}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {1, 1}}},
	{2, {{1, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {2, 1}, {1, 1}, {1, 1}, {0, 0}, {2, 2}}},
	{2, {{0, 0}, {0, 0}, {2, 2}, {1, 1}, {1, 2}, {0, 0}, {0, 0}, {2, 1}, {0, 0}, {1, 1}, {0, 0}, {2, 2}}},
	{2, {{1, 1}, {1, 1}, {0, 0}, {2, 2}, {1, 2}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {2, 1}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {1, 2}, {0, 0}, {0, 0}, {2, 1}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}}},
	{2, {{1, 1}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {2, 2}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}}},
	{2, {{1, 1}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 2}}},
	{3, {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {2, 2}, {1, 1}, {0, 0}, {3, 3}, {1, 1}, {2, 2}, {0, 0}, {3, 3}}},
	{2, {{1, 1}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {2, 2}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}}},
	{2, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}}},
	{3, {{1, 1}, {2, 2}, {0, 0}, {3, 3}, {0, 0}, {2, 2}, {1, 1}, {3, 3}, {2, 2}, {0, 0}, {1, 1}, {3, 3}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}}},
	{3, {{1, 1}, {0, 0}, {2, 2}, {3, 3}, {2, 2}, {0, 0}, {1, 1}, {3, 3}, {0, 0}, {2, 2}, {1, 1}, {3, 3}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {1, 1}, {1, 1}, {2, 2}}},
	{4, {{1, 1}, {2, 2}, {3, 3}, {4, 4}, {3, 3}, {2, 2}, {1, 1}, {4, 4}, {2, 2}, {3, 3}, {1, 1}, {4, 4}}},
	{2, {{0, 0}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 2}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {2, 2}}},
	{2, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {1, 1}, {2, 2}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {2, 2}, {1, 1}, {2, 2}}},
	{2, {{0, 0}, {2, 1}, {0, 0}, {0, 0}, {1, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {1, 1}, {2, 2}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}}},
	{2, {{0, 0}, {0, 0}, {2, 1}, {0, 0}, {0, 0}, {1, 2}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {1, 1}, {2, 2}}},
	{2, {{1, 1}, {2, 2}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {0, 0}, {1, 1}, {2, 2}}},
	{2, {{0, 0}, {1, 2}, {2, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {2, 2}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {1, 1}}},
	{2, {{1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {2, 2}}},
	{2, {{0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {2, 2}}},
	{2, {{1, 1}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 2}, {2, 2}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {2, 2}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{2, {{2, 2}, {1, 1}, {1, 2}, {0, 0}, {0, 0}, {2, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{2, {{1, 1}, {1, 1}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {1, 1}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 1}, {0, 0}, {1, 2}, {2, 2}, {0, 0}, {1, 1}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {1, 1}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {1, 1}}},
	{2, {{0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {1, 2}, {2, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {1, 1}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{2, {{0, 0}, {2, 1}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {1, 2}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}}},
	{2, {{2, 2}, {1, 2}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 1}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {2, 2}}},
	{2, {{2, 2}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 2}, {0, 0}, {0, 0}, {2, 1}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {1, 1}, {2, 2}, {2, 2}, {1, 1}, {1, 1}, {2, 2}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {2, 2}, {1, 1}, {2, 2}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}}},
	{2, {{1, 2}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 1}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {2, 2}, {1, 1}, {2, 2}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{1, 1}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 2}, {0, 0}, {2, 1}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {1, 2}, {2, 2}, {1, 1}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {2, 1}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 2}, {2, 1}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {0, 0}, {2, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {1, 2}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {2, 1}, {2, 2}, {1, 2}, {1, 1}, {0, 0}}},
	{2, {{0, 0}, {1, 1}, {2, 2}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {1, 2}, {0, 0}, {0, 0}, {2, 1}, {2, 2}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {2, 2}, {2, 2}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{2, 2}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {1, 2}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {2, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {1, 2}, {0, 0}, {0, 0}, {2, 1}, {0, 0}, {1, 1}, {1, 1}, {2, 2}, {0, 0}}},
	{2, {{0, 0}, {0, 0}, {0, 0}, {2, 1}, {2, 2}, {1, 1}, {1, 2}, {0, 0}, {1, 1}, {2, 2}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {0, 0}, {2, 2}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {0, 0}, {1, 1}, {2, 2}, {2, 2}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {0, 0}, {2, 2}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}, {0, 0}, {2, 1}, {1, 2}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{2, {{1, 1}, {2, 2}, {0, 0}, {0, 0}, {0, 0}, {1, 2}, {2, 1}, {0, 0}, {1, 1}, {0, 0}, {2, 2}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{1, 2}, {0, 0}, {0, 0}, {2, 1}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {2, 2}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{2, {{0, 0}, {1, 2}, {2, 1}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}, {2, 2}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {0, 0}, {1, 1}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{1, {{1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}, {1, 1}, {0, 0}, {0, 0}, {0, 0}}},
	{0, {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}}}
};
