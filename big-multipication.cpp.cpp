/**************************************************************
Trying my best to solve next hard problem,whatever it takes...
**************************************************************/
#include                   <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
#define oset tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>  
#define  sync              ios_base::sync_with_stdio(false);cin.tie(NULL);
#define  pb                push_back
#define  eb                emplace_back
#define  pop               pop_back
#define  pf                   push_front
#define  popf               pop_front
#define  F                 first
#define  S                 second
#define  mp                make_pair 
#define  endl              '\n'                
#define  nod(n)            floor(log10(n))+1 
#define  all(x)            x.begin(),x.end()
#define  minv(m,n)         *min_element(m,n)      
#define  maxv(m,n)         *max_element(m,n)      
#define  fr(n)             for(int i=0; i<n;i++)
#define  show(a)           for(auto x: a)cout<<x<<"";cout<<endl;
#define  del(v,i)          v.erase(v.begin()+i)
#define  dup(v)            v.erase(unique(v.begin(),v.end()),v.end())
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
#define  vs                vector<string>
#define  pii               pair<int,int >
#define  umap               unordered_map
#define  prs(x)            fixed << setprecision(x)
#define  mod               1000000007
int a[200];


void multi(ll x)
{
    ll temp=0 , len=0 ;
    int idx=0;
    while(a[idx])
    {
        len++;
        idx++;
    }
    for(int i=0 ; i< len ;i++)
    {
        temp=temp+ a[i]*x;
        a[i]=temp%10;
        temp=temp/10;

    }
    while(temp)
    {
        a[len]=temp%10;
        temp=temp/10;
        len++;
    }
}

int main() 
{   
    sync;
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt","w", stdout);
    #endif
    a[0]=1;
  ll no1 , no2 ;
  cin>>no1 >>no2;
  int idx=0;
  while(no1)
  {
    a[idx]=no1%10;
    no1=no1/10;
    idx++;
  }
  multi(no2);
  int st;
  for(int i=99 ;i>=0 ;i--)
  {
    if(a[i]>0)
    {
        st=i;break;
    }

  }
  for(int i=st ; i>=0 ;i--)
    cout<<a[i];


}

