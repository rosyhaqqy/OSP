# Deque

## Terminologi

- **Head** – merupakan node pertama/paling depan dari deque.
- **Tail** – merupakan node terakhir/paling belakang dari deque.

## Definisi

Deque (Double-ended Queue) merupakan struktur data linear yang mirip dengan doubly linked list sekaligus variasi dari queue. Yang membedakan antara deque dan queue terletak pada posisi untuk menambah atau mengurangi data. Queue hanya dapat menambah data di belakang dan mengurangi data di depan, sementara deque dapat melakukan keduanya (menambah/mengurangi data di depan/belakang).

## Operasi Dasar

- **isEmpty** - untuk memeriksa apakah deque kosong atau tidak.
- **pushFront** - operasi untuk menambahkan data baru dari depan deque.
- **pushBack** - operasi untuk menambahkan data baru dari belakang deque.
- **front** - untuk memperoleh data yang berada pada paling depan.
- **back** - untuk memperoleh data yang berada pada paling belakang.
- **popFront** - operasi untuk menghapus data yang berada pada paling depan.
- **popBack** - operasi untuk menghapus data yang berada pada paling belakang.

**Kompleksitas waktu** semua operasi dilakukan secara konstan O(1).

## Aplikasi Deque

Deque umumnya digunakan untuk menyelesaikan problem dengan karakteristik **Sliding Window**. Pada problem Sliding Window, kita perlu untuk menghapus data dari depan dan belakang queue. Contoh problem Sliding Window adalah mencari nilai maksimum dari seluruh subarray dengan size tertentu.

![m1-3](https://user-images.githubusercontent.com/86661387/222363102-6639575b-73d2-4f68-bc2e-459b7aaf0e3e.png)

- ### Struktur Deque

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      return 0;
  }
  ```

- ### isEmpty

  Untuk memeriksa apakah deque kosong.

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      if(d.empty()){
          cout << "deque ini kosong" << endl;
      }

      return 0;
  }
  ```

- ### pushFront

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      d.push_front(1);
      d.push_front(2);
      d.push_front(3);

      for(auto i = d.begin(); i != d.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

- ### pushBack

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      d.push_front(1);
      d.push_front(2);
      d.push_front(3);
      d.push_back(4);
      d.push_back(5);

      for(auto i = d.begin(); i != d.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

- ### front

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      d.push_front(1);
      d.push_front(2);
      d.push_front(3);
      d.push_back(4);
      d.push_back(5);

      cout << d.front() << endl;

      return 0;
  }
  ```

- ### rear

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      d.push_front(1);
      d.push_front(2);
      d.push_front(3);
      d.push_back(4);
      d.push_back(5);

      cout << d.back() << endl;

      return 0;
  }
  ```

- ### popFront

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      d.push_front(1);
      d.push_front(2);
      d.push_front(3);
      d.push_back(4);
      d.push_back(5);

      d.pop_front();

      for(auto i = d.begin(); i != d.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

- ### popBack

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      deque<int> d;

      d.push_front(1);
      d.push_front(2);
      d.push_front(3);
      d.push_back(4);
      d.push_back(5);

      d.pop_back();

      for(auto i = d.begin(); i != d.end(); i++){
          cout << *i << endl;
      }

      return 0;
  }
  ```

Selengkapnya mengenai **`std::deque`** dapat dibaca [di sini](https://www.geeksforgeeks.org/deque-cpp-stl/) atau pada dokumentasi bahasa C++ [di sini](https://cplusplus.com/reference/deque/deque/).
