#include <bits/stdc++.h>
using namespace std;

string divisible(int number)
{
    if (number % 100 == 0)
        return "true";
    else
        return "false";
}

int main()
{

    cout << divisible(1000);
    return 0;
}
