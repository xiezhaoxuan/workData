******************************************************************************
* @file    readme.txt
* @author  MCD Application Team
* @version V1.5
* @date    27-SEPTEMBER-2018 
* @brief   Accelerated Designs multiple EDA CAD tools format (.bxl) files
*          for the STM32F4x MCUs.
******************************************************************************
* COPYRIGHT(c) 2017 STMicroelectronics
*
* Redistribution and use in source and binary forms, with or without modification,
* are permitted provided that the following conditions are met:
*   1. Redistributions of source code must retain the above copyright notice,
*      this list of conditions and the following disclaimer.
*   2. Redistributions in binary form must reproduce the above copyright notice,
*      this list of conditions and the following disclaimer in the documentation
*      and/or other materials provided with the distribution.
*   3. Neither the name of STMicroelectronics nor the names of its contributors
*      may be used to endorse or promote products derived from this software
*      without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************

=======================
How to use .bxl files :
=======================

The Ultra Librarian software is a free reader from Accelerated Designs which
allows the user to view the .bxl files. It also allows the user to create symbols
and footprints for most common CAD tools. For further information, please visit
first http://www.accelerated-designs.com/.

The process to use a .bxl file is detailed below:
1. Download and install the Ultra Librarian reader.
2. Unzip the zip filed of the desired product series.
3. Open the appropriate .bxl ( the Ultra Librarian software will open automatically).
4. Export the file to the desired PCB/CAD format.

The package contains :
   + A .bxl file for each STM32F4x device or generic sub-family (x) in the different existing packages
	  o Check your device part number and select it from the list
   + A .xlsx file containing the correspondance between part number and .bxl file


==========================
* V1.5 - 27-SEPTEMBER-2018 
==========================

Changing names assignment for all bxl files directly corresponding to product salestypes.
No more SelectBXLFile file needed.
Here is the new list:

	STM32F401VBTx
	STM32F401VCTx
	STM32F401VDTx
	STM32F401VETx
	STM32F405VGTx
	STM32F407VETx
	STM32F407VGTx
	STM32F411VCTx
	STM32F411VETx	
	STM32F412VETx
	STM32F412VGTx
	STM32F413VGTx
	STM32F413VHTx
	STM32F415VGTx	
	STM32F417VETx
	STM32F417VGTx
	STM32F423VHTx
	STM32F427VGTx
	STM32F427VITx
	STM32F429VETx
	STM32F429VGTx
	STM32F429VITx
	STM32F437VGTx
	STM32F437VITx
	STM32F439VGTx
	STM32F439VITx
	STM32F446VCTx
	STM32F446VETx
	STM32F469VETx
	STM32F469VGTx
	STM32F469VITx
	STM32F479VGTx
	STM32F479VITx
	STM32F405ZGTx
	STM32F407ZETx
	STM32F407ZGTx
	STM32F412ZETx
	STM32F412ZGTx
	STM32F413ZGTx
	STM32F413ZHTx
	STM32F415ZGTx
	STM32F417ZETx
	STM32F417ZGTx
	STM32F423ZHTx	
	STM32F427ZGTx
	STM32F427ZITx
	STM32F429ZETx
	STM32F429ZGTx
	STM32F429ZITx
	STM32F437ZGTx
	STM32F437ZITx
	STM32F439ZGTx
	STM32F439ZITx
	STM32F446ZCTx
	STM32F446ZETx
	STM32F469ZETx
	STM32F469ZGTx
	STM32F469ZITx
	STM32F479ZGTx
	STM32F479ZITx
	STM32F407IETx
	STM32F407IGTx
	STM32F417IETx
	STM32F417IGTx
	STM32F427IGTx
	STM32F427IITx
	STM32F429IETx
	STM32F429IGTx
	STM32F429IITx
	STM32F437IGTx
	STM32F437IITx
	STM32F439IGTx
	STM32F439IITx
	STM32F469IGTx
	STM32F469IITx
	STM32F479IITx
	STM32F429BETx
	STM32F429BGTx
	STM32F429BITx
	STM32F439BGTx
	STM32F439BITx
	STM32F469BETx
	STM32F469BGTx
	STM32F469BITx
	STM32F479BGTx
	STM32F479BITx
	STM32F410CBTx
	STM32F401RBTx
	STM32F401RCTx
	STM32F401RDTx
	STM32F401RETx
	STM32F405RGTx
	STM32F410R8Tx
	STM32F410RBTx
	STM32F411RCTx
	STM32F411RETx
	STM32F412RETx
	STM32F412RGTx
	STM32F413RGTx
	STM32F413RHTx
	STM32F415RGTx
	STM32F423RHTx
	STM32F446RCTx
	STM32F446RETx
	STM32F429NEHx
	STM32F429NGHx
	STM32F429NIHx
	STM32F439NGHx
	STM32F439NIHx
	STM32F469NEHx
	STM32F469NGHx
	STM32F469NIHx
	STM32F479NGHx
	STM32F479NIHx
	STM32F401VBHx
	STM32F401VCHx
	STM32F401VDHx
	STM32F401VEHx
	STM32F411VEHx
	STM32F412VEHx
	STM32F412VGHx
	STM32F413VGHx
	STM32F413VHHx
	STM32F423VHHx
	STM32F412ZEJx
	STM32F412ZGJx
	STM32F413ZGJx
	STM32F413ZHJx
	STM32F423ZHJx
	STM32F446ZCHx
	STM32F446ZCJx
	STM32F446ZEHx
	STM32F446ZEJx
	STM32F427AGHx
	STM32F427AIHx
	STM32F429AGHx
	STM32F429AIHx
	STM32F437AIHx
	STM32F439AIHx
	STM32F469AEHx
	STM32F469AGHx
	STM32F469AIHx
	STM32F479AGHx
	STM32F479AIHx
	STM32F407IEHx
	STM32F407IGHx
	STM32F417IEHx
	STM32F417IGHx
	STM32F427IGHx
	STM32F427IIHx	
	STM32F429IEHx
	STM32F429IGHx
	STM32F429IIHx
	STM32F437IGHx
	STM32F437IIHx
	STM32F439IGHx
	STM32F439IIHx
	STM32F469IEHx
	STM32F469IGHx
	STM32F469IIHx
	STM32F479IGHx
	STM32F410RBIx
	STM32F401CBUx
	STM32F401CCUx
	STM32F401CDUx
	STM32F401CEUx
	STM32F410C8Ux
	STM32F410CBUx
	STM32F411CCUx
	STM32F411CEUx
	STM32F412CEUx
	STM32F412CGUx
	STM32F413CGUx
	STM32F413CHUx
	STM32F423CHUx
	STM32F429ZGYx
	STM32F429ZIYx
	STM32F439ZGYx
	STM32F439ZIYx
	STM32F469AGYx
	STM32F469AIYx
	STM32F479AIYx
	STM32F410T8Yx
	STM32F410TBYx
	STM32F401CCFx
	STM32F401CCYx
	STM32F401CDYx
	STM32F401CEYx
	STM32F411CCYx
	STM32F411CEYx
	STM32F412REYx
	STM32F412RGYx
	STM32F412RGYxP
	STM32F413MGYx
	STM32F413MHYx
	STM32F423MHYx
	STM32F446MCYx
	STM32F446MEYx
	STM32F405OEYx
	STM32F405OGYx
	STM32F415OGYx
	




==========================
* V1.4 - 26-July-2018 
==========================
 Corrected bxl files that was containing wrong pins definition
  +STM32F4xxZ3

 Renamed bxl file with the correct new name: STM32F4xxZ3 into STM32F4_LQFP144_T3

==========================
* V1.3 - 06-December-2017 
==========================
  Added STM32F429ZGY and STM32F439ZGY to select_BXLfile.xls


==========================
* V1.2 - 10-November-2017 
==========================
  Corrected bxl file that was containing wrong pins definition
   + STM32F4xxV3

==========================
* V1.1 - 17-January-2017
==========================
  Corrected bxl files that was containing wrong pins definition
   + STM32F4x5Ox

==========================
* V1.0 - 17-January-2017
==========================
  Created.

   + STM32F4xxV1
   + STM32F401V1
   + STM32F4x1R1
   + STM32F4xxC1
   + STM32F401CW2
   + STM32F401V2
   + STM32F401CW1
   + STM32F4xxR2
   + STM32F4x5RG
   + STM32F4x5Ox
   + STM32F4xxV2
   + STM32F4xxH1
   + STM32F4xxI1
   + STM32F4xxZ1
   + STM32F4xxC2
   + STM32F410Tx
   + STM32F410CBT
   + STM32F410R3
   + STM32F410RBI
   + STM32F4xxC3
   + STM32F411CxY
   + STM32F4xxV3
   + STM32F4xxZ2
   + STM32F4xxJ1
   + STM32F412RxY
   + STM32F413MxY
   + STM32F4xxA1
   + STM32F4xxH2
   + STM32F4xxI2
   + STM32F4xxN1
   + STM32F4x9ZIY
   + STM32F4xxB1
   + STM32F446MxY
   + STM32F4xxZ4
   + STM32F4xxJ2
   + STM32F446ZxH
   + STM32F4xxA2
   + STM32F4x9AxY
   + STM32F4xxB2
   + STM32F4xxH3
   + STM32F4xxI3
   + STM32F4xxN2
   + STM32F4x9V3
   + STM32F4xxZ3



  

******************* (C) COPYRIGHT 2017 STMicroelectronics *****END OF FILE
