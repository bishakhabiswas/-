#include <iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    student (int x)
    {
        id=x;
        cout<<"Id\n:";
        cin>>id;
        cout<<"Name:";
        cin>>name;
    }
    ~student()
    {
        cout<<"Destructor:";

    }
};
int main()
{
    student s1(1), s2(2);
    return 0;
}
