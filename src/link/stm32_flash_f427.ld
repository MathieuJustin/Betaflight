/*
******************************************************************************
**
** @file        : LinkerScript.ld
**
** @author      : Auto-generated by STM32CubeIDE
**
** @brief       : Linker script for STM32F427IIHx Device from STM32F4 series
**                      2048Kbytes FLASH
**                      64Kbytes CCMRAM
**                      192Kbytes RAM
**
**                Set heap size, stack size and stack location according
**                to application requirements.
**
**                Set memory bank area and size if external memory is used
**
**  Target      : STMicroelectronics STM32
**
**  Distribution: The file is distributed as is, without any warranty
**                of any kind.
**
******************************************************************************
** @attention
**
** Copyright (c) 2022 STMicroelectronics.
** All rights reserved.
**
** This software is licensed under terms that can be found in the LICENSE file
** in the root directory of this software component.
** If no LICENSE file comes with this software, it is provided AS-IS.
**
******************************************************************************
*/


/*
0x08000000 to 0x0807FFFF  512K full flash,
0x08000000 to 0x08003FFF   16K isr vector, startup code,
0x08004000 to 0x08007FFF   16K config,                  // FLASH_Sector_1
0x08008000 to 0x0807FFFF  480K firmware,
*/

/* Memories definition */
MEMORY
{
  FLASH (rx)        : ORIGIN = 0x08000000, LENGTH = 10K
  FLASH_CUSTOM_DEFAULTS (r) : ORIGIN = 0x08002800, LENGTH = 6K
  FLASH_CONFIG (r)  : ORIGIN = 0x08004000, LENGTH = 16K
  FLASH1 (rx)       : ORIGIN = 0x08008000, LENGTH = 2016K

  SYSTEM_MEMORY (rx): ORIGIN = 0x1FFF0000, LENGTH = 29K

  RAM (rwx)         : ORIGIN = 0x20000000, LENGTH = 192K
  MEMORY_B1 (rx)    : ORIGIN = 0x60000000, LENGTH = 0K
}

REGION_ALIAS("STACKRAM", RAM)
REGION_ALIAS("FASTRAM", RAM)
REGION_ALIAS("VECTAB", RAM)

/* Put various bits and bobs of data into the free space after the vector table in sector 0 to save flash space. */

REGION_ALIAS("MOVABLE_FLASH", FLASH)

INCLUDE "stm32_flash_f4_split.ld"

