/**
 * utils.h
 *
 * utils for standnat
 *
 * Copyright (C) 2017 Yanke Guo <ryan@islandzero.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _STANDNAT_UTILS_H_
#define _STANDNAT_UTILS_H_

#include "config.h"

#define dlog(format, ...) pr_debug("[DEBUG] " SN_NAME ": " format "\n", ##__VA_ARGS__)
#define wlog(format, ...) pr_warn(SN_NAME ": " format "\n", ##__VA_ARGS__)
#define elog(format, ...) pr_err(SN_NAME ": " format "\n", ##__VA_ARGS__)

#endif