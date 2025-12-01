@echo off
REM enable delayed variable expansion serve per usare le variabili negli if pk seno nn vengono lette quando vengono eseguite ma prima anche se il contenuto e nullo
setlocal enabledelayedexpansion

REM con /p è come se fosse cin
set /p x=Primo numero: 
set /p y=Secondo numero: 

:op

echo 1) Addizione
echo 2) Sottrazzione
echo 3) Moltiplicazione
echo 4) Divisione
set /p o=Inserisci il numero del operazione: 

if %o%==1 (
	set /a somma=x+y
	echo Addizione: !somma!
	goto EOF
)
if %o%==2 (
	set /a meno=x-y
	echo Sottrazione: !meno!
	goto EOF
)
if %o%==3 (
	set /a per=x*y
	echo Moltiplicazione: !per!
	goto EOF
)
if %o%==4 (
	if %y%==0 (
		echo Errore: divisione per zero non permessa
		goto EOF
	)
	set /a diviso=x/y
	echo Divisione: !diviso!
	goto EOF
)

echo .
echo Numero non contemplato
REM goto: torna a dove c'è scritto :op
goto op 

:EOF