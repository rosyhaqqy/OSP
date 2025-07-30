#include <iostream>
using namespace std;

// Fungsi rekursif untuk mencetak angka dari 1 sampai n
void cetak(int n) {
    if (n == 0) return;        // base case: jika n = 0, berhenti
    cetak(n - 1);              // rekursi ke n-1 dulu
    cout << n << endl;         // setelah kembali, cetak n
}

int main() {
    int N;
    cin >> N;
    cetak(N);
    return 0;
}
