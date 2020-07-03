Blinky project
==============

The **Blinky** project is a simple example that can be used to verify the
basic tool setup.

It is compliant to the Cortex Microcontroller Software Interface Standard (CMSIS)
and uses the CMSIS-RTOS2 API interface for RTOS functionality. The CMSIS-RTOS2 API
is available with various real-time operating systems, for example RTX5 or FreeRTOS.

Operation
---------

 - At start the vioLED0 blinks in 1 sec interval.

 - The vioBUTTON0 changes the blink frequency and start/stops vioLED1.

The board hardware mapping of vioLED0, vioLED1, and vioBUTTON0 depends on the 
configuration of the CMSIS-Driver VIO.
