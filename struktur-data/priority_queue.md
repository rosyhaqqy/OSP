# Priority Queue

## Terminologi

- **Top** - merupakan node yang mempunyai prioritas tertinggi pada priority queue.

## Definisi

Priority Queue adalah salah satu variasi queue yang cukup unik, karena priority queue secara default langsung mengurutkan data yang dimasukkan kedalamnya. Pada priority queue, data akan disusun berdasarkan prioritasnya secara urut, sehingga data yang pertama keluar merupakan data yang mempunyai prioritas tertinggi. Hal ini bisa dimanfaatkan untuk menyelesaikan masalah yang berhubungan dengan hal-hal yang memiliki prioritas berbeda-beda, tidak hanya sekedar push atau pop.

> Istilah "pqueue" akan digunakan untuk memperpendek penulisan "Priority queue".

## Operasi Dasar

- **isEmpty** - untuk memeriksa apakah pqueue kosong atau tidak.
- **push** – untuk menambahkan data baru pada top pqueue.
- **pop** – untuk menghapus data yang berada pada top pqueue.
- **top** – untuk memperoleh data yang berada pada top pqueue.

## Aplikasi Priority Queue

Priotiry Queue digunakan dalam menyelesaikan beberapa permasalahan sebagai berikut.

1. Penjadwalan pada CPU
2. Algoritma graph seperti Dijkstra shortest path dan Prim Minimum Spanning Tree menggunakan struktur data priority queue.
3. Permasalahan pada queue yang melibatkan prioritas didalamnya.

Implementasi yang disajikan disini adalah implementasi **Min-Priority Queue**, yakni memprioritaskan bilangan terkecil.

![m1-4](https://user-images.githubusercontent.com/86661387/222363122-2a19f824-2657-4523-aae0-9fed62827c0f.png)

- ### Struktur PriorityQueue

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      priority_queue<int> pq_desc;
      // priority queue diatas akan mengurutkan data secara descending

      priority_queue<int, vector<int>, greater<int>> pq_asc;
      // priority queue diatas akan mengurutkan data secara ascending

      return 0;
  }
  ```

  Pada **`std:priority_queue`**, _`PriorityQueue`_ memiliki 3 parameter saat proses inisialisasi, yaitu:

  - `T`, tipe data dari isi _container_.
  - `Container`, _container_ yang ada di dalam _`PriorityQueue`_ yang digunakan untuk menyimpan data. Setelan bawaannya (_default_) adalah `vector<T>`.
  - `Compare`, sebuah fungsi yang akan mengatur bagaimana data akan diurutkan di dalam _`PriorityQueue`_. Setelan bawaannya (_default_) adalah `less<T>` yang menyebabkan _`PriorityQueue`_ akan mengurutkan data secara _descending_.

    Maka, ketika kita menginginkan agar _`PriorityQueue`_ mengurutkan data secara _ascending_, kita perlu mengisi parameter pada saat inisialisasi seperti yang ada pada contoh.

- ### isEmpty

  Untuk memeriksa apakah Priority Queue kosong.

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      priority_queue<int, vector<int>, greater<int>> pq;

      if(pq.empty()){
          cout << "priority queue ini kosong" << endl;
      }

      return 0;
  }
  ```

- ### push

  Untuk melakukan push, langkah-langkahnya adalah sebagai berikut.

  - Buat node temp (temporary) yang mengacu pada `top` pqueue.
  - Buat node baru.
  - Jika Priority Queue kosong, jadikan node baru sebagai `top`.
  - Jika tidak kosong, masih terdapat 2 kasus.

    **Kasus 1, data node baru lebih kecil dari top**

  - Buat next node baru ke top pqueue.
  - Pindah top pqueue ke node baru.

    ![m1-5](https://user-images.githubusercontent.com/86661387/222363135-5fc7cb2a-60b7-44f8-8b22-4f68f13e33d5.png)

    **Kasus 2, data node baru lebih besar dari top**

    - Iterasi temp sampai data sebelum node baru tidak ada yang lebih besar.
    - Atau sampai akhir dari pqueue (null).
    - Arahkan next node baru ke next dari temp.
    - Arahkan next dari temp ke node baru.

    ![m1-6](https://user-images.githubusercontent.com/86661387/222363149-510db742-1442-48ed-bd93-41b51e624d10.png)

    ```c++
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        priority_queue<int, vector<int>, greater<int>> pq;

        pq.push(1);
        pq.push(2);
        pq.push(3);
        pq.push(4);

        return 0;
    }
    ```

- ### pop

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      priority_queue<int, vector<int>, greater<int>> pq;

      pq.push(1);
      pq.push(2);
      pq.push(3);
      pq.push(4);

      pq.pop();

      return 0;
  }
  ```

- ### top

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      priority_queue<int, vector<int>, greater<int>> pq;

      pq.push(1);
      pq.push(2);
      pq.push(3);
      pq.push(4);

      while(!pq.empty()){
          cout << pq.top() << endl;
          pq.pop();
      }

      return 0;
  }
  ```

Selengkapnya mengenai **`std::priority_queue`** dapat dibaca [di sini](https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/) atau pada dokumentasi bahasa C++ [di sini](https://cplusplus.com/reference/queue/priority_queue/).
