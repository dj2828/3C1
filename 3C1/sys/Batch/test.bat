@echo off
set /a x=0
:Loop
if NOT "%1" == "" (
	set /a x=x+1
	echo %x% - %1
	shift
	goto Loop
)