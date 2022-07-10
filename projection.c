#include "projection.h"

void coordinati(int x, int y, int z, int xa, int ya, int za, int v ,int M[]) {
	int t, q, rez;
	t = xa * xa + ya * ya + za * za;
	q = xa * x + ya * y + za * z + v;
	q = -q;
	rez = q / t;
	M[0] = xa * rez + x;
	M[1] = ya * rez + y;
	M[2] = za * rez + z;
}