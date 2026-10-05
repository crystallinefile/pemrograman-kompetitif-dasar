// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     //exercise 1
// //     // double f;
// //     // cin >> f;
// //     // double rumus_celsius = (f - 32) * 5 / 9;
// //     // cout << "A temperature of 100F equals " << rumus_celsius << " C" << endl;

// //     //exercise 2
// //     double radius;
// //     cin >> radius;
// //     double height;
// //     cin >> height;
// //     const double pi = acos(-1.0);
// //     double formula = pi * radius * radius * height;
// //     cout << "Acylinder with radius " << radius << "cm and height " << height << "cm has volume of " << formula << endl;
// //     return 0;
// // }

// //exercise 3
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int number;
// //     cin >> number;
// //     int second_digit = (number % 100) / 10;
// //     cout << "The second digit of " << number  << " is " << second_digit << endl;

// // }




//Quiz 1
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
//     cout << "volume dari kerucut tersebut = " << setprecision(12) << rumus << endl;
// }



// //Quiz 2
// #include <bits/stdc++.h>
// using namespace std;

// //total_ndigits
// int main(){
//     int number;
//     cin >> number;

//     int first_digit = number / 100;
//     // cout << first_digit << endl; 

//     int second_digit = (number / 10) % 10;
//     // cout << second_digit << endl;

//     int third_digit = number % 10;
//     // cout << third_digit << endl;

//     int total_number = first_digit + second_digit + third_digit;

//     cout << "The sum of all digit is " << total_number << endl;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     double number = 10.7;
//     double rumus = number * number;
//     cout << rumus << endl;

//     int a = 341 % 10;
//     int b = 10;



//     return 0;
// }

//ACTIVITY 1 USD to IDR CALCULATOR

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int USD;
//     cout << "Masukkan nilai mata uangmu (dalam USD) = " << flush;
//     cin >> USD;
//     int nilai_tukar = 17845;
//     int idr = USD * nilai_tukar;
//     cout << USD << " USD = " << idr << " IDR" << endl;

//     return 0;
// }

//ACTIVITY 2 RIGHT TRIANGLE CALCULATOR

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int base, height;
//     cout <<"Masukkan panjang alas : " << flush;
//     cin >> base;
//     cout << "Masukkan tinggi segitiga : " << flush;
//     cin >> height;
//     double luas = (base * height) / 2;

//     cout << "Luas segitiga = " << luas << endl;
//     return 0;
// }

//ACTIVITY 3 PASSWORD CHECKER

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int password;
//     int saved_password = 1234;
//     cout << "Masukkan password anda = " << flush;
//     cin >> password;

//     bool match = (saved_password == password);

//     if(match){
//         cout << "Password match!";
//     } else {
//         cout << "Password doesn't match!";
//     }

//     return 0;
// }

//ACTIVITY 4 EVEN-ODD CHECKER

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int number;
//     cout << "Masukkan angka = " << flush;
//     cin >> number;
//     int hasil = number % 2;
//     if(hasil == 0){
//         cout << "Genap!" << endl;
//     } else {
//         cout << "Ganjil!" << endl;
//     }

//     return 0;
// }

//FINAL SCORE CALCULATOR

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int nilai;
//     cout << "Input nilai = " << flush;
//     cin >> nilai;
    
//         if (nilai < 0 || nilai > 100) {
//             cout << "Nilai tidak sah" << endl;
//         } else if(nilai <= 20){
//             cout << "Score = E " << endl;
//         } else if(nilai <= 40){
//             cout << "Score = D " << endl;
//         } else if(nilai <= 60){
//             cout << "Score = C " << endl;
//         } else if(nilai <= 80){
//             cout << "Score = B " << endl;
//         } else if(nilai <= 100){
//             cout << "Score = A " << endl;
//         } 

//     return 0;
// }


//ATM SIMULATION
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int pin = 270507;
//     int saldo = 100000;
//     int test_pin;
//     cout << "Enter your PIN : " << flush;
//     cin >> test_pin;

//     bool match = (pin == test_pin);
    
//     int ambil;
//     if(match){
//         cout << "Current Balance : " << saldo << flush << endl;
//         cout << "The amount of money to be withdrawn : " << flush;
//         cin >> ambil;
//         if(ambil > 10000000){
//             cout << "Over daily limit! Program ends." << endl;
//         } else if (ambil > saldo - 50000){
//             cout << "Insufficient funds! Program ends." << endl;
//         } else {
//             cout << "Withdrawal complete, current balance : " << saldo - ambil << " IDR " << endl;
//         }
//     } else {
//         cout << "Pin does not match, program ends!" << endl;
//     }
//     return 0;
// }


//Quiz 1 Fibonacci
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
         return 1;
    }
    return fibonacci (n - 1) + fibonacci(n - 2);
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << fibonacci(i) << (i == (n - 1)? "" : ", ") ;
    }

    return 0;
}



//Quiz 2
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// from binary to decimal
int decimal(string angka){
    reverse(angka.begin(), angka.end());
    int hasil = 0;
    for(int i = 0; i < angka.size(); i++){
        if(angka[i] == '1'){
            hasil = hasil + pow(2,i) * 1; 
        } else {
            hasil = hasil + pow(2,i) * 0;
        }
    }
    return hasil;
}

//from decimal to binary
void binary(int n){
    if(n == 0){
        cout << 0;
        return;
    }
    vector<int> bilangan_biner;
    while(n != 0){
        int bilangan = n % 2;
        n /= 2;
        bilangan_biner.push_back(bilangan);
    }
    reverse(bilangan_biner.begin(), bilangan_biner.end());
    for(int i = 0; i < bilangan_biner.size(); i++){
        cout << bilangan_biner[i] ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int desimal;
    string biner;
    int choose;
    bool coba_decimal = true;
    bool coba_biner = true;
    bool jawaban;

    while(coba_decimal || coba_biner){
            cout << "INPUT YOUR OPTION (1/2) : " << flush;
            cin >> choose;
            if(choose == 1){
            cout << "INPUT YOUR DECIMAL : " << flush;
            cin >> desimal;
            cout << "Your binary is : " ;
            binary(desimal);
            cout << endl;
            } else {
                cout << "INPUT YOUR BINARY : " << flush;
                cin >> biner;
                cout << "Your decimal is : " << decimal(biner) << endl; 
            }
        cout << "Repeat? (0 = no /1 = yes)" << flush;
        cin >> jawaban;
        if(jawaban == 0){                
            coba_decimal = false;
            coba_biner = false;
            break;
        }
    }
    return 0;
}




