#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int M, P, cnt = 0;
        cin >> M;
        cin >> P;

        if (M == 299) {
            cout << 0 << endl;
            continue;

        }
        while (true) {
            M++;
            P += 20;
            if((P+M)>1000 || M>299) break;
            cnt++;
            // cout<<"M is "<<M<<"cnt is"<<cnt<<endl;
        }

        cout <<cnt<<endl;
    }

}
