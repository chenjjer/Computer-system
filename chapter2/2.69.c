unsigned rotate_right( unsigned x, int n) {
	int w = sizeof(unsigned)*8;
	return (x >> n) | ( x<< (w - n ));
}