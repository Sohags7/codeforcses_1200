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
#define  mod 998244353     // 1e9+7
#define pi 3.1415926536
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define fset(n) __builtin_ffs(n)
#define trailzerobit(n) __builtin_ctz(n)
using namespace std;

//const int m=3e5+7;
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
     
    void
    faltu ()
    {
      cerr << endl;
    }
     
    template < typename T > void faltu (T a[], int n)
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

 
void solve()
{
  ll n;
  cin>>n;
  ll a[n+5];

  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  if(is_sorted(a+1,a+n+1))
  {
    cout<<"0"<<endl;
    return;
  }
  if(a[n-1]<a[n])
  {
    int i=n;
    int k=1;

    while(i>0 && a[i-1]<=a[i])i--,k++;
    cout<<n-k<<endl;
  }
  else 
  {
     int i=n;
     int k=1;
     while(i>1 && a[i-1]>=a[i])i--,k++;
     while(i>1 && a[i-1]<=a[i])i--,k++;
    cout<<n-k<<endl;

  }





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