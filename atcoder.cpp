// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int l, r;
//     cin >> l >> r;
//     int output = r - l;
//     cout << output + 1 << endl;
//     return 0;
// }

// // N = jumlah bola, M = warna bola tp dalam bentuk angka dengan batas 1,2 - M
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, m;
//     cin >> n >> m;
//     vector<int> maks_ukuran = vector<int>(m+1, -1);

//     for(int i = 0; i < n; i++){
//         int c, s;
//         cin >> c >> s;
//         if(s > maks_ukuran[c]){
//             maks_ukuran[c] = s;
//         }
//     }

//     for(int k = 1; k <= m; k++){
//         cout << maks_ukuran[k] << " ";
//     }
    
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {


//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int x, y, l, r, a, b;
//     cin >> x >> y >> l >> r >> a >> b;
//     int total_cost = 0;

//     for(int i = a; i < b; i++){
//         if(i >= l && i < r ){
//             total_cost += x;
//         } else {
//             total_cost += y;
//         }
            
//     }

//     cout << total_cost << endl;
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
//     string s;
//     cin >> s;

//     int jumlah = 0;
//     for(int i = 0; i < n; i++){
//         if(s[i] == 'o'){
//             jumlah++;
//         }else if(s[i] != 'o'){
//             break;
//         }
//     }
//     s.erase(0, jumlah);
    
//     cout << s << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int h, w;
//     cin >> h >> w;

//     vector<string> c(h);
//     for(int i = 0; i < h; i++){
//         cin >> c[i];
//     }
//     int top = 0;
//     while(top < h){
//         bool allWhite = true;
//         for(int j = 0; j < w; j++){
//             if(c[top][j] == '#'){
//                 allWhite = false;
//                 break;
//             }
//         }
//         if(!allWhite) break;
//         top++;
//     }

//     int bottom = h - 1;
//     while(bottom >= 0){
//         bool allWhite = true;
//         for(int j = 0; j < w; j++){
//             if(c[bottom][j] == '#'){
//                 allWhite = false;
//                 break;
//             }
//         }
//         if(!allWhite) break;
//         bottom--;
//     }

//     int left = 0; 
//     while(left < w){
//         bool allWhite = true;
//         for(int i = 0; i < h; i++){
//             if(c[i][left] == '#'){
//                 allWhite = false;
//                 break;
//             }
//         }
//         if(!allWhite) break;
//         left++;
//     }

//     int right = w - 1;
//     while(right >= 0){
//         bool allWhite = true;
//         for(int i = 0; i < h; i++){
//             if(c[i][right] == '#'){
//                 allWhite = false;
//                 break;
//             }
//         }
//         if(!allWhite) break;
//         right--;
//     }

//     for(int i = top; i <= bottom; i++){
//         for(int j = left; j <= right; j++){
//             cout << c[i][j];
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int m, d;
//     cin >> m >> d;

//     vector<int> bulan = {1, 3, 5, 7, 9};
//     vector<int> tanggal = {7, 3, 5, 7, 9};

//     bool cocok = false;
//     for(int i = 0; i < 5; i++){
//         if(m == bulan[i] && d == tanggal[i]){
//             cocok = true;
//         } else if(m == 1 && d == 7){
//             cocok = true;
//         }

//     }
//     if(cocok){
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string s;
//     cin >> s;
//     int jumlah = s.length();
//     if(jumlah % 5 == 0){
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
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
//     char x;
//     cin >> n >> x;
//     vector<string> s(n);
//     for(int i = 0; i < n; i++){
//         cin >> s[i];
//     }
//     int angka = x - 'A';
//     bool ada = false;
//     for(int i = 0; i < n; i++){
//             if(s[i][angka] == 'o'){
//                 ada = true;
//             }
//         }

//     if(ada){
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
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
//     vector<vector<int>> received(n + 1);
//     for(int i = 1; i <= n; i++){
//         int k;
//         cin >> k;
//         for(int j = 0; j < k; j++){
//             int a;
//             cin >> a;
//             received[a].push_back(i);
//         }
//     }

//     for(int i = 1; i <= n; i++){
//         cout << received[i].size();
//         for(int x : received[i]){
//             cout << " " << x;
//         }
//         cout << endl;
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
//     vector<int> a(n + 1);
//     vector<int> b(n + 1);
//     bool cocok = true;
//     for(int i = 1; i <= n; i++) cin >> a[i];
//     for(int i = 1; i <= n; i++) cin >> b[i];

//     for(int i = 1; i <= n; i++){
//         if(b[a[i]] != i ){
//             cocok = false;
//             break;
//         }
//     }
//     if(cocok){
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     ll x1, y1, r1, x2, y2, r2;
//     for(int i = 0; i < t; i++){
//         cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//         ll dx = x1 - x2;
//         ll dy = y1 - y2;
//         ll jarak = (dx * dx) + (dy * dy);
//         ll jumlah_r = (r1 + r2) * (r1 + r2);
//         ll selisih_r = (r1 - r2) * (r1 - r2);

//         if(selisih_r <= jarak && jarak <= jumlah_r){
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
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

//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> a(n, vector<int>(m));
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> a[i][j];
//         }
//     }

//     vector<vector<int>> b(m, vector<int>(n));
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             b[j][n - 1 - i] = a[i][j];
//         }
//     }

//    for(int i = 0; i < m; i++){
//     for(int j = 0; j < n; j++){
//         cout << b[i][j] << " ";
//     }
//     cout << endl;
// } 
// return 0;

// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> data(n);
//     for(int i = 0; i < n; i++){
//         cin >> data[i];
//     }

//     for(int i = 0; i < data.size(); i++){
//         for(int j = i + 1; j < data.size(); j++){
//             if(data[i] == data[j]){
//                 data.erase(data.begin() + j);
//                 j--;
//             }
//         }
//     }

//     for(int i = 0; i < data.size(); i++){
//         cout << data[i] << endl;
//     }
    
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n; cin >> n;
//     vector<string> group = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     string s, ans;
//     for(int i = 0; i < n; i++){
//         cin >> s;
//         char c = s[0];
//         for(int j = 0; j < group.size(); j++){
//             if(group[j].find(c) != string::npos){
//                 ans += char('2' + j);
//                 break;
//             }
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n; cin >> n;
//     vector<vector<int>> matrix(n, vector<int>(n));
//     for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> matrix[i][j];
//     vector<int> result;
//     int top = 0, bottom = n-1, left = 0, right = n-1;
//     while (top <= bottom && left <= right) {
//         for (int i = left; i <= right; i++) result.push_back(matrix[top][i]); top++;
//         for (int i = top; i <= bottom; i++) result.push_back(matrix[i][right]); right--;
//         if (top <= bottom) { for (int i = right; i >= left; i--) result.push_back(matrix[bottom][i]); bottom--; }
//         if (left <= right) { for (int i = bottom; i >= top; i--) result.push_back(matrix[i][left]); left++; }
//     }
//     for (int i = 0; i < (int)result.size(); i++) { if (i > 0) cout << " "; cout << result[i]; }
//     cout << "\n";
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     float a, b;
//     cin >> a >> b;
//     int tambah = a + b;
//     int kurang = a - b;
//     int kali = a * b;
//     float bagi = a / b;

//     if(tambah == 9 || kurang == 9 || kali == 9 || bagi == 9){
//         cout << "Nine" << endl;
//     } else {
//         cout << "Nein" << endl;
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
//     for(int i = 1; i <= n; i++){
//         if(i % 3 == 0){
//             cout << "Fizz" << endl;
//         } else {
//             cout << i << endl;
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

//     int n, k;
//     cin >> n >> k;
//     int ans = (n - k) + 1; 
//     cout << ans << endl;

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s[100];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        for(int j = 0; j < s[i].length(); j++){
            s[i][j] = tolower(s[i][j]);
        }
    }
    int maks = 0;
    for(int i = 0; i < n; i++){
        int hitung = 0;
        for(int j = 0; j < n; j++){
            if(s[i] == s[j]){
                hitung++;
            }
        }
        if(hitung > maks){
            maks = hitung;
        }
    }

    cout << maks << endl;

    return 0;
}