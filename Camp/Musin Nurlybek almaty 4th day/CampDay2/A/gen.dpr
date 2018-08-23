Uses
  SysUtils;

Var
  I, N, M, D: Integer;

Begin
  RandSeed := StrToInt(ParamStr(1));
  N := StrToInt(ParamStr(2));
  M := StrToInt(ParamStr(3));
  Writeln(N);
  For I := 1 to N do
    Write(Random(2 * M + 1) - M, ' ');
End.