#include <bits/stdc++.h>
using namespace std;

int sharedLetters(string str1, string str2) {
	string str3, str4;
	int x=0;
	for(int i=0;i<str1.length();i++){
		x=0;
		for(int j=0;j<str3.length();j++){
			if(str3[j]==str1[i]) x++;
		}
		if(x==0) str3=str3+str1[i];
	}
	for(int i=0;i<str2.length();i++){
		x=0;
		for(int j=0;j<str4.length();j++){
			if(str2[j]==str2[i]) x++;
		}
		if(x==0) str4=str4+str2[i];
	}
	x=0;
	for(int i=0;i<str3.length();i++){
		for(int j=0;j<str4.length();j++){
			if(str3[i]==str4[j]){
				x++;
				break;
			}
		}
	}
	return x;
}

int main() {
	int n; // test case
	string s1,s2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s1;
		cin>>s2;
		cout<<sharedLetters(s1, s2)<<endl;
	}
	return 0;
}