@ ECHO OFF
copy %1 angle.in
run -t 1s a
fc %1.a angle.out >> result
