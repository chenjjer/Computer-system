typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum) {
	return (word >> (bytenum << 3)) & 0xff;
}

/*
A:在这个过程中，返回的是int型，而非无符号型
B:
  int xbyte(packed_t word, int bytenum) {
	  int ret = word << ((3 - bytenum )<< 3); 
	  return ret >> 24;
  }
  */