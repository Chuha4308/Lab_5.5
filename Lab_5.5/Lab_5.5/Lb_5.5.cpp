#include <iostream>
#include <vector>
using namespace std;

int countWays(int m, int x, int y, int z, vector<int>& dp) {
    if (m == 0) return 1;
    if (m < 0) return 0;


    if (dp[m] != -1) return dp[m];


    dp[m] = countWays(m - x, x, y, z, dp) + countWays(m - y, x, y, z, dp) + countWays(m - z, x, y, z, dp);

    return dp[m];
}

int main() {
    int m, x, y, z;
    cout << " m: ";
    cin >> m;
    cout << " x, y, z: ";
    cin >> x >> y >> z;


    vector<int> dp(m + 1, -1);


    int result = countWays(m, x, y, z, dp);

    cout << " " << m << " : " << result << endl;

    return 0;
}
