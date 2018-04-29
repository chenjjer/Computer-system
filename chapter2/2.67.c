int bad_int_size_is_32() {
	int set_msb = 1 << 31;
	int beyond_msb = 1 << 32;
	return set_msb && !beyond_msb;
}

/* 
A: 在beyond_msb 中，由于位数为32位因此需要进行位数扩展,没哟定义32位扩展
B: beyond_msb = 2 << 32;
C: a = 1<< 15;
   a <<= 15;
   set_msb = a << 1;
   beyond_msb = a << 2;
   
       //set_msb = 1 << 15;
	   //beyond_msb = 2 << 15;
	 
 */
 