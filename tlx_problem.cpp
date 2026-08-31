#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; i++){
        cin >> data[i];
    } 
    for(int i = 0; i < data.size(); i++){
        for(int  j = i + 1; j < data.size(); j++){
            if(data[i] == data[j]){
                data.erase(data.begin() + j);
                j--;
            }
        }
        cout << data[i] << endl;
    }
} 
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     set<ll> data;
//     ll N; cin >> N;

//     for(int i = 0; i < N; i++){
//         int x;
//         cin >> x;
//         if(data.count(x) == 0){
//             cout << x << endl;
//             data.insert(x);
//         }
//     }

//     return 0;
// }

