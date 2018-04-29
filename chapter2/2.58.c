is_little_endian() {
if((0xF && 1) == 1)
   return 1;
else 
    return 0;
}
#######
int is_little_endian(void) {
 int x= 1;
return (int) (*(char*) &x);
}