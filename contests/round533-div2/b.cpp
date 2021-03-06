//Author: techid2000
#include <bits/stdc++.h>
#pragma region Preparation
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,a,b) for(int i=a;i>=b;--i)
#define rep(i,a) for(int i=0;i<a;i++)
#define minheap(x) x,vector<x>,greater<x>
#define X first
#define Y second
#define watch(x) cerr<<#x<<" = "<<x<<'\n'
using namespace std;
using PII = pair<int,int>;
using LL = long long;
template<class T,class U>inline bool amin(T& x, U y){return x>y?(x=y,true):false;}
template<class T,class U>inline bool amax(T& x, U y){return x<y?(x=y,true):false;}
ifstream fin("iofiles/in.txt");
ofstream fout("iofiles/out.txt"),ferr("iofiles/err.txt");
inline void fastio() { ios_base::sync_with_stdio(false); cin.tie(NULL); }
inline void redirect() {
#ifndef ONLINE_JUDGE
  cin.rdbuf(fin.rdbuf()); cout.rdbuf(fout.rdbuf());cerr.rdbuf(ferr.rdbuf());
#endif
}
#pragma endregion
int n,k,cnt,len,cch[100],X;
string s;

int main() {
  fastio();
  redirect();
  //Code here
  cin >> n >> k;
  cin >> s;
  len=s.size();
  foru(i, 0, len-1) {
    ++cnt;
    if(i==len-1 || s[i+1]!=s[i]) {
      cch[s[i]-'a']+=cnt/k; 
      cnt=0;
    }
  }
  foru(i, 'a'-'a', 'z'-'a') {
    amax(X, cch[i]);
  }
  cout << X;
  return 0;
}