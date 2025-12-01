@echo off
set /a x=0

for %%A in (%*) do (
	set /a x=x+1
	echo %x% - %%A
)

REM non va x++