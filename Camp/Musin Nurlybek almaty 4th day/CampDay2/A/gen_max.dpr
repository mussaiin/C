Uses
  SysUtils;

Var
  I, N, M: Integer;

Begin
  N := StrToInt(ParamStr(1));
  M := StrToInt(ParamStr(2));
  Writeln(N);
  For I := 1 to N do
    Write(M, ' ');
End.