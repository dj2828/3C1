@echo off
REM (REM è il commento)
REM Esecuzione: somma.bat [num1] [num2]

REM set: dichiarazione variabile
REM /a: assegnazione
REM %1: primo argomento del comando
set /a x=%1
set /a y=%2
set /a somma=x+y

echo Somma: %somma%