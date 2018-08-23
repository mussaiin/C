{$APPTYPE CONSOLE}

uses
	SysUtils;

type
	int = longint;

const
	MAXN = 1000;

var
	v, w: array [1..MAXN] of int;
	n, k, numtest: int;

function nametest(numtest: int): string;
var
	s: string;
begin
	s := IntToStr(numtest);
	if (length(s) = 1) then
		s := '0' + s;
	nametest := s;
end;

procedure writetest();
var
	name: string;
	i: int;
begin
	numtest := numtest + 1;
	name := nametest(numtest);
	assign(output, name);
	rewrite(output);
	writeln(n,' ', k);
	for i := 1 to n do begin
		writeln(v[i], ' ', w[i]);
	end;
	close(output);
end;

procedure gentest(nn: int);
var
	i: int;
begin
	n := nn; k := random(20000);
	for i := 1 to n do begin
		v[i] := random(10000) + 1;
		w[i] := random(10000) + 1;
	end;
	writetest();
end;

begin
	randseed := 184375324;
	numtest := 5;
	gentest(5);
	gentest(100);
	gentest(500);
	gentest(1000);	
end.