# 📚 Rekursi dalam Pemrograman

## Apa itu Rekursi?

**Rekursi** adalah teknik dalam pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan suatu masalah. Prinsip utama rekursi adalah **memecah masalah besar menjadi sub-masalah yang lebih kecil dan serupa**, hingga mencapai kondisi yang cukup sederhana untuk diselesaikan langsung (*base case*).

![image](https://miro.medium.com/max/719/1*y3-7Dh1DIsm5Ut9OZjmXTg.jpeg)

---

## Struktur Umum Rekursi

Rekursi biasanya terdiri dari dua bagian utama:

* **Base Case**: Kondisi penghentian agar fungsi tidak terus memanggil dirinya tanpa henti.
* **Recursive Case**: Kondisi di mana fungsi masih perlu memanggil dirinya untuk menyelesaikan sub-masalah.

---

## Kegunaan Rekursi

Rekursi banyak digunakan dalam berbagai jenis algoritma dan struktur data:

1. **Struktur Data Rekursif**:

   * Pohon (*tree*)
   * Graf (*graph*)
   * Linked List

2. **Algoritma Pencarian dan Penjelajahan**:

   * Depth First Search (DFS)
   * Backtracking (misal: Sudoku Solver, N-Queens Problem)

3. **Divide and Conquer**:

   * Merge Sort
   * Quick Sort
   * Binary Search

4. **Perhitungan Kombinatorik dan Brute Force**:

   * Faktorial
   * Fibonacci
   * Permutasi dan kombinasi
   * Brute force solusi dari persoalan NP-complete

---

## Visualisasi Rekursi

Misalkan kita memanggil fungsi `power(2, 3)`, maka prosesnya akan seperti ini:

```
power(2, 3)
= 2 * power(2, 2)
= 2 * (2 * power(2, 1))
= 2 * (2 * (2 * power(2, 0)))
= 2 * (2 * (2 * 1))
= 8
```

---

## Contoh Fungsi Rekursif

```cpp
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung a pangkat m
int power(int a, int m) {
    if (m == 0) return 1;             // base case
    return a * power(a, m - 1);       // recursive case
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;
    return 0;
}
```

---

## Contoh Lain Fungsi Rekursi
```cpp
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung bilangan Fibonacci ke-n
int fibonacci(int n) {
    if (n == 0) return 0;  // base case 1
    if (n == 1) return 1;  // base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
}

int main() {
    // Cetak deret Fibonacci dari F(0) hingga F(10)
    for (int i = 0; i <= 10; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }
    return 0;
}
```

---

## Tips Menggunakan Rekursi

* Selalu pastikan ada **base case** yang dapat tercapai.
* Gunakan **memoization** atau **caching** untuk menghindari perhitungan ulang pada submasalah (contoh: Fibonacci).
* Jika memungkinkan, pastikan rekursi tidak terlalu dalam untuk menghindari **stack overflow**.

---

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Array untuk menyimpan hasil yang sudah dihitung
vector<int> memo(1000, -1); // Inisialisasi dengan -1 (belum dihitung)

// Fungsi Fibonacci dengan memoization
int fibonacci(int n) {
    if (n == 0) return 0; // base case
    if (n == 1) return 1; // base case

    if (memo[n] != -1) return memo[n];           // jika sudah dihitung, ambil dari cache
    return memo[n] = fibonacci(n - 1) + fibonacci(n - 2); // simpan hasilnya dan kembalikan
}
int fibonacci2(int n) {
    int F[10000] = {};
    // base case
    F[0] = 0;
    F[1] = 1;
    // caching denan iterasi
    for (int i = 2; i <= n; i++){
        F[i] = F[i-1] + F[i-2];
    }
    return F[n];
}
int main() {
    for (int i = 0; i <= 30; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }
    return 0;
}

```
---
## Alternatif: Iterasi vs Rekursi

Beberapa masalah bisa diselesaikan baik dengan **rekursi** maupun **iterasi**. Namun:

* Rekursi cocok untuk masalah yang strukturnya **rekursif secara alami** (misalnya: tree traversal).
* Iterasi bisa lebih **efisien memori** karena tidak memerlukan stack tambahan dari pemanggilan fungsi berulang.


