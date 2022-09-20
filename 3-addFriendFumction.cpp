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
        friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex C,Complex D)
{
    Complex N;
    N.real=C.real+D.real;
    N.img=C.img+D.img;
    return N;
}
int main()
{
    Complex A,B,C;
    A.setData(6,3);
    B.setData(3,2);
    C=A+B;
    C.showData();
    return 0;
}