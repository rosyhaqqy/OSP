# Set, Map, dan Pair

**`std::set`** dan **`std::map`** merupakan _STL container_.

Jika **`std::set`** hanya menyimpan satu nilai (_key_), maka **`std::map`** menyimpan sepasang nilai (_key and value_).

Modul ini akan menjelaskan cara menggunakan kedua _STL container_ tersebut.

## **`std::set`**

- ### set::empty()

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      set<int> s;

      if(s.empty()){
          cout << "set ini kosong" << endl;
      }

      return 0;
  }
  ```

- ### set::insert()

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      set<int> s;

      s.insert(4);
      s.insert(3);
      s.insert(2);
      s.insert(1);

      for(auto i = s.begin(); i != s.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

  std::set akan secara otomatis mengurutkan data secara ascending. Ingin menampilkan data secara descending? Gunakanlah fungsi rbegin() dan rend() atau lihat pada contoh dibawah.

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      set<int, greater<int>> s;

      s.insert(4);
      s.insert(3);
      s.insert(2);
      s.insert(1);

      for(auto i = s.begin(); i != s.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

  > catatan: std::set tidak dapat menyimpan dua nilai yang sama

- ### set::find()

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      set<int> s;

      s.insert(4);
      s.insert(3);
      s.insert(2);
      s.insert(1);

      auto pointer = s.find(5);

      if(pointer == s.end()){
          cout << "data tidak ditemukan" << endl;
      }
      else{
          cout << "data ditemukan" << endl;
      }

      return 0;
  }
  ```

- ### set::erase()

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      set<int> s;

      s.insert(4);
      s.insert(3);
      s.insert(2);
      s.insert(1);

      s.erase(2);
      // tidak menggunakan iterator

      for(auto i = s.begin(); i != s.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      set<int> s;

      s.insert(4);
      s.insert(3);
      s.insert(2);
      s.insert(1);

      auto pointer = s.find(2);

      s.erase(pointer);
      // menggunakan iterator

      for(auto i = s.begin(); i != s.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

Selengkapnya mengenai **`std::set`** dapat dibaca [di sini](https://www.geeksforgeeks.org/set-in-cpp-stl/) atau pada dokumentasi bahasa C++ [di sini](https://cplusplus.com/reference/set/set/).

## **`std::map`**

- ### map::empty()

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      map<int, int> m;

      if(m.empty()){
          cout << "map ini kosong" << endl;
      }

      return 0;
  }
  ```

- ### map::insert()

  Ada banyak cara untuk memasukkan nilai pada **`std::map`**.

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      map<int, int> m;

      m.insert({1, 2});
      // secara langsung

      m.insert(make_pair(2, 3));
      // menggunakan fungsi make_pair

      m.insert(pair<int, int>(3, 4));
      // membuat object pair, sama seperti contoh sebelumnya

      m[4] = 5;
      // menggunakan indexing

      m[5]++;
      // increment

      for(auto i = m.begin(); i != m.end(); i++){
          cout << i->first << " " << i->second << endl;
      }

      return 0;
  }
  ```

  Bagaimana jika kita ingin agar data _key_ dalam **`std::map`** terurut secara _descending_?

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      map<int, int, greater<int>> m;

      m.insert({1, 2});
      m.insert(make_pair(2, 3));
      m.insert(pair<int, int>(3, 4));
      m[4] = 5;
      m[5]++;

      for(auto i = m.begin(); i != m.end(); i++){
          cout << i->first << " " << i->second << endl;
      }

      return 0;
  }
  ```

- ### map::find()

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      map<int, int> m;

      m.insert({1, 2});
      m.insert(make_pair(2, 3));
      m.insert(pair<int, int>(3, 4));
      m[4] = 5;
      m[5]++;

      auto pointer = m.find(1);
      /*
      menggunakan fungsi find
      mengembalikan iterator yang menunjuk pada elemen map
      dengan nilai key = 1
      */
      if(pointer != m.end()){
          cout << pointer->first << " " << pointer->second << endl;
      }

      cout << m[5] << endl;
      /*
      indexing, hanya menampilkan value pada elemen map
      dengan nilai key = 5
      */

      return 0;
  }
  ```

- ### map::erase()

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      map<int, int> m;

      m.insert({1, 2});
      m.insert(make_pair(2, 3));
      m.insert(pair<int, int>(3, 4));
      m[4] = 5;
      m[5]++;
      m[6] = 6;

      m.erase(1);
      // menghapus elemen map dengan key = 1

      auto pointer1 = m.find(2);
      m.erase(pointer1);
      // menggunakan iterator dari fungsi find

      auto pointer2 = m.find(5);
      m.erase(m.begin(), pointer2);
      // menghapus semua elemen dengan key < 5

      m[5] = 0;
      /*
      tidak benar-benar menghapus, hanya merubah
      value menjadi 0 pada elemen dengan key = 5
      */

      for(auto i = m.begin(); i != m.end(); i++){
          cout << i->first << " " << i->second << endl;
      }

      return 0;
  }
  ```

Selengkapnya mengenai **`std::map`** dapat dibaca [di sini](https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/) atau pada dokumentasi bahasa C++ [di sini](https://cplusplus.com/reference/map/map/).

**`std::pair`** di C++ adalah template yang terdapat dalam header **`utility`** dan digunakan untuk menyimpan dua nilai yang bisa bertipe berbeda dalam satu objek.

- ### Struktur Dasar

```c++
#include <iostream>
#include <utility> // untuk std::pair
using namespace std;

int main() {
    pair<int, string> myPair(1, "Halo");

    cout << "First: " << myPair.first << "\n";
    cout << "Second: " << myPair.second << "\n";

    return 0;
}
```

- ### Kegunaan

  **`std::pair`** sering digunakan untuk:

  - Mengembalikan dua nilai dari sebuah fungsi.

  - Menyimpan pasangan key-value (contoh: di dalam **`std::map`**).

  - Menyederhanakan kode yang butuh asosiasi dua elemen.

- ### Deklarasi dan Inisialisasi

  ```c++
  pair<int, char> p1 = make_pair(10, 'A'); // menggunakan make_pair
  pair<int, char> p2(20, 'B'); // inisialisasi langsung
  ```

- ### Akses Elemen

  1. `pair.first` untuk elemen pertama
  2. `pair.second` untuk elemen kedua

```c++
cout << p1.first << ", " << p1.second << endl;
```

- ### Perbandingan

**`std::pair`** mendukung operator perbandingan seperti <, ==, !=, dll., secara leksikografis:

```c++
pair<int, int> a(1, 2), b(1, 3);
if (a < b) {
    std::cout << "a lebih kecil dari b\n";
}
```

- ### Contoh Fungsi yang Mengembalikan pair

```c++
pair<int, int> bagi(int a, int b) {
    return {a / b, a % b}; // hasil dan sisa
}
```
