/**
  @page HiTOP_IAP HiTOP IAP Project for STM32L1xx Ultra Low Power Medium-density devices
  
  @verbatim
  ******************* (C) COPYRIGHT 2012 STMicroelectronics ********************
  * @file    readme.txt
  * @author  MCD Application Team
  * @version V1.1.0
  * @date    24-January-2012
  * @brief   This sub-directory contains all the user-modifiable files needed
  *          to create a new project linked with the STM32L1xx Standard Peripheral 
  *          Library and working with HiTOP software toolchain (version 5.40.0051 
  *          and later).
  *******************************************************************************
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * FOR MORE INFORMATION PLEASE READ CAREFULLY THE LICENSE AGREEMENT FILE
  * LOCATED IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.
  *
  ******************************************************************************
   @endverbatim
 
 @par Directory contents

 - IAP.htp: A pre-configured project file with the provided library 
            structure that produces an executable image with HiTOP

 - cstart_thumb2.asm: This file initializes the stack pointer and copy initialized
                      sections from ROM to RAM.                 

 - Objects: This mandatory directory contains the executable images.

 - Settings: This directory contains the linker and script files.                  
     - arm_arch.lsl: This file is used to place program code (readonly)
                     in internal FLASH and data (readwrite, Stack and Heap)
                     in internal SRAM.

     - link.lnk: This file is the HiTOP linker it invokes the stm32l1xx_md.lsl.
                                   
     - reset_appl.scr: This file is a HiTOP script it performs a target reset.
     
     - reset_go_main.scr: This file is a HiTOP script and it sets the Program 
                          Counter at the "main" instruction.

     - StartupScript.scr: This file is a HiTOP script and it performs a target 
                          reset before loading The executable image.

     - stm32l1xx_md.lsl : This file is used to place program code (readonly)
                          in internal FLASH and data (readwrite, Stack and Heap)
                          in internal SRAM.
                          It contains also the vector table of the STM32L1xx Ultra 
                          Low Power Medium-density devices.
                          You can customize this file to your need. 

@par How to use it ?

- Open the HiTOP toolchain.
- Browse to open the project.htp
     @note The needed define symbols for this config are already declared in the
           preprocessor section: USE_STDPERIPH_DRIVER, STM32L1XX_MD, USE_STM32L152_EVAL
- A "Download application" window is displayed, click "cancel".
- Rebuild all files: Project->Rebuild all
- Load project image : Click "ok" in the "Download application" window.
- Run the "RESET_GO_MAIN" script to set the PC at the "main"
- Run program: Debug->Go(F5).

@note
- Ultra Low Power Medium-density devices are STM32L151xx and STM32L152xx 
  microcontrollers where the Flash memory density ranges between 64 and 128 Kbytes.
- Ultra Low Power High-density devices are STM32L151xx, STM32L152xx and STM32L162xx 
  microcontrollers where the Flash memory density is 384 Kbytes.

 * <h3><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h3>
 */
