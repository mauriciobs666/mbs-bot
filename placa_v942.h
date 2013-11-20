/**	Copyright (C) 2010-2013 - Mauricio Bieze Stefani
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

 /*
    atmega328 ao inves de atmega1280
    Sketch uses 22.052 bytes (68%) of program storage space. Maximum is 32.256 bytes.
    Global variables use 1.413 bytes (68%) of dynamic memory, leaving 635 bytes for local variables. Maximum is 2.048 bytes.

    5 sensores ao inves de 16
    Sketch uses 24.578 bytes (19%) of program storage space. Maximum is 126.976 bytes.
    Global variables use 2.010 bytes (24%) of dynamic memory, leaving 6.182 bytes for local variables. Maximum is 8.192 bytes.

    Sketch uses 24.774 bytes (19%) of program storage space. Maximum is 126.976 bytes.
    Global variables use 2.311 bytes (28%) of dynamic memory, leaving 5.881 bytes for local variables. Maximum is 8.192 bytes.
 */


#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include "protocolo.h"

#define VERSAO_PLACA 942

#define SERIALX Serial

#define DFT_PROGRAMA PRG_RC_SERIAL
#define DFT_DELAY_ES  1
#define DFT_FREIO_MAO 0

#define MOTOR_ACEL      255
#define MOTOR_CENTRO    0

#define DFT_VEL_MAX     100
#define DFT_VEL_ESCALA  100
#define DFT_VEL_REFRESH   1
#define DFT_BALANCO       0

#define DFT_PID_P           10
#define DFT_PID_I           300
#define DFT_PID_D           1500
#define DFT_PID_DEBOUNCE    30
#define DFT_PID_MAX_MV      200
#define DFT_PID_LIM_P       NUM_IR_TRACK
#define DFT_PID_LIM_I       10000
#define DFT_PID_LIM_D       1000

// Habilita controle PWM (se undef controla por largura de pulso/servo)
#define RODAS_PWM 1

// inverte sentido dos motores
#define MOTOR_ESQ_INV 0
#define MOTOR_DIR_INV 0
#define MOTOR_E_T_INV 0
#define MOTOR_D_T_INV 0

#define PINO_MOTOR_ESQ  	7
#define PINO_MOTOR_ESQ_N	8
#define PINO_MOTOR_ESQ_PWM	6

#define PINO_MOTOR_DIR      9
#define PINO_MOTOR_DIR_N    12
#define PINO_MOTOR_DIR_PWM	5

// economia de energia
#define PINO_UNUSED_CNT 0
#define PINO_UNUSED_ARRAY { }

//#define PINO_SERVO_PAN		9
//#define PINO_SERVO_TILT		10
//#define PINO_SERVO_ROLL		8

#define NUM_SENSORES    5

#define LINE_FOLLOWER

#ifdef LINE_FOLLOWER
    #define NUM_IR_TRACK    5
    #define PINO_TRACK_0    0
    // ex: NUM_IR_TRACK=3 e PINO_TRACK_0=2 significa que os pinos A2, A3 e A4 estao conectados
#endif

// http://arduino.cc/en/Reference/Tone
// Use of the tone() function will interfere with PWM output on pins 3 and 11 (on boards other than the Mega).
//#define PINO_BIP 			11

//#define PINO_ARMA           10

#define PINO_LED            13

// habilita wiichuck / energia nas I2C/analogicas
//#define WIICHUCK
//#define WIICHUCK_POWER

// RADIO CONTROLE
//#define PINO_JOY_X      2
//#define PINO_JOY_Y      3
//#define PINO_JOY_Z      17
//#define PINO_JOY_R      18
//#define PINO_JOY_SW1    4

#endif // BOARD_H_INCLUDED