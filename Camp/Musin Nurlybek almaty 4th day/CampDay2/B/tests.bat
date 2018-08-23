del res.txt
g++ b.cpp
g++ dust.cpp
echo off
for %%i in (??) do (
Copy %%i dust.in
run -t 2s -m 64M a
fcmp dust.in dust.out %%i.a >> res.txt
)
