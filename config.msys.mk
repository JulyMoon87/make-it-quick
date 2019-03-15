#******************************************************************************
# config.msys.mk                                         Make-It-Quick project
#******************************************************************************
#
#  File Description:
#
#    Configuration file when building with MSYS
#
#
#
#
#
#
#
#
#******************************************************************************
# (C) 1992-2018 Christophe de Dinechin <christophe@dinechin.org>
#     This software is licensed under the GNU General Public License v3
#******************************************************************************
#     This file is part of make-it-quick
#
#     make-it-quick is free software: you can redistribute it and/or modify
#     it under the terms of the GNU General Public License as published by
#     the Free Software Foundation, either version 3 of the License, or
#     (at your option) any later version.
#
#     make-it-quick is distributed in the hope that it will be useful,
#     but WITHOUT ANY WARRANTY; without even the implied warranty of
#     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#     GNU General Public License for more details.
#
#     You should have received a copy of the GNU General Public License
#     along with make-it-quick.  If not, see <https://www.gnu.org/licenses/>.
#******************************************************************************

DEFINES_BUILDENV_msys=CONFIG_MSYS UNICODE _WIN32 WIN32
OS_NAME_BUILDENV_msys=windows

include $(MIQ)config.mingw.mk
LINE_BUFFERED=--line-buffered
