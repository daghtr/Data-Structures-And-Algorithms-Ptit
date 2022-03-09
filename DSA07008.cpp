#include<bits/stdc++.h>
using namespace std;

int muc_uu_tien(char c)     // tra ve thu tu gia tri uu tien cua cac phep tinh
{
    if(c == '(')
        return 0;
    if(c == '+' || c == '-')
        return 1;
    if(c == '/' || c=='*')
        return 2;
    if(c == '^')
        return 3;


}

void hau_to(string s)
{

    stack<char> stk;
    string a;

    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        // neu cac ky tu hoac so la 1 toan hang thi them no vao chuoi dau ra
        if((c >= 'a'  &&  c <= 'z') || (c >= 'A'  &&  c <= 'Z') || (c >= '0'  &&  c <= '9'))
            a += c;
        // neu ky tu dang duyet la mo ngoac'(' push(them) no vao stack
        else if(c == '(')
            stk.push('(');
        // neu gap dong ngoac ')' xoa no va xuat chuoi trong stack ra cho den khi gap mo ngoac'('
        else if(c == ')')
        {
            while(stk.top() != '(')
            {
                a += stk.top();
                stk.pop();
            }
            stk.pop();
        }

        else
        {
            while(!stk.empty()  &&  (muc_uu_tien(s[i]) <= muc_uu_tien(stk.top())))
            {
                a += stk.top();
                stk.pop();
            }
            stk.push(c);
        }
    }

    while(!stk.empty())
    {
        if(stk.top() != '(')        // them nay vao thi bo dau ngoac o cuoi sua khi bien doi di // co hoac k deu dung
            a += stk.top();
        stk.pop();
    }

    cout << a << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string exp;
        cin >> exp;
        hau_to(exp);
    }

    return 0;
}

//done
