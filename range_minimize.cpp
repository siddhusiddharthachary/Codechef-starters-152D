#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        
        if (n <= 3) {
            cout << 0 << endl;
            continue;
        }
        
        sort(A.begin(), A.end());
        
        
        int one = A[n-3] - A[0];   
        int two = A[n-2] - A[1];   
        int three = A[n-1] - A[2];   
        int four = A[n-1] - A[2];   
        
        int result = min({one, two, three, four});
        
        cout << result << endl;
    }
}
