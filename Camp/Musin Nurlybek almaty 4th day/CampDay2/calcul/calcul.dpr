{$APPTYPE CONSOLE}

type
	int = longint;

const
	taskid = 'calcul';
	infile = taskid + '.in';
	outfile = taskid + '.out';
	MAXN = 1000001;

var
	dp: array [1..MAXN] of int;
	n: int;

procedure init;
begin
	assign(input, infile);
	reset(input);
	assign(output, outfile);
	rewrite(output);
end;

function min(x, y: int): int;
begin
	if (x < y) then
		min := x
	else
		min := y;
end;

procedure solve;
var
	i: int;
begin
	readln(n);
	for i := 1 to MAXN do
		dp[i] := MAXN;
	dp[1] := 0;
	for i := 2 to n do begin
		dp[i] := dp[i - 1] + 1;
		if (i mod 2 = 0) then
			dp[i] := min(dp[i], dp[i div 2] + 1);
		if (i mod 3 = 0) then
			dp[i] := min(dp[i], dp[i div 3] + 1);
	end;
	writeln(dp[n]);
end;

begin
	init;
	solve;
end.
