#include <iostream>
using namespace std;
class circle
{
private:
    double radius;
public:
    void setradius(double r)
    {
        radius = r;
    }
    double getarea()
    {
        return 3.14*radius*radius;
    }

};
int main()
{
    circle c1;
    c1.setradius(2.5);
    cout<<c1.getarea();
    return 0;
}














