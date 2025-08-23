// //aku punya bilangan N dan M terus misal bilangan itu genap, keliuarkan "bilangan N merupakan genap" 
// // N * M aku ingin lihat apakah hasilnya 
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int N, M;
//     cin >> N >> M;

//     int perkalian = N * M;

//     if (N % 2 == 0){
//         cout << "N merupakan bilangan genap" << endl;
//     } else {
//         cout << "N bukan bilangan genap" << endl;
//     }

//     cout << perkalian << endl;
//     return 0;

// }


// //halo dunia
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Halo, dunia!" << endl;
// }

// //luas segitiga
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // tipe data = integer, long long, 
//     // masukkan bilangan atau keluaran koma double, float
//     float A, T;
//     cin >> A >> T;
//     float hasil = (A * T)/2;

//     cout << hasil << endl;

    
// }

// //operasi kalkulator sederhana
// int main(){
//     int A = 5;
//     int B = 7;
//     int penjumlahan = A + B;
//     int perkalian = A * B;
//     int pembagian = A / B;
//     cout << penjumlahan << " " << perkalian << " " << pembagian << endl;

// }
// // buatkan program interaktif yang mengeluarkan hasil dari pencarian luas segitiga dan persegi
// // aku ingin hasilnya bisa bulat maupun koma

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = 2; i < N; i++){
        if (N % i == 0){
            cout << "N bukan bilangan prima" << endl;
        }   
        }

        cout << "N bilangan prima" << endl;
    }