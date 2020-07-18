#include <iostream>
using namespace std;
class sample
{
private :
    int a,b;
public :
    void setvalue()
    {
        a=25,b=40;
    }
    friend float mean(sample s)
//float mean(sample s)
{
    return  float (s.a+s.b)/2;
}
};
int main()
{
    sample x;
    x.setvalue();
    cout<<"mean value:"<<mean(x);
    return 0;

}
