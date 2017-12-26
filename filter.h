/**
 * filter.h
 *
 * packet filter using Netfilter
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

#ifndef _STANDNAT_FILTER_H_
#define _STANDNAT_FILTER_H_

#include <linux/types.h>

/**
 * whitelisted port range of from, to
 */
struct sn_whitelist {
    unsigned short from, to;
};

/**
 * init the filter subsystem
 */
int init_filter(struct sn_whitelist *whitelists, int whitelists_len, __be32 ip);

/**
 * deinit the filter subsystem
 */
void deinit_filter(void);

#endif