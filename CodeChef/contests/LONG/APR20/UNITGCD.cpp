#include<bits/stdc++.h>
using namespace std;

void fastscan(int &x){
bool neg = false;register int c;
x = 0;c = getchar();
if(c=='-'){neg = true;c = getchar();}
for(; (c>47 && c<58); c=getchar()){x = x *10 + c - 48;}
if(neg){x *= -1;}}

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1
#define __              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b)         for(int i=a;i<b;i++)
#define repb(i,a,b)     for(int i=a;i>=b;i--)
#define endl            "\n"

void file(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
}

int bs(int a[] , int s , int e, int x){
    if(s<=e){
        int m = (s+e)/2;
        if(a[m]==x)
            return m;
        else if(a[m] > x)
            return bs(a,s,m-1,x);
        else return bs(a,m+1,e,x);
    }
    return -1;
}


int32_t main(){    
    __;
    w(t){
        int n; 
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
            cout << "1 1" << endl;
            return;
        }
        cout << n / 2 << endl;

          rep(i,0,n/2) {
            if (n % 2 == 1 && i == 0) cout << "3 ";
            else cout << "2 ";
            cout << i * 2 + 1 << ' ' << i * 2 + 2;
            if (n % 2 == 1) {
                if (i == 0) cout << ' ' << n;
            }
            cout << endl;
        }
    }
}
