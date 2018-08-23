program Checker;
{$APPTYPE CONSOLE}
uses
  SysUtils,
  TestLib in 'TestLib.pas';
begin
  If ouf.ReadReal = ans.ReadReal Then Quit(_OK, '')
                                 Else Quit(_WA, '');
end.

