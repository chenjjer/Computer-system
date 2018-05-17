int saturating_add(int x, int y) {
	int ret  = x + y;
	int w = sizeof(int) << 3;
	int t = x + y;
	
	x >> = ( w - 1 );
	y >> = (w - 1);
	t >> = ( w - 1);
	int a = ~x & ~y & t;
	int b = x & y & ~t;
	int c = ~(a | b );
	return  (a & INT_MAX) | ( b & ret) | ( novf & ini_min);

}
	