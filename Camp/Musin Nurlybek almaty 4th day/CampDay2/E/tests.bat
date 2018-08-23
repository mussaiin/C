del res.txt
g++ e.cpp
g++ tshirts.cpp
echo off
for %%i in (??) do (
Copy %%i tshirts.in
run -t 2s -m 64M a
fcmp tshirts.in tshirts.out %%i.a >> res.txt
)
