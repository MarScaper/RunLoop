/*
 * RunLoopConfigTimer.hpp
 *
 * Copyright (c) 2017 by Sebastien MARCHAND (Web:www.marscaper.com, Email:sebastien@marscaper.com)
 */
/*
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
#ifndef RunLoopConfig_hpp
#define RunLoopConfig_hpp

#define RUN_LOOP_FULL        1

#if !RUN_LOOP_FULL 

// Set to 1 for the methods you want to use in the library
#define RUN_LOOP_CALLBACK    0
#define RUN_LOOP_INHERITANCE 0
#define RUN_LOOP_DELEGATE    0

#endif

#endif
