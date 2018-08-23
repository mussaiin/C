del res.txt
g++ c.cpp
g++ numbers.cpp
echo off
for %%i in (??) do (
Copy %%i numbers.in
run -t 2s -m 64M a
fcmp numbers.in numbers.out %%i.a >> res.txt
)
