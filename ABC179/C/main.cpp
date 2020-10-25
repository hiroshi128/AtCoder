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
  ull ans = 0;
  for (ull i = 1; i < N; i++){
    for (ull j = i; i * j < N; j++){
      if (i == j){
        ans += 1;
      }else{
        ans += 2;
      }
    }
  }
  cout << ans << endl;
  return 0;
}