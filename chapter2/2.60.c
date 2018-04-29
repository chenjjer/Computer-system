unsigned replace_byte (unsigned x, unsigned char b, int i);
replace_byte(0x12345678, 0xAB,  2) -> 0x12ab5678
replace_byte(0x12345678, 0xAB, 0) -> 0x123456AB

unsigned replace_byte(insigned x, unsigned char b, int i) {
    unsigned y;
    y =( (x>>(i*8) | b) << (i*8))& x;
    return y;
}
######
unsigned replace_byte(unsigned x, unsigned char b, int i) {
    return (x& ~(0xff<<(i<<3)) | (b<<(i<<3));
}