#include<bits/stdc++.h>
#define ll  long long 
#define ld  long double 
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define vec vector
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),vine present(container, element)(container.find(element) != container.end())
#define cpresent(container, element)(find(all(container), element) != container.end())
#define gcd(a,b) __gcd(a,b)
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(max3(a,b,c),d)
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(a,min3(b,c,d))
#define er cout<<-1<<endl;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define  mod 1000000007     // 1e9+7
#define pi 3.1415926536
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define fset(n) __builtin_ffs(n)
#define trailzerobit(n) __builtin_ctz(n)
using namespace std;
    //debbug
template < typename F, typename S >
  ostream & operator << (ostream & os, const pair < F, S > &p)
{
  return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
  ostream & operator << (ostream & os, const vector < T > &v)
{
  os << "{";
  for (auto it = v.begin (); it != v.end (); ++it)
    {
      if (it != v.begin ())
    os << ", ";
      os << *it;
    }
  return os << "}";
}
 
template < typename T >
  ostream & operator << (ostream & os, const set < T > &v)
{
  os << "[";
  for (auto it = v.begin (); it != v.end (); ++it)
    {
      if (it != v.begin ())
    os << ", ";
      os << *it;
    }
  return os << "]";
}
 
template < typename T >
  ostream & operator << (ostream & os, const multiset < T > &v)
{
  os << "[";
  for (auto it = v.begin (); it != v.end (); ++it)
    {
      if (it != v.begin ())
    os << ", ";
      os << *it;
    }
  return os << "]";
}
 
template < typename F, typename S >
  ostream & operator << (ostream & os, const map < F, S > &v)
{
  os << "[";
  for (auto it = v.begin (); it != v.end (); ++it)
    {
      if (it != v.begin ())
    os << ", ";
      os << it->first << " = " << it->second;
    }
  return os << "]";
}
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu ()
{
  cerr << endl;
}
 
template < typename T > void
faltu (T a[], int n)
{
  for (int i = 0; i < n; ++i)
    cerr << a[i] << ' ';
  cerr << endl;
}
 
template < typename T, typename ... hello > void
faltu (T arg, const hello & ... rest)
{
  cerr << arg << ' ';
  faltu (rest ...);
}               //debug
 


void no ()
{
  cout << "NO" << endl;
}
 
void yes ()
{
  cout << "YES" << endl; 
}

 
ll power (ll base, ll x)
{
  ll s = 1;
  for (ll i = 1; i <= x; i++)
    {
      s = (s*base);
 
    }
  return s;
 
}
bool poweroftwo(ll x)
{
   return !(x&(x-1ll));
 
}
 
ll lcm(ll x,ll y)
{
  return (x*y)/__gcd(x,y);
 
}
 
 
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};

 
const int sz =1000006;


ll sum(ll a)
{
  return ((a)*(a+1))/2ll;
 
}
// 1 to n
ll sum_even(ll n)
{
  return  n*(n+1);
}

bool check_prime(ll x)
{
  for(int i=2;i<x;i++)if(x%i==0)return false;
  return true;
}

ll mx_element(ll a[],ll l,ll r)
{
  ll mx=0;
  for(int i=l;i<r;i++)mx=max(a[i],mx);
  return mx;
}
bool check(ll a[],ll n,ll mid,ll k)
{

  ll health=0;
  for(int i=2;i<=n;i++)
  {health+=min(a[i]-a[i-1],mid);
  }
  health+=mid;

  return health>=k;
}




void solve()
{
  ll n;
  cin>>n;
  vector<pair<ll,ll> > v;

  for(int i=1;i<=n;i++)
  {
    ll x,y;
    cin>>x>>y;
    v.pb({x,y});
  }
  sort(all(v));

  for(int i=1;i<n;i++)
  {
    if(v[i-1].first>v[i].first || v[i-1].second>v[i].second)
    {
      cout<<"NO"<<endl;
      return;
    }
  }

 vector<char > c;
ll x=0;
ll y=0;

for(auto it: v)
{
  ll a=it.first;
  ll b=it.second;
  while(x<a)c.pb('R'),x++;
  while(y<b)c.pb('U'),y++;

}
cout<<"YES"<<endl;
for(auto x: c)
{
  cout<<x;
}
cout<<endl;



}

int main ()
{
  #ifndef ONLINE_JUDGE
freopen ("input.txt","r", stdin);
freopen ("out.txt","w", stdout);
 
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

  
int t;cin>>t;for(ll i=1;i<=t;i++)
solve();

return 0;
 
}