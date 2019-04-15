@echo off

if exist C:\Keil\ARM\BIN40\fromelf.exe (
if exist .\..\MDK-ARM\STM32L152-EVAL\STM32L152-EVAL.axf (C:\Keil\ARM\BIN40\fromelf.exe ".\..\MDK-ARM\STM32L152-EVAL\STM32L152-EVAL.axf" --bin --output ".\..\MDK-ARM\STM32L152-EVAL\STM32L152-EVAL_SysTick.bin")
if exist .\..\MDK-ARM\STM32L152D-EVAL\STM32L152D-EVAL.axf (C:\Keil\ARM\BIN40\fromelf.exe ".\..\MDK-ARM\STM32L152D-EVAL\STM32L152D-EVAL.axf" --bin --output ".\..\MDK-ARM\STM32L152D-EVAL\STM32L152D-EVAL_SysTick.bin")

 )

pause

