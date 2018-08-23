#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string s;
vector <string> q;
bool used[10001];
string delet(string s, int n){
    string d = "";
    for(int i = 0; i < s.length(); i++){
        if(i == n)
            continue;
        else
        {
            d += s[i];
        }
    }
    return d;
}
string del(string s, int k, int f){
    string d = "";
    for(int i = 0; i < s.length(); i++){
        if(i >= k && i <= f)
            continue;
        else
        {
            d += s[i];
        }
    }
    return d;
}
int a[10001], n, ans, qwe;
int main(){
    freopen("tshirts.in", "r", stdin);
    freopen("tshirts.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s += a[i] + 48;
    }
    string h, t = s;
    int k = s.length(), l = k;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < k; j++){
            h = s.substr(i, j + 1);
            s = h;
            reverse(s.begin(), s.end());
            if(h == s){
                ans++;
                q.push_back(h);
            }
            s = t;
        }
        k--;
    }
    string r;
    for(int i = 0; i < s.length(); i++){
        r = delet(s, i);
        s = r;
        reverse(s.begin(), s.end());
        if(s == r){
            qwe++;
            q.push_back(r);
        }
        s = t;
    }
    int y = s.length(), alp = 0;
    for(int i = 1; i < l; i++){
        for(int j = i; j < y; j++){
            h = del(s, i, j);
            s = h;
            reverse(s.begin(), s.end());
            if(h == s){
                alp++;
                q.push_back(h);
            }
            s = t;
        }
    }
    cout << ans + qwe + alp - n + 1;
    return 0;
}
