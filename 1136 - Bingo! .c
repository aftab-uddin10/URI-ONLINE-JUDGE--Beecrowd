#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n, b, x;
    bool p;

    while (cin >> n >> b && (n || b)) {
        vector<int> A(b);
        vector<int> B(n + 1, 0);
        p = true;

        for (int i = 0; i < b; ++i)
            cin >> A[i];

        for (int i = 0; i < b; ++i)
            for (int j = 0; j < b; ++j)
                B[abs(A[i] - A[j])] = 1;

        for (int i = 0; i <= n; ++i)
            if (B[i] == 0)
                p = false;

        cout << (p ? "Y" : "N") << endl;
    }

    return 0;
}
