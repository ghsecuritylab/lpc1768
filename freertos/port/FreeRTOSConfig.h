/*
 * FreeRTOS Kernel V10.1.1
 * Copyright (C) 2018 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */

#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

#include "LPC17xx.h"

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *----------------------------------------------------------*/

#define configUSE_PREEMPTION                  1
#define configUSE_IDLE_HOOK                   0
#define configMAX_PRIORITIES                 (5)
#define configUSE_TICK_HOOK                   0
#define configCPU_CLOCK_HZ                   ((unsigned long)SystemCoreClock)
#define configTICK_RATE_HZ                   ((TickType_t)1000)
#define configMINIMAL_STACK_SIZE             ((unsigned short)128)
#define configTOTAL_HEAP_SIZE                ((size_t)(18 * 1024 ))
#define configMAX_TASK_NAME_LEN              (12)
#define configUSE_TRACE_FACILITY              1
#define configUSE_STATS_FORMATTING_FUNCTIONS  1
#define configUSE_16_BIT_TICKS                0
#define configIDLE_SHOULD_YIELD               0
#define configUSE_CO_ROUTINES                 0

#define configUSE_MUTEXES                     1

#define configMAX_CO_ROUTINE_PRIORITIES      (2)

#define configUSE_COUNTING_SEMAPHORES         1
#define configUSE_ALTERNATIVE_API             0
#define configCHECK_FOR_STACK_OVERFLOW        0
#define configUSE_RECURSIVE_MUTEXES           1
#define configQUEUE_REGISTRY_SIZE             10

#define configGENERATE_RUN_TIME_STATS         0
#define configUSE_STATS_FORMATTING_FUNCTIONS  1

#define INCLUDE_vTaskPrioritySet              1
#define INCLUDE_uxTaskPriorityGet             1
#define INCLUDE_vTaskDelete                   1
#define INCLUDE_vTaskCleanUpResources         0
#define INCLUDE_vTaskSuspend                  1
#define INCLUDE_vTaskDelayUntil               1
#define INCLUDE_vTaskDelay                    1
#define INCLUDE_uxTaskGetStackHighWaterMark   1

/* Use the system definition, if there is one */
#ifdef __NVIC_PRIO_BITS
    #define configPRIO_BITS                   __NVIC_PRIO_BITS
#else
    #define configPRIO_BITS                   5        /* 32 priority levels */
#endif

#define configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY    10

/* The lowest priority. */
#define configKERNEL_INTERRUPT_PRIORITY       (31 << (8 - configPRIO_BITS))

/* Priority 5, or 160 as only the top three bits are implemented. */
#define configMAX_SYSCALL_INTERRUPT_PRIORITY  (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))

#define xPortPendSVHandler                    PendSV_Handler
#define vPortSVCHandler                       SVC_Handler
#define xPortSysTickHandler                   SysTick_Handler

#endif /* FREERTOS_CONFIG_H */
