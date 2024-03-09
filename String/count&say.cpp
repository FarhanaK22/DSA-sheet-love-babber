#include<iostream>
using namespace std;

string countAndSay(int n) {
        string s = "1";
        for(int i=2;i<=n;i++)
        {   string say ="";
            s += ' ';
            int count = 1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]!=s[j-1])
                {say = say + to_string(count)+ s[j-1];
                count=1;
                 }
                else
                count++;
            }
            s = say;
        }
        return s;
    }

int main()
{   int n=4;
    cout<<countAndSay(n);
}