@echo off
bcc32 -c Menu.cpp
bcc32 -c MenuCooking.cpp
bcc32 MenuCooking.obj menu.obj
MenuCooking.exe
PAUSE
exit
echo end