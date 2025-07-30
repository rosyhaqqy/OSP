#include <iostream>
using namespace std;

int countWays(int n) {
    if (n == 0) return 1; // sudah sampai puncak
    if (n < 0) return 0;  // tidak valid
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << countWays(n) << endl;
    return 0;
}
