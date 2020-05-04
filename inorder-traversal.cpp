#include                   <bits/stdc++.h>
using namespace std;
#define  sync              ios_base::sync_with_stdio(false);cin.tie(NULL);
#define  pb                push_back

struct node
{
	int data;
	node * l;
	node * r;

};

node * getnode ( int x)
{
	node * temp;
	temp = new node();
	temp-> data=x;
	temp-> l=temp-> r = NULL;
	return temp;
}

void inorder(node * root)
{
	if(root == NULL)
		return;
inorder(root -> l);
cout<<root-> data<<" ";
inorder(root->r);
}
int main() 
{     sync;
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
     node * root =getnode(1);
    root -> l= getnode(2);
    root -> r=getnode(3);
    root->l -> l = getnode(4);
    root -> l-> r = getnode(5);
    root -> r -> l =getnode(6);
    root-> r->r=getnode(7);
    inorder(root);

   
}