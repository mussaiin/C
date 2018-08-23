del res.txt
g++ a.cpp
g++ sequence.cpp
echo off
for %%i in (??) do (
Copy %%i sequence.in
run -t 2s -m 64M a
fcmp sequence.in sequence.out %%i.a >> res.txt
)
