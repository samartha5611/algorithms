/**************************************************************
Sliding Window Technique
**************************************************************/
#include                   <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

template <typename T>
void print(T&& arg1)
{cout<<arg1<<endl;}
template <typename T, typename... Args>
void print(T&& arg1, Args&&... args)
{cout<<arg1<<" "; print(args...); }

#define oset tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>  
#define  pb                push_back
#define  popb			   pop_back
#define  eb                emplace_back
#define  in                insert
#define  F                 first
#define  S                 second
#define  mp                make_pair 
#define  endl              '\n'                
#define  nod(n)            floor(log10(n))+1 
#define  all(x)            x.begin(),x.end()
#define  minv(m,n)         *min_element(m,n)      
#define  maxv(m,n)         *max_element(m,n)      
#define  rep(n)            for(int i=0; i<n;i++)
#define  show(a)           for(auto x: a)cout<<x<<" ";cout<<endl;
#define  del(v,i)          v.erase(v.begin()+i)
#define  itr               iterator
#define  sz(x)             (int)x.size()
#define  mem(a,x)          memset(a,x,sizeof(a))
#define  find              find_by_order
#define  order             order_of_key
#define  ll                long long int
#define  ul                unsigned long long
#define  vi                vector<int>
#define  vll               vector<ll>
#define  vb                vector<bool>
#define  prs(x)            fixed << setprecision(x)
#define  mod               1000000007


int main() 
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt","w", stdout);
    #endif
 	int n, k;
 	cin>>n>>k;
 	int a[n];
 	rep(n)
 	{
 		cin>>a[i];
 	}
 	int i,j;
 	vi v;
 	int prevsum=0;
 	for(int i=0 ; i<k ; i++)
 	{
 		prevsum+=a[i];
 	}
 	i=1;
 	v.pb(prevsum);
 	while (i+k-1<=n-1)
 	{
 		prevsum=prevsum-a[i-1];
 		prevsum=prevsum+a[i+k-1];
 		v.pb(prevsum);
 		i++;

 	}
 	show(v);
}

