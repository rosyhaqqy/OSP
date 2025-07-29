# Dynamic Array

Array mungkin sudah tidak asing lagi, merupakan struktur data paling dasar yang sering digunakan untuk menyimpan data. Array bersifat statis, yang artinya ukurannya selalu tetap dan tidak dapat berubah (grow/shrink). Namun, array memungkinkan kita untuk mengakses elemennya dengan waktu yang konstan 𝑂( $1$ ).

> Kita akan menggunakan **“Static Array”** untuk menyebutkan array statis (fixed-size array).

## Definisi

Sama seperti namanya, **Dynamic Array** memungkinkan kita untuk membuat array yang memiliki kemampuan untuk berubah ukuran (size) sesuai dengan banyaknya data yang dimasukkan dengan tetap mempertahankan karakteristik array, yakni pengaksesan elemen menggunakan _indexing_.

## Ilustrasi

Dynamic Array biasanya diimplementasikan menggunakan Static Array dengan kapasitas awal tertentu.

Misalkan, kapasitas awalnya adalah 2 dan sudah diisi dengan dua elemen yakni 6 dan 5. Ketika hendak mengisi lagi elemen 3, dapat dilihat bahwa kapasitas array sudah penuh.

![first image](https://user-images.githubusercontent.com/86661387/218318040-0784d431-f1be-4385-a2fa-a83420bb1164.png)

Jika kapasitas array sudah penuh, maka akan mengalokasikan array baru dengan ukuran 2 kali ukuran awal (pada umumnya faktor pertumbuhannya adalah 2x), kemudian menyalin data dari array lama ke array baru. Array barulah yang akan digunakan. Disini, array terbagi menjadi dua area:

- **_Logical Size_** adalah area array yang dapat diakses.
- **_Capacity_** adalah ukuran array yang sebenarnya. Area diluar logical size seharusnya tidak dapat diakses.

![second image](https://user-images.githubusercontent.com/86661387/218318224-9bb21af6-fd6b-42db-915f-84fff318b85c.png)

> Catatan : Dynamic Array berbeda dengan array yang dialokasikan secara dinamis.

## Static Array vs Dynamic Array

Berikut tabel perbandingan antara Static Array dengan Dynamic Array.

| **Static Array**                                                    | **Dynamic Array**                                                                                                                |
| ------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------- |
| Ukurannya tetap.                                                    | Ukuran dapat berubah sesuai dengan banyaknya data.                                                                               |
| Sangat efisien dalam segi waktu, tidak melibatkan realokasi memori. | Sedikit kurang efisien dalam segi waktu dibandingkan Static Array karena memerlukan alokasi-realokasi memori pada saat run-time. |
| Bagus digunakan apabila ukuran data diketahui dan tetap.            | Bagus digunakan apabila ukuran data tidak tetap.                                                                                 |
| Sangat mungkin wasting memori                                       | Kecil kemungkinan wasting memori apabila diimplementasikan dengan benar                                                          |

## Operasi Dasar

Secara umum, Dynamic Array mendukung operasi-operasi dasar seperti berikut.

- **pushBack** – menambahkan data baru dari belakang. Operasi ini mempunyai mekanisme yang sudah dijelaskan pada ilustrasi.
- **popBack** – menghapus data terakhir/paling belakang.
- **back** – mendapatkan data terakhir/paling belakang.
- **front** – mendapatkan data terdepan/data pertama.
- **getAt(i)** – mendapatkan data pada indeks ke-i (dilakukan secara konstan O( $1$ )).
- **setAt(i, value)** – mengubah data pada indeks ke-i dengan nilai baru.
- **isEmpty** – memeriksa apakah array kosong atau tidak.

Implementasi **`DynamicArray`** pada bahasa C++ dapat dilakukan dengan **`std::vector`**.

```c++
#include <vector>

int main(){
    std::vector<int> v; // default format: vector<tipe_data>
    return 0;
}
```

- ### isEmpty

  Pada **`std::vector`**, terdapat fungsi `empty()` yang memeriksa apakah Vector kosong.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;
      if(v.empty()){
          std::cout << "vector ini kosong" << std::endl;
      }
      return 0;
  }
  ```

- ### pushBack

  Terdapat dua kasus pada saat melakukan **pushBack**, yakni.

#### **Kasus 1: kapasitas array masih cukup**

- Cukup dengan memasukkan data pada index selanjutnya.

#### **Kasus 2: kapasitas array sudah penuh**

- Jika kapasitas array sudah penuh, maka perlu dibuat array baru.
- Alokasikan array baru dengan ukuran dua kali dari kapasitas semula.
- Salin semua data pada array lama ke array baru.
- Referensikan array yang sekarang ke array baru.
- Hapus array yang lama.
- Masukkan data baru pada index selanjutnya.

  Pada **`std::vector`**, proses memasukkan data dapat dengan menggunakan fungsi `push_back()`.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);

      for(int i=0; i<v.size(); i++){
          std::cout << v[i] << std::endl;
      }

      return 0;
  }
  ```

- ### popBack

  Melakukan **popBack** cukup dengan menurunkan ukuran dari array, sehingga index yang diakses tidak akan melebihi size. Pastikan saat melakukan **popBack**, array tidak kosong.

  Berikut adalah contoh **popBack** pada **`std::vector`**.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);
      v.pop_back();

      for(int i=0; i<v.size(); i++){
          std::cout << v[i] << std::endl;
      }

      return 0;
  }
  ```

- ### back

  Untuk mendapatkan data paling belakang.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);

      std::cout << v.back() << std::endl;

      return 0;
  }
  ```

- ### front

  Untuk mendapatkan data paling depan.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);

      std::cout << v.front() << std::endl;

      return 0;
  }
  ```

- ### Ubah nilai

  Pada **`std::vector`**, lakukan perubahan dengan mengakses indeks `vector` sebagaimana ketika kita mengakses indeks array.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);
      v.push_back(15);
      v.push_back(20);

      v[3] = 50; // mengubah nilai pada indeks ke-3

      for(int i=0; i<v.size(); i++){
          std::cout << v[i] << std::endl;
      }

      return 0;
  }
  ```

  **Hindari pengaksesan indeks `vector` melebihi kapasitas `vector` seperti contoh di bawah**.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);
      v.push_back(15);

      v[3] = 50; // mengubah nilai pada indeks ke-3 sementara indeks terbesar vector v adalah 2

      for(int i=0; i<v.size(); i++){
          std::cout << v[i] << std::endl;
      }

      return 0;
  }
  ```

- ### Mengecek nilai

  Pada **`std::vector`**, kita juga dapat mengecek isi `vector` pada indeks tertentu dengan mengakses indeks `vector` sebagaimana ketika kita mengakses indeks array.

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);
      v.push_back(15);
      v.push_back(20);

      std::cout << v[3] << std::endl;

      return 0;
  }
  ```

  atau dengan fungsi `at()`

  ```c++
  #include <iostream>
  #include <vector>

  int main(){
      std::vector<int> v;

      v.push_back(5);
      v.push_back(10);
      v.push_back(15);
      v.push_back(20);

      std::cout << v.at(3) << std::endl;

      return 0;
  }
  ```

  Selengkapnya mengenai **`std::vector`** dapat dibaca [di sini](https://www.geeksforgeeks.org/vector-in-cpp-stl/) atau pada dokumentasi bahasa C++ [di sini](https://en.cppreference.com/w/cpp/container/vector).
