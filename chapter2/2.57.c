void show_short(short int x)
 {
 show_bytes((byte_pointer) &x, sizeof(short int));
 }

void show_long(long int x)
 {
 show_bytes((byte_pointer) &x, sizeof(long));
 }
 
 void show_double(double x)
 {
	show_bytes((byte_pointer) &x, sizeof(double));
}