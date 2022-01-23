/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "DBF4"
#define USBD_PRODUCT_STRING     "DB8548"

/*--------------LED----------------*/
#define LED0_PIN                PG1
#define LED1_PIN                PG2
#define LED2_PIN                PG3
#define LED3_PIN                PG4
#define LED4_PIN                PG5
#define LED5_PIN                PG6
#define LED6_PIN                PG7
#define LED7_PIN                PG8
#define LED8_PIN                PF14
#define LED9_PIN                PE11
/*---------------------------------*/

/*--------------BUTTON----------------*/
#define USE_BUTTONS
#define	BUTTON_A_PIN            PB2
#define BUTTON_A_PIN_INVERTED // Active high
/*---------------------------------*/

/*------------BEEPER---------------*/
#undef USE_BEEPER
//#define BEEPER_PIN              
//#define BEEPER_INVERTED
/*---------------------------------*/

/*-----------USB-USARTs-------------*/
#define USE_VCP

#define USE_UART1
#define UART1_RX_PIN             PB7
#define UART1_TX_PIN             PB6

#define USE_UART6
#define UART6_RX_PIN            PG9
#define UART6_TX_PIN            PG14

#define SERIAL_PORT_COUNT       9      // VCP, USART1/2/3/6, UART4/5/7/8
/*---------------------------------*/

/*-------------SPIs----------------*/
#define USE_SPI
#define USE_SPI_DEVICE_5
#define SPI5_SCK_PIN            PF7
#define SPI5_MISO_PIN           PF8
#define SPI5_MOSI_PIN           PF9
#define SPI5_NSS_PIN            PF6
/*---------------------------------*/

/*---------SENSORS Gyro & ACC------*/
// MPU6500 interrupt
#define USE_EXTI
#define GYRO_1_EXTI_PIN         PB5

#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW

#define USE_GYRO
#define USE_ACC

#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500

#define GYRO_1_CS_PIN           SPI5_NSS_PIN
#define GYRO_1_SPI_INSTANCE     SPI5
/*---------------------------------*/

/*--------DEFAULT VALUES-----------*/
#define DEFAULT_RX_FEATURE       FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER        SERIALRX_SBUS
#define SERIALRX_UART            SERIAL_PORT_USART1

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff
#define TARGET_IO_PORTG 0xffff
#define TARGET_IO_PORTH 0xffff
#define TARGET_IO_PORTI 0xffff
/*---------------------------------*/

/*--------------TIMERS-------------*/
#define USABLE_TIMER_CHANNEL_COUNT 4
#define USED_TIMERS  ( TIM_N(2) | TIM_N(3) | TIM_N(4) )
/*---------------------------------*/