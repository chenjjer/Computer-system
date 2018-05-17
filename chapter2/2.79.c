void copy_int(int val, void *buf, int maxbytes) {
	if (maxbytes - sizeof(val) >= 0) 
		memccpy(buf, (void *) &val, sizeof(val));
}
/*
A:size_t 是无符号整数，因此左边都会转换为无符号整数，它肯定是 > 0)
B:
  if (maxbytes > 0 && maxbytes >= sizeof(val);
  */
  