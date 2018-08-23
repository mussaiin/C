del res.txt
g++ d.cpp
g++ lcs.cpp
echo off
for %%i in (??) do (
Copy %%i lcs.in
run -t 2s -m 64M a
fcmp lcs.in lcs.out %%i.a >> res.txt
)
