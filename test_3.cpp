#include <iostream>
#include <string>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll mod(const string& b,ll a){
    ll res = 0;
    for(char c : b){
        res = (res * 10 +(c - '0')) % a;
    }
    return res;
}

ll UCLN(ll a, const string& b){
    ll mod_b = mod(b,a);
    return gcd(a,mod_b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a;
        string b;
        cin >> a >> b;
        cout << UCLN(a,b) << endl;
    }
    return 0;
}