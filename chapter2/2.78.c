int mul5div8 ( int x) {
	// x = (x<<2 + x) >> 3;
	int b0 = x&1, b2 = (x >> 2) &1;
	int ans = (x >> 3) + (x >> 1)
	int w = sizeof(int) << 3;
	ans += (b0 & b2);
	ans += ( (x >> (w - 1)) && ( x & 7));
	return ans;
}
	