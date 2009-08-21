/*
      Copyright (C) 2008-2009 Nicolas Bourdaud <nicolas.bourdaud@epfl.ch>

    This file is part of the rtfilter library

    The eegpanel library is free software: you can redistribute it and/or
    modify it under the terms of the version 3 of the GNU General Public
    License as published by the Free Software Foundation.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef FILTER_INTERNAL_H
#define FILTER_INTERNAL_H


#if HAVE_CONFIG_H
# include <config.h>
#endif


struct _dfilter
{
	unsigned int num_chann, type;
	unsigned int a_len;
	const void* a;
	unsigned int b_len;
	const void* b;
	void* xoff;
	void* yoff;
};

#define sizeof_data(type)	((type == DATATYPE_FLOAT) ? sizeof(float) : sizeof(double))

void* align_alloc(size_t alignment, size_t size);
void  align_free(void* memptr);

#endif //FILTER_INTERNAL_H