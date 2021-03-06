/*
 * Copyright 2012 Tim Diels
 *
 * This file is part of sysintercept.
 *
 * sysintercept is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * sysintercept is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with sysintercept.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef IPC_H_
#define IPC_H_

#include <boost/interprocess/shared_memory_object.hpp>
#include <boost/interprocess/mapped_region.hpp>

std::string get_ipc_name(DWORD process_id) {
	std::stringstream ss;
	ss << "sysintercept" << process_id;
	return ss.str();
}

#endif /* IPC_H_ */
