#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin >> test;

    while (test--){
        int n, m;
        cin >> n >> m;

        if (n == 1) cout << 0 << endl;
        else if (n == 2) cout << m << endl;
        else cout << m * 2 << endl;
    }

    return 0;

}