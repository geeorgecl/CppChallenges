#include <iostream>
using namespace std;

int addition(int n) {
    return n + 1;
}

int main() {
    int number;
    cin>>number;
    cout << addition(number) << endl;
}