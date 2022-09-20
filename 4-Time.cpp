#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        Time()
        {
            h=0;m=0;s=0;
        }
        friend ostream& operator<<(ostream&,Time);
        friend istream& operator>>(istream&,Time&);
        bool operator==(Time B)
        {
            if(h==B.h && m==B.m && s==B.s)
                return 1;
            else 
                return 0;
        }
};
ostream& operator<<(ostream &R,Time x)
{
    R<<"Hours:"<<x.h<<endl;
    R<<"Minutes:"<<x.m<<endl;
    R<<"Seconds:"<<x.s<<endl;
    return R;
}
istream& operator>>(istream &U,Time &y)
{
    cout<<"Enter Hours:";
    U>>y.h;
    cout<<"Enter Minutes:";
    U>>y.m;
    cout<<"Enter Seconds:";
    U>>y.s;
    return U;
}
int main()
{
    Time T1,T2;
    cout<<"Enter First Time:\n";
    cout<<"-------------------\n";
    cin>>T1;
    cout<<"\nFirst Time\n";
    cout<<T1;
    cout<<"\nEnter Second Time:\n";
    cout<<"--------------------\n";
    cin>>T2;
    cout<<"\nSecond Time\n";
    cout<<T2;
    if(T1==T2)
        cout<<"\nTimes are same.";
    else 
        cout<<"\nTimes are not same.";
    return 0;
}