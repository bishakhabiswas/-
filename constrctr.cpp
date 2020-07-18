#include <iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    student()
    {
        cout<<"id:";
        cin>>id;
        cout<<"Name:";
        cin>>name;
    }
};
int main()
{
    student s1,s2;
    return 0;
}
