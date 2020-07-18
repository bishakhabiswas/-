#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int szt = t.size();
    for(int i=0;i<s.size();i++)
    {
        string Kata_string = s.substr(i,szt);
        if(Kata_string == t)
        {
            cout<<"\n"<< i;
        }
    }
    return 0;

}
