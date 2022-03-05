int mySub(int a, int b) {
	if(a>b)
	{
	if (b == 0) return a; 
    return mySub(a ^ b, (~a & b) << 1);
	}
	else
	{
	if (a == 0) return b; 
    return mySub(a ^ b, (~a & b) << 1);
	}
     
}