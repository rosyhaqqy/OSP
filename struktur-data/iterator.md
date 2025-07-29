### Fungsi begin() dan end()

Semua _STL Container_ memiliki sepasang fungsi yaitu fungsi `begin()` dan `end()`. Fungsi `begin()` adalah sebuah fungsi yang mengembalikan sebuah iterator yang menunjuk pada elemen pertama dari sebuah _STL Container_. Sedangkan, fungsi `end()` mengembalikan sebuah iterator yang menunjuk pada **elemen kosong setelah elemen terakhir**. Berikut adalah ilustrasinya.

![begin dan end](https://i.stack.imgur.com/oa3EQ.png)

Kedua fungsi ini juga memiliki versi kebalikan dari mereka, yaitu `rbegin()` dan `rend()`.

![rbegin dan rend](https://img-blog.csdnimg.cn/4a6aa9c4edec4673acd1fc21315a9940.png)

Salah satu aplikasi yang sering digunakan dari fungsi-fungsi diatas adalah untuk melakukan pengurutan menggunakan fungsi `sort()`

```c++
#include <bits/stdc++.h>
/*
penggunaan library diatas adalah untuk mengurangi
penulisan library pada Bahasa C++ yang memang banyak
atau dalam kata lain, library diatas mengandung
semua library Bahasa C++

jika memiliki kesulitan dengan penggunaan library diatas,
fungsi sort ada pada library algorithm
*/
using namespace std;

int main(){
    vector<int> v{3, 4, 2, 5, 1, 7};
    /*
    proses inisialisasi sebuah vector
    tidaklah sama dengan inisialisasi array biasa
    */

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
        // vector akan urut secara ascending
    }
    cout << endl;

    sort(v.rbegin(), v.rend());

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
        //vector akan urut secara descending
    }
    cout << endl;

    return 0;
}
```

### **`auto`**

**`auto`** adalah sebuah _reserved word_ pada Bahasa C++. **`auto`** akan membuat program melakukan spesifikasi pada tipe data sebuah variabel dengan melihat nilai yang **diinisialisasikan** (variabel harus diinisialisasikan sebuah nilai pada saat menggunakan **`auto`**) pada variabel tersebut.

Karenanya, _keyword_ **`auto`** akan sangat berguna untuk menghindari penulisan tipe data yang panjang seperti tipe data iterator.

![ilustrasi auto](https://user-images.githubusercontent.com/86661387/218311512-dbcd4d77-dd79-4ca2-95ab-23ea7b66aab0.png)

Pada contoh di atas, tipe data dari variabel `pointer` otomatis mengikuti dengan tipe data dari **`iterator`** milik **`vector`**.

### Operator Pada iterator

**`iterator`** memiliki beberapa operator seperti _increment_(++), _decrement_(--)(tidak semua jenis operator dapat dilakukan operasi _decrement_) dan _dereference_(\*). Sebenarnya, banyak sekali operator yang dapat dilakukan pada **`iterator`**, tergantung pada jenis **`iterator`** tersebut (selengkapnya lihat [di sini](https://cplusplus.com/reference/iterator/)).

Berikut adalah contoh penggunaan operator _increment_ dan _dereference_.

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l{1, 2, 3, 4, 5};

    auto pointer = l.begin();

    pointer++;
    // variabel pointer sekarang menunjuk elemen kedua dari list

    cout << *pointer << endl;
    /*
    syntax diatas akan mengeluarkan isi dari blok memori yang
    sekarang ditunjuk oleh variabel pointer yaitu 2
    */
    return 0;
}
```

Dengan operator _increment_ dan _dereference_, kita dapat mengakses semua elemen pada suatu _STL Container_ tanpa harus mengosongkan _STL Container_ seperti yang ada pada modul linked list.

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l{1, 2, 3, 4, 5};

    for(auto it = l.begin(); it != l.end(); it++){
        cout << *it << endl;
    }

    return 0;
}
```

Apakah ada cara yang lebih singkat untuk iterasi pada seluruh elemen _STL Container_? Tentu saja ada.

```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l{1, 2, 3, 4, 5};

    for(auto it:l){
        cout << it << endl;
    }

    return 0;
}
```

(perhatikan bahwa tipe data dari variabel `it` sudah bukan merupakan iterator lagi).
