/**	Copyright (C) 2010 - Mauricio Bieze Stefani
 *	This file is part of the MBSBOT project.
 *
 *	MBSBOT is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	MBSBOT is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with MBSBOT.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

// WHEELS - are them conected to a Servo or a DC motor? Pick one:
#define WHEEL_DC 1 // DC motor through 754410 driver
//#undef WHEEL_DC // servo (old board)

#define PIN_LEFTWHEEL		4
#define PIN_LEFTWHEEL_PWM	5
#define PIN_RIGHTWHEEL		2
#define PIN_RIGHTWHEEL_PWM	3

// SHARP RANGE FINDER (analog pin!)
#define PIN_SHARP_RF		3

#define PIN_HEAD_SERVO		9

// LINE FOLLOWER (analog pins!)
#define NUM_IR_TRACK		3
#define PIN_FIRST_IR_SENSOR 0
// where NUM_IR_TRACK=3 and PIN_FIRST_IR_SENSOR=2 means pins A2, A3 and A4 are connected

#define PIN_BEEP 			19

#endif // BOARD_H_INCLUDED