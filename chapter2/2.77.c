int divide_power2(int x, int k) {
	x = x >> k;
	int w = sizeof(int) << 3;
	x += ( x >> (w - 1) && ( x & ((1 << k) -1));
	return x;
}