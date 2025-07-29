# Queue

## Terminologi

- **front** – merupakan node yang paling depan pada queue.
- **rear** – merupakan node yang paling belakang pada queue.

## Definisi

Queue merupakan struktur data linear yang menggunakan prinsip **First In First Out** (FIFO). Dengan prinsip FIFO, elemen pertama yang dimasukkan akan menjadi elemen pertama yang akan dikeluarkan. Setiap elemen pada queue selalu ditambahkan di akhir dan dikeluarkan di depan. Contoh penerapannya adalah barisan orang yang menunggu bus. Orang pertama yang pada antrian menjadi yang pertama yang dapat menaiki bus.

![m1-2](https://user-images.githubusercontent.com/86661387/222363059-6de2cc4f-2f37-4e61-a622-8befd5c53f75.png)

Penerapan queue biasa digunakan dalam BFS(Breadth-First-Search) graph transversal.

## Operasi Dasar

- **isEmpty** – untuk memeriksa apakah queue kosong atau tidak.
- **size** – untuk mendapatkan data size pada queue.
- **push** – operasi untuk menambahkan data pada antrian dari belakang.
- **pop** – operasi untuk menghapus data terdepan pada antrian.
- **front** – untuk mendapatkan data terdepan pada antrian.

**Kompleksitas waktu** semua operasi dilakukan secara konstan O($1$).

## Aplikasi Queue

Queue biasa digunakan pada BFS (Breafth First Search) graph transersal yang nantinya akan dijelaskan pada modul selanjutnya. Contoh problem lain yang dapat diselesaikan dengan queue adalah melakukan generate binary number dari $1$ hingga $n$.

- ### Struktur Queue

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      queue<int> q;

      return 0;
  }
  ```

  > Catatan: STL Queue tidak memiliki iterator

- ### isEmpty

  Untuk memeriksa apakah queue kosong.

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      queue<int> q;

      if(q.empty()){
          cout << "queue ini kosong" << endl;
      }

      return 0;
  }
  ```

- ### push

  Untuk melakukan push, langkah-langkahnya adalah sebagai berikut.

  - Buat node baru.
  - Jika queue kosong, jadikan node baru sebagai front dan rear
  - Jika tidak kosong, maka next dari rear adalah node baru, jadikan node baru sebagai rear.

    ```c++
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        queue<int> q;

        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);

        return 0;
    }
    ```

- ### pop

  Untuk melakukan pop (penghapusan node terdepan).

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      queue<int> q;

      q.push(1);
      q.push(2);
      q.push(3);
      q.push(4);

      q.pop();

      return 0;
  }
  ```

- ### front

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      queue<int> q;

      q.push(1);
      q.push(2);
      q.push(3);
      q.push(4);

      while(!q.empty()){
          cout << q.front() << endl;
          q.pop();
      }

      return 0;
  }
  ```

Selengkapnya mengenai **`std::queue`** dapat dibaca [di sini](https://www.geeksforgeeks.org/queue-cpp-stl/) atau pada dokumentasi bahasa C++ [di sini](https://cplusplus.com/reference/queue/queue/).
