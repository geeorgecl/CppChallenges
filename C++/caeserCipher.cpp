#include <bits/stdc++.h>

using namespace std;

string caesarCipher(std::string s, int k)
{
	int n = s.size();
	string ans = "";

	for (auto c : s)
	{
		if (c >= 'a' && c <= 'z')
		{
			int t = c - 'a';
			t = (t + k) % 26;
			ans += (char)(t + 'a');
		}
		else if (c >= 'A' && c <= 'Z')
		{
			int t = c - 'A';
			t = (t + k) % 26;
			ans += (char)(t + 'A');
		}
		else
			ans += c;
	}
	return ans;
}

int main()
{
	//input
	string s;
	int k;
	getline(cin, s);
	cin >> k;

	cout << caesarCipher(s, k) << endl;
	return 0;
}