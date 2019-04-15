@echo off

if exist .\..\TrueSTUDIO\STM32L152D-EVAL\Debug\STM32L152D-EVAL.elf ("arm-elf-objcopy.exe" -O binary ".\..\TrueSTUDIO\STM32L152D-EVAL\Debug\STM32L152D-EVAL.elf" ".\..\TrueSTUDIO\STM32L152D-EVAL\Debug\STM32L152D-EVAL_SysTick.bin")
if exist .\..\TrueSTUDIO\STM32L152-EVAL\Debug\STM32L152-EVAL.elf ("arm-elf-objcopy.exe" -O binary ".\..\TrueSTUDIO\STM32L152-EVAL\Debug\STM32L152-EVAL.elf" ".\..\TrueSTUDIO\STM32L152-EVAL\Debug\STM32L152-EVAL_SysTick.bin")


pause

