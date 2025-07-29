# Operator Bitwise

**Operator Bitwise**, seperti namanya digunakan untuk melakukan operasi pada dua operan dalam skala biner (bilangan basis 2). Sebelum mempelajari lebih lanjut cara kerja operasi bitwise, sebaiknya kamu harus paham terlebih dahulu mengenai bilangan dalam basis biner.

Terdapat 6 jenis operator bitwise, yakni **AND**, **OR**, **XOR**, **COMPELEMENT**, **SHIFT LEFT**, dan **SHIFT RIGHT**. Untuk lebih memahami perbedaan cara kerja operator bitwise, perhatikan tabel berikut.

| Operator                | Simbol | Keterangan                                                                                                                             |
| ----------------------- | :----: | -------------------------------------------------------------------------------------------------------------------------------------- |
| Bitwise AND             | &      | Mengevaluasi bit dari dua operan. Menghasilkan 1 apabila keduanya 1, jika tidak menghasilkan nilai 0.                                  |
| Bitwise OR              | \|     | Mengevaluasi bit dari dua operan. Menghasilkan 1 apabila salah satu nilainya 1, jika keduanya 0, maka menghasilkan nilai 0.            |
| Bitwise XOR             | ^      | Mengevaluasi bit dari dua operan. Menghasilkan 1 apabila bit pada kedua operan nilainya berbeda. Jika sama, maka menghasilkan nilai 0. |
| Bitwise COMPLEMENT      | ~      | Membalik semua nilai bit, dari 1 menjadi 0 dan 0 menjadi 1 (dalam panjang bit).                                                        |
| Bitwise SHIFT LEFT      | <<     | Menggeser bit ke kiri sebanyak n (operan kedua).                                                                                       |
| Bitwise SHIFT RIGHT     | >>     | Menggeser bit ke kanan sebanyak n (operan kedua).                                                                                      |

**Contoh penggunaan operator bitwise:**

Misal 12 dan 5. Representasi 12 dan 5 dalam basis biner adalah 12 = (1100) dan 5 = (0101). Maka, operasi bitwise adalah sebagai berikut.

+ **Bitwise AND**

    ```
    12 = (1100)
     5 = (0101)
    ------------ &
     4 = (0100)
    ```

+ **Bitwise OR**

    ```
    12 = (1100)
     5 = (0101)
    ------------ | 
    13 = (1101)
    ```

+ **Bitwise XOR**

    ```
    12 = (1100)
     5 = (0101)
    ------------ ^
     9 = (1001)
    ```

+ **Bitwise COMPLEMENT**

    ```
     12 = (1100)
    ~12 = (0011)
    ```

+ **Bitwise SHIFT LEFT**

    Misal kita hendak menggeser bit bilangan 13 ke kiri sebanyak 2, maka 13 << 2.

    ```
         13 = (001101)
    13 << 2 = (110100) 
    ```

    Bisa diperhatikan, bit paling kanan setelah digeser akan diisi oleh 0. Maka hasil dari 13 << 2 = 52.

+ **Bitwise SHIFT RIGHT**

    Misal kita hendak menggeser bit bilangan 13 ke kanan sebanyak 2, maka 13 >> 2.

    ```
         13 = (001101)
    13 >> 2 = (000011)
    ```

    Bisa diperhatikan, bit paling kiri setelah digeser akan diisi oleh 0. Maka hasil dari 13 >> 2 = 3.