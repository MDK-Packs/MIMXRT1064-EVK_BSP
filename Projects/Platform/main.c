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
 *      Name:    main.c
 *      Purpose: Main function
 *
 *---------------------------------------------------------------------------*/

#include "main.h"

#include "cmsis_os2.h"
#include "RTE_Components.h"
#ifdef RTE_VIO_BOARD
#include "cmsis_vio.h"
#endif

#include "peripherals.h"
#include "pin_mux.h"
#include "board.h"
#include "clock_config.h"

/*---------------------------------------------------------------------------
  Main function
 *---------------------------------------------------------------------------*/
int main (void) {

  // System initialization
  BOARD_InitBootPeripherals();
  BOARD_InitBootPins();
  BOARD_InitBootClocks();

  SystemCoreClockUpdate();

  #ifdef RTE_VIO_BOARD
  vioInit();
  #endif

  osKernelInitialize();                 // Initialize CMSIS-RTOS2
  osThreadNew(app_main, NULL, NULL);    // Create application main thread
  osKernelStart();                      // Start thread execution

  for (;;) {}
}

/*---------------------------------------------------------------------------
  CMSIS-Driver SPI1 configuration
 *---------------------------------------------------------------------------*/
extern uint32_t LPSPI1_GetFreq    (void);
extern void     LPSPI1_InitPins   (void);
extern void     LPSPI1_DeinitPins (void);

void LPSPI1_InitPins (void) {
  // Pins are configured in BOARD_InitBootPins.
}
void LPSPI1_DeinitPins (void) {
  // Add pin de-init if required.
}
uint32_t LPSPI1_GetFreq (void) {
  // Return peripheral input clock.
  return BOARD_BOOTCLOCKRUN_LPSPI_CLK_ROOT;
}

/*---------------------------------------------------------------------------
  CMSIS-Driver USART1 configuration
 *---------------------------------------------------------------------------*/
extern void     LPUART1_InitPins   (void);
extern void     LPUART1_DeinitPins (void);
extern uint32_t LPUART1_GetFreq    (void);

void LPUART1_InitPins (void) {
  // Pins are configured in BOARD_InitBootPins.
}
void LPUART1_DeinitPins (void) {
  // Add pin de-init if required.
}
uint32_t LPUART1_GetFreq (void) {
  // Return peripheral input clock.
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}

/*---------------------------------------------------------------------------
  CMSIS-Driver USART3 configuration
 *---------------------------------------------------------------------------*/
extern void     LPUART3_InitPins   (void);
extern void     LPUART3_DeinitPins (void);
extern uint32_t LPUART3_GetFreq    (void);

void LPUART3_InitPins (void) {
  // Pins are configured in BOARD_InitBootPins.
}
void LPUART3_DeinitPins (void) {
  // Add pin de-init if required.
}
uint32_t LPUART3_GetFreq (void) {
  // Return peripheral input clock.
  return BOARD_BOOTCLOCKRUN_UART_CLK_ROOT;
}
