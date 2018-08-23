program z1;
const MaxN = 1000000;
var
    n, i : integer;
    prev, res : array [1..MaxN] of integer;
    k : integer;
    count : integer;
begin
   reset(input, 'calcul.in');
   rewrite(output, 'calcul.out');
   read(n);
   prev[1] := 0;
   for i := 2 to n do begin
      if n mod 2 = 0 then begin
         k := n div 2;
      end;
      if n mod 3 = 0 then begin
         if k > n div 3 then k := n div 3;
      end;
      if k > n - 1 then begin
         k := n-1;
      end;
   end;
   k := n;
   count := 0;
   while k <> 0 do begin
      inc(count);
      k := prev[k];
   end;
   writeln(count);

   k := n;
   while k <> 0 do begin
      res[count] := k;
      k := prev[k];
      dec(count);
   end;

   for i := 1 to count do write(res[i],' ');

   close(output);
end.