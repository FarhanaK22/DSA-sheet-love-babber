//Print all the duplicate characters in a string

#include<iostream>
using namespace std;

void find_dup(string s)
{
    int arr[26]={0};
    int i=0,v;
    while(s[i]!='\0')
    {   if(s[i]<97)
        v =  s[i] - 'A';
        else
        v =  s[i] - 'a';
        arr[v]++;
        i++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]>1)
        {char c = char(i+ 97);
        cout<<c<<" , count ="<<arr[i]<<endl;
        }

    }
}
int main()
{
    string s= "Geekforgeeks";
    find_dup(s);
    return 0;
}