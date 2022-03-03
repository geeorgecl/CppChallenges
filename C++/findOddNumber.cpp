#include<bits/stdc++.h>
using namespace std;

int findOdd(vector<int> ar) {
    int ans = 0;
    for(int i=0; i<ar.size(); i++) {
        ans ^= ar[i];
    }
    return ans;
}

int main() {
    int n;
    vector<int> ar;
    cout << "Array of integers: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        ar.push_back(x);
    }
    cout << findOdd(ar) << endl;
    return 0;
}