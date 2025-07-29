# Stack

## Terminologi

- **Top** - merupakan node paling atas dari stack.

## Definisi

Stack adalah struktur data dinamis yang mengikuti prinsip **Last In First Out (LIFO)**. Pada LIFO, Elemen terakhir yang dimasukkan pada stack akan menjadi elemen yang pertama dihapus. Sebagai contoh dari Stack adalah tumpukan piring, dimana piring baru diletakkan pada tumpukan paling atas dan dikeluarkan juga dari paling atas.

![m1-1](https://user-images.githubusercontent.com/86661387/222362955-caf7fc91-3083-4409-ac26-b31a5a8a4170.png)

## Operasi Dasar

- **isEmpty** – untuk memeriksa apakah stack kosong atau tidak.
- **size** – untuk mendapatkan data size pada stack.
- **push** – operasi untuk menambahkan data pada tumpukan paling atas.
- **pop** – operasi untuk menghapus data pada tumpukan paling atas.
- **top** – untuk mendapatkan data pada tumpukan paling atas.

## Aplikasi Stack

Salah satu contoh penerapan Stack adalah bagaimana mengubah notasi infix menjadi postfix. **Notasi infix** adalah notasi yang biasa dibaca dan diselesaikan oleh manusia dalam persoalan matematika, contoh ‘x + y / (10 + z)’ namun komputer tidak dapat membedakan operator dan tanda kurung (parentheses) dengan mudah sehingga komputer akan mengubah notasi infix menjadi **postfix**, contoh ‘x y + 10 z + /’. Untuk mengubah notasi infix menjadi postfix digunakanlah struktur data stack.

**Kompleksitas waktu** semua operasi pada stack dilakukan secara konstan O(1).

- ### Struktur Stack

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      stack<int> st;

      return 0;
  }
  ```

  > Catatan: STL Stack tidak memiliki iterator

- ### isEmpty

  Untuk memeriksa apakah stack kosong.

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      stack<int> st;

      if(st.empty()){
          cout << "stack ini kosong" << endl;
      }

      return 0;
  }
  ```

- ### push

  - Buat node baru.
  - Jika stack kosong, jadikan node baru sebagai `top`.
  - Jika tidak kosong, maka jelas bahwa next dari node baru adalah `top`, jadikan node baru sebagai `top`.

    ```c++
    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        stack<int> st;

        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);

        return 0;
    }
    ```

- ### pop

  Untuk melakukan pop (penghapusan node teratas).

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      stack<int> st;

      st.push(1);
      st.push(2);
      st.push(3);
      st.push(4);

      st.pop();

      return 0;
  }
  ```

- ### top

  ```c++
  #include <bits/stdc++.h>
  using namespace std;

  int main(){
      stack<int> st;

      st.push(1);
      st.push(2);
      st.push(3);
      st.push(4);

      while(!st.empty()){
          cout << st.top() << endl;
          st.pop();
      }

      return 0;
  }
  ```

Selengkapnya mengenai **`std::stack`** dapat dibaca [di sini](https://www.geeksforgeeks.org/stack-in-cpp-stl/) atau pada dokumentasi bahasa C++ [di sini](https://cplusplus.com/reference/stack/stack/).
