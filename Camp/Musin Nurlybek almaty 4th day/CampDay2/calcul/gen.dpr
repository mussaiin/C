{$APPTYPE CONSOLE}

uses
	SysUtils;

const
	MAXN = 1000010;

type
	int = longint;

var
	dp: array [1..MAXN] of int;
	numtest: int;

function nametest(numtest: int): string;
var
	s: string;
begin
	s := IntToStr(numtest);
	if (length(s) = 1) then
		s := '0' + s;
	nametest := s;
end;

function min(x, y: int): int;
begin
	if (x < y) then
		min := x
	else
		min := y;
end;

function max(x, y: int): int;
begin
	if (x < y) then
		max := y
	else
		max := x;
end;

procedure precalc();
var
	i: int;
begin
	for i := 1 to MAXN do
		dp[i] := MAXN;
	dp[1] := 0;
	for i := 2 to MAXN do begin
		dp[i] := dp[i - 1] + 1;
		if (i mod 2 = 0) then
			dp[i] := min(dp[i], dp[i div 2] + 1);
		if (i mod 3 = 0) then
			dp[i] := min(dp[i], dp[i div 3] + 1);
	end;
end;

function calc(n: int): int;
begin
	calc := dp[n];
end;

procedure writetest(n: int);
var
	name: string;
begin
	inc(numtest);
	name := nametest(numtest);
	assign(output, name);
	rewrite(output);
	writeln(n);
	close(output);
	assign(output, name + '.a');
	rewrite(output);
	writeln(calc(n));
	close(output);
end;

procedure genmaxtest();
var
	i, maxr: int;
begin
	maxr := 0;
	for i := 1 to MAXN do begin
		maxr := max(maxr, dp[i]);
	end;
	for i := 1 to MAXN do begin
		if (maxr = dp[i]) then begin
			writetest(i);
			exit;
		end;
	end;
end;

begin
	randseed := 12342879;
	precalc();
	numtest := 0;
	writetest(1);
	writetest(5);
	writetest(962340);
	writetest(32718);
	writetest(3);
	writetest(53);
	writetest(98734);
	writetest(118098);
	writetest(random(MAXN) + 1);
	writetest(random(MAXN) + 1);
	writetest(1000000);
	writetest(999997);
	genmaxtest();
end.
