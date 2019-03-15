// ****************************************************************************
//  check_posix_memalign.c                                       make-it-quick 
// ****************************************************************************
// 
//   File Description:
// 
//     Check if we can use posix_memalign (otherwise, see mingw align...)
// 
// 
// 
// 
// 
// 
// 
// 
// ****************************************************************************
//   (C) 2019 Christophe de Dinechin <christophe@dinechin.org>
//   This software is licensed under the GNU General Public License v3
// ****************************************************************************
//   This file is part of make-it-quick.
// 
//   make-it-quick is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
// 
//   Foobar is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
// 
//   You should have received a copy of the GNU General Public License
//   along with make-it-quick.  If not, see <https://www.gnu.org/licenses/>.
// ****************************************************************************

#include <stdlib.h>

int main()
{
    void *ptr = NULL;
    int result = posix_memalign(&result, sizeof (double), 32 * sizeof(double));
    return result == 0 ? 0 : -2;
}
