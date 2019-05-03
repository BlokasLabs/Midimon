/*
 * Midimon.
 * Copyright (C) 2018-2019  Vilniaus Blokas UAB, https://blokas.io/midiboy
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef MIDIMON_UTILS_H
#define MIDIMON_UTILS_H

template <typename T>
class ConversionHelper
{
public:
	inline ConversionHelper(T *t) : m_object(t) {}

	template <typename U>
	inline operator U() const { return m_object; }

private:
	T *m_object;
};

template <typename T> inline ConversionHelper<T> static_alloc()
{
	static T t;
	return &t;
}

#endif // MIDIMON_UTILS_H
