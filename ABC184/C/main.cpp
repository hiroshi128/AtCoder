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
  ll r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  ll r = r1 -r2;
  ll c = c1 -c2;

  int ans = 3;
  if (r==0 && c==0) ans = 0;
  else if (r==c || r==-c || abs(r) + abs(c) <=3) ans =1;
  else if((r ^ c ^ 1) & 1 || abs(r + c) <= 3 || abs(r - c) <= 3 || abs(r) + abs(c) <= 6) ans = 2;
  cout << ans << endl;

  return 0;
}