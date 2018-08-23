for /L %%i in (1, 1, 9) do (
  ren 00%%i.dat 0%%i
  ren 00%%i.ans 0%%i.a
)

for /L %%i in (10, 1, 20) do (
  ren 0%%i.dat %%i
  ren 0%%i.ans %%i.a
)
