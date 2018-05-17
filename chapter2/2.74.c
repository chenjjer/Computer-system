int tsub_ovf(int x, int y) {
	int ret = x - y;
	int w  = sizeof(int) << 3;
	x >> = (w - 1);
	y >> = (w - 1);
	ret >> = (w -1);
	return ( x != y) && ( y = t);

}
/*
 题目理解错误
对于有符号整数相减，溢出的规则可以总结为：
t = a-b;
如果a, b 同号，则肯定不会溢出。
如果a>=0 && b<0，则只有当t<=0时才算溢出。
如果a<0 && b>=0，则只有当t>=0时才算溢出。
不过，上述t肯定不会等于0，因为当a，b不同号时：
1) a!=b，因此a-b不会等于0。
2) a-b <= abs(a) + abs(b) <= abs(TMax) + abs(TMin)=(2^w - 1)
所以，a，b异号，t，b同号即可判定为溢出。

*/

