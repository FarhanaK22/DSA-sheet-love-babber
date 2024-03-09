#include<iostream>
using namespace std;
void check_palin(string s, int i, int j, int &start, int &end)
{
    while(i>=0 && j<s.length() && s[i]==s[j] )
    {
        if(j-i+1> end)
        {
            start = i;
            end = j-i+1;
        }
        i--;
        j++;
    }
    
}
string longest_palin_substr(string s)
{
    int start=0; int end=1;
    for(int i=0;i<s.length();i++)
    {
        //for longest palindrome if string is even  
        check_palin(s,i-1,i, start,end);
        //for longest palindrome if string is odd
        check_palin(s,i-1,i+1,start,end);
    }
     return s.substr( start, end );

}


int main()
{
    string S;
    cout<<"enter string"<<endl;
    cin>>S;
    cout<<"\n"<<longest_palin_substr(S);
    return 0;
}