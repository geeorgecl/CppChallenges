#include<bits/stdc++.h>

using namespace std;

int circuitPower(int v,int c)
{
    return (v * c);
}

int main()
{
    int pow,volt,curr;
    cin>>volt>>curr;
    pow = circuitPower(volt, curr);
    cout<<pow;
}