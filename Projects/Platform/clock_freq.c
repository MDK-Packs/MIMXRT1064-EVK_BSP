/*---------------------------------------------------------------------------
 * Copyright (c) 2020 Arm Limited (or its affiliates). All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *      Name:    clock_freq.c
 *      Purpose: Get peripheral root frequency
 *
 *---------------------------------------------------------------------------*/

#include "clock_freq.h"
#include "clock_config.h"

/*
  Retrieve LPI2C root frequency.
*/
uint32_t LPI2C1_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPI2C_CLK_ROOT;
}
uint32_t LPI2C2_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPI2C_CLK_ROOT;
}
uint32_t LPI2C3_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPI2C_CLK_ROOT;
}
uint32_t LPI2C4_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPI2C_CLK_ROOT;
}

/*
  Retrieve LPSPI root frequency.
*/
uint32_t LPSPI1_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPSPI_CLK_ROOT;
}
uint32_t LPSPI2_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPSPI_CLK_ROOT;
}
uint32_t LPSPI3_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPSPI_CLK_ROOT;
}
uint32_t LPSPI4_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_LPSPI_CLK_ROOT;
}

/*
  Retrieve LPUART root frequency.
*/
uint32_t LPUART1_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
uint32_t LPUART2_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
uint32_t LPUART3_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
uint32_t LPUART4_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
uint32_t LPUART5_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
uint32_t LPUART6_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
uint32_t LPUART7_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
uint32_t LPUART8_GetFreq(void) {
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
