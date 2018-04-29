int int_shifts_are_logical(unsigned x) {
	int x = ~0;
	return (x>>1) == x;
}
