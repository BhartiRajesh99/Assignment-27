#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        void setData(int x,int y)
        {
            real=x;
            img=y;
        }
        void showData()
        {
            if(img>=0)
                cout<<real<<"+"<<img<<"i\n";
            else
                cout<<real<<img<<"i\n";
        }
        //  Defining + Operator
        Complex operator+(Complex C)
        {
            Complex t;
            t.real=real+C.real;
            t.img=img+C.img;
            return t;
        }
        Complex operator+(int x)
        {
            Complex temp;
            temp.real=real+x;
            temp.img=img;
            return temp;
        }
        //  Defining - Operator
        Complex operator-(Complex S)
        {
            Complex F;
            F.real=real-S.real;
            F.img=img-S.img;
            return F;
        }
        Complex operator-(int q)
        {
            Complex c;
            c.real=real-q;
            c.img=img;
            return c;
        }
        //  Defining * Operator
        Complex operator*(Complex V)
        {
            Complex E;
            E.real=real*V.real - img*V.img;
            E.img=real*V.img + img*V.real;
            return E;
        }
        Complex operator*(int y)
        {
            Complex M;
            M.real=real*y;
            M.img=img*y;
            return M;
        }
        //  Defining == Operator
        bool operator==(Complex K)
        {
            if(real==K.real && img==K.img)
                return 1;
            else 
                return 0;
        }
        int operator==(int l)
        {
             if(real==l&&img==0)
                return 1;
            return 0;
        }
        friend Complex operator+(int,Complex);
        friend Complex operator-(int,Complex);
        friend Complex operator*(int,Complex);
        friend int operator==(int,Complex);
};
Complex operator+(int X,Complex Y)
{
    Complex A;
    A.real=Y.real+X;
    A.img=Y.img;
    return A;
}
Complex operator-(int h,Complex P)
{
    Complex A;
    A.real=h-P.real;
    A.img=P.img;
    return A;
}
Complex operator*(int j,Complex D)
{
    Complex N;
    N.real=D.real*j;
    N.img=D.img*j;
    return N;
}
int operator==(int l,Complex U)
{  
    if(U.real==l&&U.img==0)
        return 1;
    return 0;
}
int main()
{
    Complex c1,c2,c3,c4;
    int b;
    c1.setData(3,3);
    c2.setData(2,3);
    c3=c1+c2;     //c3=c1.operator+(c2);
    c3.showData();
    c3=c1+5;      //c3=c1.operator+(5);
    c3.showData();
    c3=6+c2;      //c3=operator+(6,c2);
    c3.showData();
    c4=c1-c2;     //c4=c1.operator-(c2);
    c4.showData();
    c4=5-c2;      //c4=operator-(5,c2);
    c4.showData();
    c4=c1-7;      //c4=c1.operator-(7);
    c4.showData();
    c4=c1*c2;     //c4=c1.operator*(c2);
    c4.showData();
    c4=3*c2;      //c4=operator*(3,c2);
    c4.showData();
    c4=c2*7;      //c4=c2.operator*(7);
    c4.showData();
    b=c1==c2;     //b=c1.operator==(c2);
    cout<<b<<endl;
    b=c1==4;      //b=c1.operator==(4);
    cout<<b<<endl;
    b=4==c1;      //b=operator==(4,c1);
    cout<<b<<endl;
    return 0;
}
