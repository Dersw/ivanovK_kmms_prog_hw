@echo off
chcp 1251 > log
del log

set CPP_FILES="generator.cpp io.cpp main.cpp request_handler.cpp"
set EXE=bubble_sort.exe
set CHARSET="-finput-charset=utf-8 -fexec-charset=windows-1251"
set BIN_DIR=bin

if not exist %BIN_DIR% mkdir %BIN_DIR%

if exist %BIN_DIR%\%EXE% del %BIN_DIR%\%EXE%

g++ %CHARSET% %CPP_FILES% -o %BIN_DIR%\%EXE%

%BIN_DIR%\%EXE%
