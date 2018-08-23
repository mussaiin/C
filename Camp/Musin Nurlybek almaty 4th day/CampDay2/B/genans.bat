for /L %%i in (6,1,9) do (
	copy 0%%i dust.in
	dust_wa.exe
	copy dust.out 0%%i.a
)