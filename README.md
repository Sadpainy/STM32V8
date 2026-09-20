# STM32V8 Secure Self‑Destruct Firmware

![Tests](https://img.shields.io/badge/Tests-passing-brightgreen?style=plastic&logo=vitest&logoColor=white&labelColor=555555)
![Hardware](https://img.shields.io/badge/Hardware-Destruct-critical?style=plastic&logo=nuclear&logoColor=white&labelColor=555555)
![Warning](https://img.shields.io/badge/Warning-Malware-critical?style=plastic&logo=virustotal&logoColor=white&labelColor=555555)
![Build](https://img.shields.io/badge/Build-passing-brightgreen?style=plastic&labelColor=555555)
![License](https://img.shields.io/badge/License-AGPL_3.0-blue?style=plastic&logo=gnu&logoColor=white&labelColor=555555)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?style=plastic&labelColor=555555)
 
This is bare‑metal anti‑tamper self‑destruct implementation for STM32H7. Performs debugger detection, memory & flash secure wiping, crypto key zeroization and irreversible RDP‑L2 lock on tamper events.

**WARNING: RDP‑L2 is irreversible, hardware will be permanently locked once triggered.**
 
# Compile
 
Toolchain: **arm‑none‑eabi‑gcc, C++17 freestanding**
 
```cpp
arm-none-eabi-g++ -std=c++17 -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -ffreestanding -fno-exceptions -fno-rtti -Os -Wall -Wextra -Wpedantic -c STM32V8.cpp -o STM32V8.o
```
 
Link example:
 
```cpp  
arm-none-eabi-ld STM32V8.o startup_stm32h7xx.o user_code.o -T stm32h7_custom.ld -o firmware.elf
arm-none-eabi-objcopy -O binary firmware.elf firmware.bin
```
 
Invoke entry on tamper condition: `STM32V8::Ashes::Protocol()` This function **never returns.**
 
# Disclaimer
 
**Use at your own risk. No warranty implied. Test on spare hardware.**
 
# License
 
**Copyright (c) OvO**

**THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.**
**GNU AFFERO GPL Version 3**