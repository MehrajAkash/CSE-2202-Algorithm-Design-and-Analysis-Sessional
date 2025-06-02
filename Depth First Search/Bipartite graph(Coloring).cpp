
#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

const int mx = 2e4+123;
bool vis[mx];
vi adj[mx];
bool isNode[mx];
int cnt, cnt1;

void dfs ( int u, int col )
{
    vis[u] = 1;
    if ( col == 1 ) cnt1++;
    cnt++;

    int tmp;
    if ( col == 1 ) tmp = 2;
    else tmp = 1;

    for ( auto v : adj[u] ) {
        if (  vis[v] == 0 ) {
            dfs ( v, tmp );
        }
    }
}


int main()
{
    optimize();

    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ ) {
        for ( int i = 0; i < mx; i++ ) {
            adj[i].clear();
            isNode[i] = 0;
            vis[i] = 0;
        }

        int m;
        cin >> m;
        for ( int i = 1; i <= m; i++ ) {
            int u, v;
            cin >> u >> v;
            adj[u].PB ( v );
            adj[v].PB ( u );

            isNode[u] = 1;
            isNode[v] = 1;
        }

        int ans = 0;
        for ( int i = 1; i <= 2e4; i++ ) {
            if ( isNode[i] == 1 && vis[i] == 0 ) {
                cnt = 0, cnt1 = 0;
                dfs ( i, 1 );
                ans += max ( cnt1, cnt - cnt1 );
            }
        }


        cout << "Case " << tc << ": " << ans << endl;
    }


    return 0;
}
