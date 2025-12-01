@echo off
setlocal enabledelayedexpansion

set /a x = %1
set /a y = %2
set /a o = %3

if %o% == 1 (
	set /a somma=x+y
	echo Addizione: !somma!
)
if %o% == 2 (
	set /a meno=x-y
	echo Sottrazione: !meno!
)
if %o% == 3 (
	set /a per=x*y
	echo Moltiplicazione: !per!
)
if %o% == 4 (
	set /a diviso=x/y
	echo Divisione: !diviso!
)