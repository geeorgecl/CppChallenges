//quite appropritate for today as it's 22/2/22 :)

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
	string ans="";
	for(int i=0; i<s.length(); i++){
	    if(isalnum(s[i]))
	        ans+=s[i];
	}
	for(int i=0, j=ans.length()-1; i<=j; i++, j--){
	    if(tolower(ans[i])!=tolower(ans[j]))
	        return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	string s;
	cout << "Enter characters/string ";
	getline(cin,s);
	bool flag = isPalindrome(s);
	if(flag)
		cout<< "Palindrome: True" << endl;
	else
		cout <<"Palinfrom: False" << endl;
	return 0;
}
