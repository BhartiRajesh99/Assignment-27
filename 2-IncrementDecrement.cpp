#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        void setData(int a,int b)
        {
            real=a;
            img=b;
        }
        void showData()
        {
            if(img>=0)
                cout<<real<<"+"<<img<<"i\n";
            else
                cout<<real<<img<<"i\n";
        }
        Complex operator++()
        {
            Complex T;
            T.real=++real;
            T.img=img;
            return T;
        }
        Complex operator++(int dummy)
        {
            Complex T;
            T.real=real++;
            T.img=img;
            return T;
        }
        Complex operator--()
        {
            Complex Z;
            Z.real=--real;
            Z.img=img;
            return Z;
        }
        Complex operator--(int dummy)
        {
            Complex Z;
            Z.real=real--;
            Z.img=img;
            return Z;
        }
};
int main()
{
    Complex c1,c2;
    c1.setData(4,5);
    c2=++c1;    //c2=c1.operator++();
    c2.showData();
    c2=c1--;    //c2=c1.operator--();
    c1.showData();
    return 0;
}
