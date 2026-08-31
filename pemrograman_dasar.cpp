#include <bits/stdc++.h>
#define ll long long
using namespace std;

//uji keprimaan
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
        return true;
    }
//

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // cout << "Hello World" << endl;
    int n;
    cin >> n;
    bool hasil = isPrime(n);
    if(hasil){
        cout << "yes" << endl;
    } else {
        cout << "No" << endl;
    }

    int x = 27;
    int y = 9;

    int fpb  = gcd(x,y);
    int kpk = lcm(x,y);
    cout << fpb << " " << kpk << endl;

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> findDivisibleSequence(vector<int>& a, int n){
    vector<long long> sum(n+1, 0);
        for(int i = 1; i<= n; i++){
            sum[i] = sum[i - 1] + a[i];
        }
        vector<int> seenInIndex(n, -1);
            for(int i = 0; i <= n; i++){
                int rem = (sum[i] % n + n) % n;

                if(seenInIndex[rem] == -1){
                    seenInIndex[rem] = i;
                } else {
                    int a = seenInIndex[rem];
                    int b = i;

                    vector<int> result;
                    for(int k = a + 1; k <= b; k++){
                        result.push_back(k);
                    }
                    return result;
                }
            }
            return{};
        }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin >> n)) return 0;

    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> solution = findDivisibleSequence(a, n);

    for(int x : solution){
        cout << a[x] << " ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void search(const vector<int>&h , int x){
    int hasil = 0;
    int n = h.size();
    for(int i = 0; i < n; i++){
        if(h[i] == x){
            hasil = i + 1;
            break;
        }
    }
    if(hasil == 0){
        cout << "beri hadiah lain" << endl;
    } else {
        cout << hasil << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    int x;
    cin >> x;
    search(data, x);
    
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void binarysearch(const vector<int> &h, int x){
    int hasil = 0;
    int kiri = 1;
    int n = h.size();
    int kanan = n;
    while((kiri <= kanan) && hasil == 0){
        int tengah = (kiri + kanan) / 2;
        if(x < h[tengah - 1]){
            kanan = tengah - 1;
        } else if(x > h[tengah - 1]){
            kiri = tengah + 1;
        } else {
            hasil = tengah;
        }
    }
    if(hasil == 0){
        cout << "beri hadiah lain" << endl;
    } else{
        cout << hasil << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i< n; i++){
        cin >> data[i];
    }

    int x;
    cin >> x;
    binarysearch(data, x);


    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    sort(data.begin(), data.end(), greater<int>());
    for(int x : data){
        cout << x << " ";
    }

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void bubbleshort(vector<int>& h){
    int n = h.size();
    for(int i = 1; i < n - 1; i++ ){
        for(int j = 1; j < n - 1 - i; j++){
            if(h[j] > h[j+1]){
                swap(h[j], h[j + 1]);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }

    bubbleshort(data);
    for(int x : data){
        cout << x << " ";
    }

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void selectionSort(vector<int>& h){
    int n = h.size();
     for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(h[j] < h[minIndex]){
                minIndex = j;
            }
        }
        swap(h[i], h[minIndex]);
     }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n;
        cin >> n;
        vector<int> data(n);
        for(int i = 0; i < n; i++){
            cin >> data[i];
        }

        selectionSort(data);
        for(int x : data){
            cout << x << " ";
        }

    return 0;
}

brute force
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int k;
vector<int> a;

bool bruteForce(int i, int sum){
    if(i >= n){
        if(sum == k){
            return true;
        } else {
            return false;
        }
    }
    bool option1 = bruteForce(i + 1, sum + a[i]);
    bool option2 = bruteForce(i + 1, sum); 

    return option1 || option2;
}

void SolveSubSetSum(){
    if(bruteForce(0, 0)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    a = {3, 9, 2, 7};
    n = a.size();
    k = 11;

    SolveSubSetSum();

    return 0;
}

optimize BruteForce
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int k;
vector<int> a;

bool optimizedSolve(int i, int sum){
    if(i >= n){
        if(sum == k){
            return true;
        } else {
            return false;
        }
    }

    if (sum > k){
        return false;
    }
    bool option1 = optimizedSolve(i + 1, sum + a[i]);
    bool option2 = optimizedSolve(i + 1, sum);
    return option1 || option2;
}

void resolve(){
    if (optimizedSolve(0,0)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    a = {3, 9, 2, 7};
    n = a.size();
    k = 100;

    resolve();

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int countTriplets(vector<int>& a){
    // int count = 0;
    // int n = a.size();
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         for(int k = 0; k < n; k++){
    //             int p = a[i];
    //             int q = a[j];
    //             int r = a[k];
    //             if(p + q + r == 0){
    //                 count++;
    //             }
    //         }
    //     }
    // }
    // return count;

    //efficient solution

    int count = 0;
    int n = a.size();
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int p = a[i];
            int q = a[j];
            int r = -(p + q);
            if(binary_search(a.begin(), a.end(),r)){
                count++;
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }

    int ans = countTriplets(data);
    cout << ans << endl;

    return 0;
}


