/*
	Copyright (C) 2006 Normmatt
	Copyright (C) 2007 Pascal Giard
	Copyright (C) 2007-2012 DeSmuME team

	This file is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	This file is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with the this software.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _SRAM_H
#define _SRAM_H

#include "types.h"

#define NB_STATES 10

struct SFORMAT
{
	//a string description of the element
	const char *desc;

	//the size of each element
	u32 size;

	//the number of each element
	u32 count;

	//a void* to the data or a void** to the data
	void *v;
};

u8 sram_read (u32 address);
void sram_write (u32 address, u8 value);
bool savestate_load(class EMUFILE* is);
bool savestate_save(class EMUFILE* outstream);

#endif
