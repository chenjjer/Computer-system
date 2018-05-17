int uadd_ok(unsigned x, unsigned y){
    return x + y >= x;
}
void signed_prod_result(int x, int y, int &h, int &l){
    int w = sizeof(int)<<3;
    h = 0;
    l = (y&1)?x:0;
    for(int i=1; i<w; i++){
        if( (y>>i)&1 ) {
            h += (unsigned)x>>(w-i);
            if(!uadd_ok(l, x<<i)) h++;
            l += (x<<i);
        }
    }
    h = h + ((x>>(w-1))*y) + ((y>>(w-1))*x);
}
最后一步计算之前的h即为unsigned相乘得到的高位。
sign_h = unsign_h - ((x>>(w-1)) & y) - ((y>>(w-1)) & x);
sign_h = unsign_h + ((x>>(w-1)) * y) + ((y>>(w-1)) * x);