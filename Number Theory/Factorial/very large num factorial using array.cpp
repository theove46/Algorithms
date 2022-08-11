#include<bits/stdc++.h>
using namespace std;

///THEOVE46

#define PI  2*acos(0.0)
#define pf  printf
#define sf  scanf
#define ff  first
#define ss  second
#define mp  make_pair
#define pb  push_back
#define gap " "

typedef long long ll;
typedef unsigned long long ull;
typedef std::vector<int> vi;
typedef vector<long long> vll ;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define sc(n)       sf("%d",&n);
#define pc(n)       pf("%d",n);
#define scf(f)      sf("%f",&f);
#define pcf(f)      pf("%f",f);
#define FOR(a,n)  for(int i=a; i<n; i++)
#define RFOR(a,n)  for(int i=a; i>n; i--)
#define TEST(test)  for(int ove=0; ove<test; ove++)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define all(x) (x).begin(), (x).end()
#define fap(x) cout << __LINE__ << " says: " << #x << " = " << x << "\n"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const ll INF = 2000000000000000000LL;
const int inf = 0x3f3f3f3f;
const long double EPS = 1e-9;

///THEOVE46

void fact(int n)
{
    int a[200],i,j,k,m, temp;
    m=1;
    a[0]=1;

    for(j=2;j<=n;j++)
    {
        temp=0;
        for(k=0;k<m;k++)
        {
            a[k]=a[k]*j+temp;
            temp=a[k]/10;
            a[k]=a[k]%10;
        }

        while(temp) //temp!=0
        {
            a[k]=temp%10;
            k++;
            m++;
            temp=temp/10;
        }
    }
    for(i=m-1;i>=0;i--)
        pc(a[i]);
        pf("\n");
}
int main()
{
    FastIO;
    int t, x;
    sc(t);
    while(t--)
    {
        sc(x)
        fact(x);
    }
    return 0;
}

///   check for integer overflow, array bounds
///   check for n=1
///   - - - The Ove 46

