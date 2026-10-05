// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     //exercise 1
//     // double f;
//     // cin >> f;
//     // double rumus_celsius = (f - 32) * 5 / 9;
//     // cout << "A temperature of 100F equals " << rumus_celsius << " C" << endl;

//     //exercise 2
//     double radius;
//     cin >> radius;
//     double height;
//     cin >> height;
//     const double pi = acos(-1.0);
//     double formula = pi * radius * radius * height;
//     cout << "Acylinder with radius " << radius << "cm and height " << height << "cm has volume of " << formula << endl;
//     return 0;
// }

//exercise 3
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int number;
//     cin >> number;
//     int second_digit = (number % 100) / 10;
//     cout << "The second digit from the number is " << second_digit << endl;

// }




// //Quiz 1
// #include <bits/stdc++.h>
// using namespace std;

// //A cone's volume calculator
// int main(){
//     const double pi = acos(-1.0);
//     // cout << pi << endl;
//     double r;
//     cin >> r;
//     double h;
//     cin >> h;
//     double rumus = (pi * r * r * h)/3; 
//     cout << "nilai r = " << r << endl;
//     cout << "nilai h = " << h << endl;
//     cout << "volume dari kerucut tersebut = " << setprecision(5) << rumus << endl;
// }



//Activity 1
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int day;
//     string days;
//     cout << "Enter today's day[1 - 7] : " << flush;
//     cin >> day;

//     if(day >= 1 && day <= 7){
//             switch(day){
//                 case 1:
//                 days = "Monday";
//                 break;
//                 case 2:
//                 days = "Tuesday";
//                 break;
//                 case 3:
//                 days = "Wednesday";
//                 break;
//                 case 4:
//                 days = "Thursday";
//                 break;
//                 case 5:
//                 days = "Friday";
//                 break;
//                 case 6:
//                 days = "Saturday";
//                 break;
//                 case 7:
//                 days = "Sunday";
//                 break;
//             }
//             cout << "Today is " << days << endl;
//             } else {
//                 cout << "Wrong number!";
//             }

//     return 0;
// }





//activity 2
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int number1, number2;
//     cout << "enter number 1 : " << flush;
//     cin >> number1;
//     cout << "enter number 2 : " << flush;
//     cin >> number2;
//     for(int i = number1 + 1; i < number2; i++){
//         cout << i << " " ;
//     }

//     return 0;
// }


//Activity 3
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int number1, number2;
//     cout << "enter number 1 : " << flush;
//     cin >> number1;
//     cout << "enter number 2 : " << flush;
//     cin >> number2;
//     for(int i = number1 + 1; i < number2; i ++){
//         if(i % 2 == 0){
//         cout << i << " ";
//         }
//     }

//     return 0;
// }


// //Activity 4
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int number1, number2;
//     cout << "enter number 1 : " << flush;
//     cin >> number1;
//     cout << "enter number 2 : " << flush;
//     cin >> number2;
//     int sum = 0;
//     for(int i = number1 + 1; i < number2; i++){
//         if(i%2 == 0){
//             sum += i;
//         }
//     }
//     cout << "sum = " << sum << endl;

//     return 0;
// }


//activity 5
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int number;
//     cout << "Enter your number : " << flush;
//     cin >> number;
//     cout << endl;
//     for(int i = 1; i <= number; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//Activity 6
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     bool repeat = true;
//     while(repeat){
//         cout << "Enter your number " << flush;
//         cin >> n;
//         cout << "Your number is " << n << endl;
//         cout << "Do you want to repeat ? " << flush;
//         cin >> repeat;
//     }
//     cout << " Program ends ";

//     return 0;
// }

//Activity 7
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     int number;
//     cout << "How many numbers ? " << flush;
//     cin >> n;
//     int sum = 0;
//     for(int i = 1; i <= n; i++){
//         cout << "Input your number : " << flush;
//         cin >> number;
//         sum += number;
//     }
//     cout << "The total is " << sum ;

//     return 0;
// }



// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n = 7;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             cout << j << " ";
//     }
//        cout << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n = 7;
//     for(int i = n; i >= 1; i--){
//         for(int j = 1; j < i; j++){
//             cout << "  ";
//         }
        
//         for(int k = i; k <=n; k++){
//             cout << k << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// } 


//Activity 1
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int number;
    
//     cin >> number;
//     cout << "Enter a number : " << number << endl;
//     for(int i = 1; i <= number; i++){
//         if(i == 4){
//             continue;
//         }
//         cout << i << " " << endl;
//     }
//     string member[3] = {"Ani", "Budi", "Wati"};
//     for(int i = 0; i < 3; i++){
//     cout << member[i] << endl;
//     }
//     for(string m : member){
//         cout << m << endl;
//     }
//     return 0;
// }

//Activity 2
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int numbers[5] = {10, 20, 30, 40, 50};
//     int sum = 0;
//     for(int i = 0; i < 5; i++){
//         sum += numbers[i];
//     }
//     cout << sum << endl;

//     return 0;
// }

// Activity 3
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     bool isMember;
//     int memberID;
//     string name;
//     int entranceFee;
//     string members[5] = {"Ani", "Budi", "Wati", "Iwan", "Santi"};
//     cout << "Welcome to the book store" << endl;
//     cout << "Are you a member? (If yes type 1/ If no type 0) " << flush;
//     cin >> isMember ;

//     switch (isMember){
//         case 1: {
//             cout << "Enter memberID (0-4):" << flush;
//             cin >> memberID;

//             if(memberID >= 0 && memberID < 5){
//                 name = members[memberID];
//                 entranceFee = 0;
//             } else {
//                 cout << "Invalid member ID!" << endl;
//                 return 1;
//             }
//             break;
//         }
//         default:{
//             entranceFee = 1000;
//             name = "Guest";
//             break;
//         }       
//     }

//     cout << "Welcome " << name << ", your entrance fee is " << entranceFee << " rupiah " << endl;
    

//     string title [5] = {"Harry Potter", "Algorithm", "Calculus", "Sherlock Holmes", "Supernova"};
//     int price [5] = {250000, 85000, 130000, 270000, 180000};
//     bool available [5] = {1, 1, 0, 1, 1};  
//     int bookID;

//     cout << "Below are available books" << flush;
//     cout << endl;
//     for(int i = 0; i < 5; i++){
//         if(available[i] == false){
//             continue;
//         }
//         cout << "BOOK ID " << i << ", title : " << title[i] << ", price : " << price[i] << endl;
//     }


//     int total_price;

//     while(true){
//     cout << "Select book ID : " << flush;
//     cin >> bookID;
//     if(bookID >= 0 && bookID < 5){
//        break;
//     } 
//     cout << "Wrong bookID! Please input again!" << endl;
// }

// total_price = entranceFee + price[bookID];
// cout << "Your selected book is " << title[bookID] << ", with a total price of : Rp " << total_price; 

//     //Inquiry book ID 
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

// int data[5] = {1, 2, 3, 4, 5};
// for(int i = 0; i < 5; i++){
// cout << data[i] <<  endl;
// }

//     return 0;
// }


//BIOSKOP
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {


//     bool answer;
//     string jawaban;
 
//     cout << "---Selamat datang di BIOSKOP XXXX---" << endl;
//     cout << "Apakah anda sudah memesan ticket untuk tempat duduk? (Y/N)" << flush;
//     cin >> jawaban;
//     if(jawaban == "Y" || jawaban == "y"){
//         answer = true;
//     } else if(jawaban == "N" || jawaban == "n"){
//         answer = false;
//     }

//     bool kursi_bioskop[5][10] = {
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
// };

//     int position;
//     if(answer == false){
        
//         cout << "Silahkan memesan ticket terlebih dahulu dengan memilih nomor kursi (1 - 50) : ";
//         cin >> position;

//         if(position >= 1 && position <= 50){
//             int row = (position - 1) / 10;
//             int col = (position - 1) % 10;
//             kursi_bioskop[row][col] = 0; 
//             cout << "Pemesanan berhasil untuk kursi nomor " << position << endl; 
//         } else {
//             cout << "Nomor kursi tidak valid" << endl;
//         }
//     } else {
//         cout << "Selamat menonton!" << endl;
//     }

//     cout << "---DENAH KURSI BIOSKOP---" << endl;
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 10; j++){
//             cout << kursi_bioskop[i][j] << " ";
//         }
//         cout << endl;
//     } 
 

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// void sayHello(string name = "HASAN", int number = 7){
//     cout << "HELLO " << name << endl;
//     cout << "Your number is " << number << endl;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     sayHello();
//     sayHello("CC");
//     sayHello("BB", 11);

//     return 0;
// }


//Activity 1
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// const double pi = acos(-1.0);

// double circleArea(double r){
//     return pi * r * r; 
// }

// double cylinderVolume(double r, double h){
//     return circleArea(r) * h;
// }

// double coneVolume(double r, double h){
//     return cylinderVolume(r,h) / 3;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     double radius = 10.0;
//     double height = 30.0;
//     cout << "Circle area = "<< circleArea(radius) << endl;
//     cout << "Cylinder volume = " << cylinderVolume(radius, height) << endl;
//     cout << "Cone volume = " << coneVolume(radius, height) << endl;

//     return 0;
// }



//Activity 2

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int fact(int n){
//     int hasil = 1;
//     for(int i = 2; i <= n; i++){
//         hasil *= i;
//     }
//     return hasil;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int result = fact(5) + fact(4);
//     cout << "The result is " << result << endl;
//     return 0;
// }

// Activity 3
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;


// void printDate(int tanggal, int bulan, int tahun){
//     string namaBulan;
//     switch(bulan){
//         case 1 : namaBulan = "Januari"; break;
//         case 2 : namaBulan = "Februari"; break;
//         case 3 : namaBulan = "Maret"; break;
//         case 4 : namaBulan = "April"; break;
//         case 5 : namaBulan = "Mei"; break;
//         case 6 : namaBulan = "Juni"; break;
//         case 7 : namaBulan = "Juli"; break;
//         case 8 : namaBulan = "Agustus"; break;
//         case 9 : namaBulan = "September"; break;
//         case 10 : namaBulan = "Oktober"; break;
//         case 11 : namaBulan = "November"; break;
//         case 12 : namaBulan = "Desember"; break;
//         default : namaBulan = "Salah"; break;
//     } 

//     cout << "The date is " << tanggal << " " << namaBulan << " " << tahun;
// }

// void printDate(int tanggal, string bulan, int tahun){
//     cout << "The date is " << tanggal << " " << bulan  << " " << tahun;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     printDate(5, 12, 2026);
//     cout << endl;
//     printDate(7, "July", 2025);

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int x = 5;

// void printX(){
//     int x = 7;
//     cout << x << endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cout << x << endl;
//     printX();

//     return 0;
// }

//Activity 4
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int factorial(int n){
//     if(n <= 1) return 1;
//     int fact;
    
//     return fact = n * factorial(n-1);   
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int result = factorial(5) + factorial(4);
//     cout << "The result is " << result << endl;

//     return 0;
// }

//BIOSKOP
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int pilihFilm(){
    vector <string> namaFilm = {"A", "B", "C", "D", "E"};
    vector <int> harga = {10000, 10000, 20000, 30000, 50000};
    cout << "== DAFTAR FILM ==" << endl;
    for(int i = 0; i < 5; i++){
        cout << i + 1 << ". Nama Film = " << namaFilm[i] << ", harga ticket = " << harga[i] << endl; 
    }
    int pilihan;
    cout << "Pilih nomor film (1 - 5) : ";
    cin >> pilihan;

    return harga[pilihan - 1];
}


int pilih_kursi(){

    bool kursi_bioskop[5][10];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            kursi_bioskop[i][j] = true;  
        }

    }
    int no_kursi;
    cout << "Pilih no kursi (1 - 50): " ;
    cin >> no_kursi;
    if(no_kursi >= 1 && no_kursi <= 50){
        int row = (no_kursi - 1) / 10;
        int col = (no_kursi - 1) % 10;
        kursi_bioskop[row][col] = 0; 

        cout << "== Denah Kursi Terbaru == " << endl;
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 10; j++){
                cout << kursi_bioskop[i][j] << " ";
            }
            cout << endl;
        }
       cout << "Pemesanan berhasil untuk kursi nomor " << no_kursi << endl; 
    }
    return no_kursi;
}

void prosesPemesanan(){
    int harga = pilihFilm();
    int kursi = pilih_kursi();

    cout << "== Ringkasan ==" << endl;
    cout << "Nomor kursi : " << kursi << endl;
    cout << "Total bayar : Rp" << harga << endl;
    cout << "Pesanan selesai, selamat menonton!" << endl;
}


int main() {
    cout << "Selamat Datang di BIOSKOP XXI" << endl;
    char jawaban;
    cout << "Apakaah anda sudah memesan ticket? (y/n): ";
    cin >> jawaban;

    if(jawaban == 'y' || jawaban == 'Y'){
        cout << "Selamat Menonton" << endl;
    } else {
        cout << "Anda belum memesan ticket, silakan lakukan pemesanan tiket terlebih dahulu!" << endl;
        prosesPemesanan();
    }
    return 0;
}
