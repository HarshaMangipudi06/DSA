#include <iostream>
using namespace std;

void fact(int n, long long ans) {
    if (n == 0) {
        cout << ans;
        return;
    }

    fact(n - 1, ans * n);
}

int main() {
    int n;
    cin >> n;
    fact(n, 1);
    return 0;
}
