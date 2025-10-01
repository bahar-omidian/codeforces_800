#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    
    vector<vector<int> > a(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 1) {
                count++;
            }
        }
        if (count >= 2) {
            ans += 1;
        }
    }
    cout << ans << "\n";
    
	return 0;
}

