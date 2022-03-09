#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right; 
};

Node *newNode(int val)
{		
	Node *temp = new Node;
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

bool checkUtil(Node *t, int level, int &muc_la)
{ 
    if(t == NULL)
		return true; 
    if(t->left == NULL  &&  t->right == NULL)
	{
        if (muc_la == 0)
		{ 
            muc_la = level;
            return true; 
        } 
        return (level == muc_la); 
    } 
    return checkUtil(t->left, level+1, muc_la)  &&  checkUtil(t->right, level+1, muc_la); 
} 

int ktra(Node *t)
{ 
    int level = 0;
	int muc_la = 0; 
    return checkUtil(t, level, muc_la); 
} 

Node* buildTree(int n){
	map<int, Node *> m;
	Node *t = NULL;
	while(n--)
	{
		int a, b;
		cin >> a >> b;
		char c;
		cin >> c;
		Node *cha;
		if(m.find(a) == m.end())
		{
			cha = newNode(a);
			m[a] = cha;
			if(t == NULL)
			t = cha;
		}
		else cha = m[a];
		Node *con = newNode(b);
		if(c == 'L')
			cha->left = con;
		else if(c == 'R')
			cha->right = con;
			
		m[b] = con;
	}
	return t;
}

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		Node *t = buildTree(n);
		cout << ktra(t);
		cout << endl;
	}
	return 0;
}

// done
