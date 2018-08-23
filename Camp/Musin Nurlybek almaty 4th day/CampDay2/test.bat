@ ECHO OFF
copy note.in.%1 note.in
run -t 2s -m 16m note 
fc note.out.%1 note.out
pause