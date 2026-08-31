// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     bool lampu[101];
//     for(int i = 1; i <= 100; i++){
//         lampu[i] = false;
//     }

//     for(int p = 1; p <= 10; p++){
//         for(int i = 1; i <= 100; i++){
//             if(i % p == 0){
//                 lampu[i] = !lampu[i];
//             }
//         }
//     }
//     int lampu_menyala = 0;
//     for(int i = 1; i <= 100; i++){
//         if(lampu[i] == true){
//             lampu_menyala++;
//         }
//     }
//     cout << lampu_menyala << endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int luas[4][3] = {
//         {225 * 335, 299 * 278, 300 * 250},
//         {215 * 394, 144 * 718, 300 * 290},
//         {200 * 400, 240 * 333, 142 * 619},
//         {314 * 298, 411 * 198, 333 * 222}
//     };

//     int harga_jual[3] = {100,120,150};
//     int harga_1 = 0;
//     int harga_2 = 0;
//     int harga_3 = 0;

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (j == 0) {
//                 int tambah_1 = luas[i][j] * 100;
//                 harga_1 += tambah_1;
//             }
//             if (j == 1){
//                 int tambah_2 = luas[i][j] *= 120;
//                 harga_2 += tambah_2;
//             }
//             if (j == 2){
//                 int tambah_3 = luas[i][j] *= 150;
//                 harga_3 += tambah_3;
//             }
//         }
//     }

//     cout  << harga_1 << endl;
//     cout  << harga_2 << endl;
//     cout  << harga_3 << endl;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int jantan[4] = {0, 10, 50, 60};
//     int betina[4] = {7, 80, 9, 40};

//     for(int i = 0; i < 4; i++){
//         int harga_bebek;
//         if(jantan[i] < 10){
//             harga_bebek = 100000;
//         } else if (jantan[i] <= 50 ){
//             harga_bebek = 75000;
//         } else {
//             harga_bebek = 50000;
//         }
//         int biaya_jantan = jantan[i] * harga_bebek;

//         if(betina[i] < 10){
//             harga_bebek = 100000;
//         } else if(betina[i] <= 50){
//             harga_bebek = 75000;
//         } else {
//             harga_bebek = 50000;
//         }
//         int biaya_betina = betina[i] * harga_bebek;

//         cout << biaya_jantan + biaya_betina << endl;
//     }
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int biaya(int total_bebek){
    
//     int harga_bebek;
//     if(total_bebek < 10){
//         harga_bebek = 100000;
//     } else if(total_bebek <= 50){
//         harga_bebek = 75000;
//     } else {
//         harga_bebek = 50000;
//     }
//     return harga_bebek * total_bebek;
// }

// int main(){
//     int jantan[4] = {0, 10, 50, 60};
//     int betina[4] = {7, 80, 9, 40};

//     for(int i = 0; i < 4; i++){
//         int biaya_jantan =biaya(jantan[i]);
//         int biaya_betina = biaya(betina[i]);
//         cout << biaya_jantan + biaya_betina << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int jantan[4] = {0, 10, 50, 60};
// int betina[4] = {7, 80, 9, 40};

// int biaya(int total_bebek) {
//     int harga_bebek;
//     if (total_bebek < 10) {
//         harga_bebek = 100000;
//     } else if (total_bebek <= 50) {
//         harga_bebek = 75000;
//     } else {
//         harga_bebek = 50000;
//     }

//     return harga_bebek * total_bebek;
// }
// int biaya_jantan_dan_betina(int hari) {
//     return biaya(jantan[hari]) + biaya(betina[hari]);
// }

// int main() {
//     for (int i = 0; i < 4; i++) {
//         cout << biaya_jantan_dan_betina(i) << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int jantan[4] = {0, 10, 50, 60};
// int betina[4] = {7, 80, 9, 40};

// int selisih(int a, int b){
//     if(a > b){
//         return a - b;
//     } else {
//         return b - a;
//     }
// }

// int denda_pada_hari(int hari){
//     return 1000 * selisih (jantan[hari], betina[hari]);
// }

// int total_denda(){
//     int total = 0;
//     for(int i = 0; i < 4; i++){
//         total+= denda_pada_hari(i);
//     }
//     return total;
// }

// int main(){
//     cout << total_denda() << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int total_kandang = 10;
// int bebek[11];

// void kosongkan_kandang(){
//     for(int i = 1; i <= total_kandang; i++){
//         bebek[i] = 0;
//     }
// }

// void isi_bebek_ke_dalam_kandang(int a, int b, int c){
//     for(int i = a; i <= b; i++){
//         bebek[i] += c;
//     }
// }

// int bebek_terbanyak_dikandang(){
//     int bebek_terbanyak = bebek[1];
//     for(int i = 2; i <= total_kandang; i++){
//         bebek_terbanyak = max(bebek_terbanyak, bebek[i]);
//     }
//     return bebek_terbanyak;
// }

// int main(){
//     kosongkan_kandang();

//     isi_bebek_ke_dalam_kandang(1, 8, 2);
//     isi_bebek_ke_dalam_kandang(2, 9, 10);
//     isi_bebek_ke_dalam_kandang(5, 6, 2);
//     isi_bebek_ke_dalam_kandang(9, 10, 3);
//     isi_bebek_ke_dalam_kandang(1, 4, 7);
//     isi_bebek_ke_dalam_kandang(1, 4, 2);
//     isi_bebek_ke_dalam_kandang(4, 8, 6);

//     cout << bebek_terbanyak_dikandang() << endl;


// string::substr
// #include <iostream>
// #include <string>

// int main ()
// {
//   std::string str="We think in generalities, but we live in details.";
//                                            // (quoting Alfred N. Whitehead)

//   std::string str2 = str.substr (3,5);     // "think"

//   std::size_t pos = str.find("live");      // position of "live" in str

//   std::string str3 = str.substr (pos);     // get from "live" to the end

//   std::cout << str2 << ' ' << str3 << '\n';

//   return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

//     cout << s.substr(33,40) << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> jumlah_bersebelahan(vector<int> v) {
//     vector<int> hasil;
//     for(int i = 0; i < v.size() - 1; i++){
//         hasil.push_back(v[i] + v[i+1]);
//     }
//     return hasil;
// }

// // Fungsi cetak_vector() dan main() di bawah tidak boleh diubah!

// // cout tidak bisa mencetak sebuah vector, sehingga kita perlu
// // membuat fungsi tersendiri untuk mencetak vector secara manual.
// void cetak_vector(vector<int> v) {
//     cout << "vector:";
//     for (int x : v) {
//         cout << " " << x;
//     }
//     cout << endl;
// }

// int main() {
//     cetak_vector(jumlah_bersebelahan({1, 2, 3, 4, 5}));
//     cetak_vector(jumlah_bersebelahan({17, 8, 1945}));
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// string kalkulator(char op, vector<string> data) {
//     if(op == '+'){
//         long long hasil = 0;
//         for(int i = 0; i < data.size(); i++){
//             hasil += stoll(data[i]);
//         }
//         return to_string(hasil);
//     }
    
//     if(op == '*'){
//         long long hasil = 1;

//         for(int i = 0; i < data.size(); i++){
//             hasil *= stoll(data[i]);
//         }
//         return to_string(hasil);
//     }
//     return "KESALAHAN";
// }

// // Fungsi main() di bawah tidak boleh diubah!
// int main() {
//     cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
//     cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
//     cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
//     cout << kalkulator('*', {"17", "8", "1945"}) << endl;
//     cout << kalkulator('?', {"3", "2", "1"}) << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> data(n);
//     for(int i = 0; i < data.size(); i++){
//         cin >> data[i];
//     }

//     int terbesar = data[0];
//     int terkecil = data[0];
//     for(int i = 1; i < data.size(); i++){
//         if(terbesar < data[i]){
//         terbesar = data[i];
//         }
//         if(terkecil > data[i]){
//         terkecil = data[i];
//         }
//     }
//     cout << terbesar << " " << terkecil;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int fungsi(int x, int A, int B){
//     return abs( A*x + B );
// }

// int ulangFungsi(int x, int A, int B, int K){
//     for(int i = 0; i < K; i++){
//         x = fungsi(x, A, B);
//     }
//     return x;
// }

// int main(){
//     int A, B, K, x;
//     cin >> A >> B >> K >> x;
//     cout << ulangFungsi(x, A, B, K);
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     int angka = 0;
//     for(int i = 1; i <= N; i++){
//         for(int j = 1; j <= i ; j++){
//             cout << angka;
//             angka++;
//             if(angka == 10){
//                 angka = 0;
//             }
//         }
//         cout << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// void kali_dua(int n){
//     n *= 2;
// }

// int main(){
//     int a = 10;
//     kali_dua(a);
//     cout << a << endl;
// }

// #include <iostream>
// using namespace std;

// void tukar(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// // Fungsi main() di bawah tidak boleh diubah!
// int main() {
//     int p = 10, q = 20, r = 30;
//     cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

//     tukar(p, q);
//     cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

//     tukar(q, r);
//     cout << "p = " << p << ", q = " << q << ", r = " << r << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int faktorial(int n){
//     if(n == 1){
//         return 1;
//     } else {
//         return n * faktorial(n-1);
//     }
// }
// int main(){
//     cout << faktorial(12) << endl;
// }

// #include <iostream>
// using namespace std;

// void cetak_menurun(int n) {
//     if(n == 1){
//         cout << 1;
//     } else { 
//     cout << n << endl;
//     cetak_menurun(n - 1);
//     }

// }

// // Fungsi main() di bawah tidak boleh diubah!
// int main() {
//     cetak_menurun(10);
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int hitung_vokal(string s) {
//     if (s.empty()) {
//         return 0;
//     }

//     char c = s[0];
//     if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
//         return 1 + hitung_vokal(s.substr(1));
//     } else {
//         return hitung_vokal(s.substr(1));
//     }
// }

// // Fungsi main() di bawah tidak boleh diubah!
// int main() {
//     cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
// }

// #include <iostream>
// using namespace std;

// int jumlah_digit(int n) {
//     if (n == 0) {
//         return 0;
//     } else {
//         return (n % 10) + jumlah_digit(n / 10);
//     }
// }

// // Fungsi main() di bawah tidak boleh diubah!
// int main() {
//     cout << jumlah_digit(1982304556) << endl;
   
// }

// #include <iostream>
// #include <string>
// using namespace std;

// bool palindrom(string s) {
//     if(s.length() <= 1){
//         return true;
//     }
//     char c = s[0];
//     if(c == s[s.length() - 1]){
//         return palindrom(s.substr(1, s.length()-2));
//     } else {
//         return false;
//     }

// }

// // Fungsi main() di bawah tidak boleh diubah!
// int main() {
//     cout << palindrom("") << endl;
//     cout << palindrom("x") << endl;
//     cout << palindrom("aa") << endl;
//     cout << palindrom("ab") << endl;
//     cout << palindrom("ini") << endl;
//     cout << palindrom("itu") << endl;
//     cout << palindrom("anna") << endl;
//     cout << palindrom("ibu ratna antar ubi") << endl;
//     cout << palindrom("rumah murah") << endl;
//     cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// string biner(int n) {
//     if(n <= 1){
//         return string(1, char('0' + n));
//     }
//     return biner(n / 2) + char('0' + (n % 2));
// }

// // Fungsi main() di bawah tidak boleh diubah!
// int main() {
//     cout << biner(0) << endl;
//     cout << biner(1) << endl;
//     cout << biner(512) << endl;
//     cout << biner(1697) << endl;
//     cout << biner(1048575) << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int hitung(vector<int> x){
//     int jumlah = 0;
//     for(int i = 0; i < x.size(); i++){
//         jumlah += x[i];
//     }
//     return jumlah;
// }

// int main(){
//     int N;
//     cin >> N;

//     vector <int> bilangan(N);
//     for(int i = 0; i < bilangan.size(); i++){
//         cin >> bilangan[i];
//     }
//     int total = hitung(bilangan);
//     for(int i = 0; i < N; i++){
//         cout << total - bilangan[i] << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int r_terbaik = 1; 
//     int c_terbaik = n;
// for(int r = 1; r < n; r++){
//         if(n % r == 0){
//             int c = n / r;
//             if(r <= c){
//             if((c-r) < (c_terbaik - r_terbaik)){
//                 r_terbaik = r;
//                 c_terbaik = c;
//             }
//         }
//         }
    
// }
//     cout << r_terbaik << " " << c_terbaik << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int r_terbaik = 1;
//     int c_terbaik = n;
//     for(int r = 1; r * r <= n; r++){
//         if(n % r == 0){
//             int c = n / r;
//             if(r <= c){
//                 if((c-r) < (c_terbaik - r_terbaik)){
//                     r_terbaik = r;
//                     c_terbaik = c;
//                 }
//             }
//         } 
//     }
//     cout << r_terbaik << " " << c_terbaik << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     for(int i = 1; i <= N; i++){
//         for(int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// void perkalian_matriks(int N, int M, int P){
//     vector<vector<int>> A(N, vector<int>(M));
//     vector<vector<int>> B(M, vector<int>(P));
//     vector<vector<int>> C(N, vector<int>(P, 0));

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < M; j++){
//             cin >> A[i][j];
//         }
//     }

//     for(int i = 0; i < M; i++){
//         for(int j = 0; j < P; j++){
//             cin >> B[i][j];
//         }
//     }

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < P; j++){
//             for(int k = 0; k < M; k++){
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < P; j++){
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int N, M, P;
//     cin >> N >> M >> P;

//     perkalian_matriks(N, M, P);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void kedekatan(int n, int d){
//     vector<vector<int>> nilai(n, vector<int>(2));
//     for(int i = 0; i < n; i++){
//         cin >> nilai[i][0] >> nilai[i][1];
//     }

//     int terkecil = INT_MAX;
//     int terbesar = INT_MIN;

//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j< n; j++){
//             int T = pow(abs(nilai[i][0]-nilai[j][0]), d) + pow(abs(nilai[i][1]-nilai[j][1]), d);

//             terkecil = min(terkecil, T);
//             terbesar = max(terbesar, T);
//         }
//     }
//     cout << terkecil << " " << terbesar << endl;
// }

// int main(){
//     int n, d;
//     cin >> n >> d;

//     kedekatan(n, d);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void hapus_string(string &a, string b){

//     size_t found = a.find(b);

//     while(found != string::npos){
//         a.erase(found, b.length());
//         found = a.find(b);
//     }
    
// }

// int main(){
//     string str1, str2;
//     cin >> str1 >> str2;
//     hapus_string(str1, str2);
//     cout << str1;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void gunung(int n){
//     if(n == 1){
//         cout << "*" << endl;
//     } else {
    
//     gunung(n-1);
//     for(int i = 0; i < n; i++){
//         cout << "*";
//     }
//     cout << endl;
//     gunung(n-1);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     gunung(n);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void prima(vector<int> a){

// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> prima(n);
//     for(int i = 0; i < n; i++){
//         cin >> prima[i];
//         if(prima[i] < 2){
//             cout << "BUKAN" << endl;
//             continue;
//         }
//         bool isPrima = true;
        
//         for(int j = 2; j * j <= prima[i]; j++){
//             if(prima[i] % j == 0){
//                 isPrima = false;
//                 break;
//             }
//         }
//         if(isPrima){
//             cout << "YA" << endl;
//         } else {
//             cout << "BUKAN" << endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int factorial(int n){
    
//     int divisor = 1;
//     for(int i = 2; i * i <= n; i++){
//         int jumlah = 0;
//         while(n % i == 0){
//             jumlah++;
//             n /= i;
//         }
//         divisor *= (1 + jumlah);
//     }
//     if(n > 1){
//        divisor *= 2;
//     }
//     return divisor; 
// }

// int define_half_prime(int n){
//     if(n == 1){
//         return true;
//     }else if(factorial(n) <= 4){
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     int n;
//     for(int i = 0; i < t; i++){
//         cin >> n;
//         if(define_half_prime(n) == true){
//             cout << "YA" << endl;
//         } else {
//             cout << "BUKAN" << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<string> factors;
    
//     for(int i = 2; i * i <= n; i++){
//         int jumlah = 0;
//         while(n % i == 0){
//             jumlah++;
//             n /= i;
//         }
//         if(jumlah == 1){
//             factors.push_back(to_string(i));
//         }else if(jumlah > 1){
//         factors.push_back(to_string(i) + "^" + to_string(jumlah));
//         }
//     }
//     if(n > 1){
//         factors.push_back(to_string(n));
//     }
//     for(size_t i = 0; i < factors.size(); i++){
//         cout << factors[i] << (i + 1 == factors.size() ? "" : " x ");
//     }
//     cout << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     for(int i = 2; i < n; i++){
//         int jumlah = 0;
//         while(n % i == 0){
//             jumlah++;
//             n/=i;
//         }
//         cout << jumlah << endl; 
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tanggal = 15;
//     string bulan = "Februari";
//     int tahun = 2023;

//     cout << tahun + 10 << "-" << bulan << "-" << tanggal + 7 << endl;
 

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> c(n);
//     // int terbanyak = 0;
//     for(int i = 0; i < n; i++){
//         cin >> c[i];
//     }
//     int maxfreq = 0;
//     for(int i = 0; i < n; i++){
//         int hitung = 0;
//         for(int j = 0; j < n; j++){
//             if(c[i] == c[j]){
//                 hitung++;
//             }
//         }
//         if(hitung > maxfreq){
//             maxfreq = hitung;
//         }
//     }
//     // cout << maxfreq << endl;
//     int output = n - maxfreq;
//     cout << output << endl;
//     return 0;
// }

