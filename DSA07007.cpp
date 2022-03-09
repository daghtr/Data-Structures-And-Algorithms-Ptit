#include<bits/stdc++.h>
using namespace std;

string remove(string s)
{
	string res="";
	stack<char> ngoac;

	ngoac.push('+');
	for(int i = 0 ; s[i] ; i++)
        {
            if(s[i] == '-'){
                if(ngoac.top() == '+')
                    res += "-";
                else
                    res += "+";
            }
            else if(s[i] == '+')
            {
                if(ngoac.top() == '-')
                    res += "-";
                else
                    res += "+";
            }
            else if(s[i] == '(')
            {
                if(i > 0  &&  s[i-1] == '-')
                {
                    if(ngoac.top() == '+')
                        ngoac.push('-');
                    else
                        ngoac.push('+');
                }
            }
            else if(s[i] == ')')
                ngoac.pop();
            else
                res += (s.substr(i, 1));
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		string a = remove(s1), b = remove(s2);
		if(a.compare(b) == 0)
            cout<<"YES\n";
		else
            cout<<"NO\n";
	}
	return 0;
}

//chua sub
