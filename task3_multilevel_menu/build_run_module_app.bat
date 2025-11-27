@echo off
chcp 1251 > log
del log

set CPP_FILES="menu_functions.cpp menu_items.cpp main.cpp"
set EXE=math.exe
set CHARSET="-finput-charset=utf-8 -fexec-charset=windows-1251"
set BIN_DIR=bin

if not exist %BIN_DIR% mkdir %BIN_DIR%

if exist %BIN_DIR%\%EXE% del %BIN_DIR%\%EXE%

g++ %CHARSET% %CPP_FILES% -o %BIN_DIR%\%EXE%

%BIN_DIR%\%EXE%
