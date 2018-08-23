{$APPTYPE CONSOLE}

type
	int = longint;

const
	taskid = 'dust';
	infile = taskid + '.in';
	outfile = taskid + '.out';
	MAXN = 1000;

var
	v, w: array [1..MAXN] of int;
	n, k: int;

procedure init;
begin
	assign(input, infile);
	reset(input);
	assign(output, outfile);
	rewrite(output);
end;

procedure swap(var a, b: int);
var
	t: int;
begin
	t := a; a := b; b := t;
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
	i, j, p: int;
	res: double;
begin
	readln(n, k);
	for i := 1 to n do begin
		readln(v[i], w[i]);
	end;
	for i := n - 1 downto 1 do begin
		for j := 1 to i do begin
			if (v[j] / w[j] > v[j + 1] / w[j + 1]) then begin
				swap(v[j], v[j + 1]);
				swap(w[j], w[j + 1]);
			end;
		end;
	end;
	res := 0;
	while (k > 0) and (n > 0) do begin
		p := min(k, w[n]);
		if (w[n] > 0) then
			res := res + (p * v[n] / w[n]);
		k := k - p;
		n := n - 1;
	end;
	writeln(res:0:5);
end;

begin
	init;
	solve;
end.
