std::string binary(int decimal) {
	if(decimal==0) return "0";
	std::string s="";
	while(decimal)
	{
		if(decimal&1) s="1"+s;
		else s="0"+s;
		decimal>>=1;
	}
	return s;
}