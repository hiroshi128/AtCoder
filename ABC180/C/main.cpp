#include <utility>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <climits>
#include <cmath>
#include <limits.h>
#include <ios>
#include <iomanip>
#include <map> // pair
#define REP(i,n) for(int i=0;i<n;i++)
typedef unsigned long ul;
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b){return b? gcd(b, a%b):a;}
 
int main() {
	cin.tie(0);
  ios::sync_with_stdio(false);
  ull N;
  cin >> N;
  set<ll> ans;
  for(ll i = 1; i*i <= N; i++){
    if (N % i == 0){
      ans.insert(i);
      ans.insert(N/i);
    }
  }
  for (auto i: ans) cout << i << endl;
  return 0;
}