@echo off
REM elenco [elenco di stringa]
REM elenco nutella sassi v-bux

REM Dichiara x=0
set /a x=0

:Loop

REM Se il primo argomento è vuoto goto Continue
if "%1" == "" goto Continue

REM Aumenta X di 1
set /a x=x+1
echo %x% - %1

REM Sposta la posizione degli argomenti
shift

REM torna a Loop
goto Loop

:Continue

REM Anche cosi funziona mettendo dentro tutto nel if (togli REM)
REM @echo off
REM set /a x=0
REM :Loop
REM if NOT "%1" == "" (
REM 	set /a x=x+1
REM	echo %x% - %1
REM	shift
REM	goto Loop
REM )