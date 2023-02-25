#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int k = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            k++;
        }
    }
    cout << k;
    return 0;
}
