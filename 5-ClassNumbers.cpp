#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;
    public:
        Numbers()
        {
            x=0;y=0;z=0;
        }
        void setData(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void showData()
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        Numbers operator-()
        {
            Numbers H;
            H.x=-x;
            H.y=-y;
            H.z=-z;
            return H;
        }
};
int main()
{
    Numbers N;
    N.setData(5,6,4);
    N=-N;
    N.showData();
    return 0;
}