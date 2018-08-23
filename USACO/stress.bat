@echo
gen.exe
tup.exe
um.exe
fc milktemp.out milktemp1.out
if errorlevel 1 (
	pause
	exit
)
echo.
stress.bat