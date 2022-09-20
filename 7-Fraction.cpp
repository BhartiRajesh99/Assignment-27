#include<iostream>
using namespace std;
class Fraction
{
    private:
        long num,deno;
    public:
        Fraction()
        {
            num=0;
            deno=0;
        }
        friend istream& operator>>(istream&,Fraction&);
        friend ostream& operator<<(ostream&,Fraction);
        Fraction operator++()
        {
            Fraction U;
            U.num=++num;
            U.deno=++deno;
            return U;
        }
        Fraction operator++(int x)
        {
            Fraction U;
            U.num=num++;
            U.deno=deno++;
            return U;
        }
};
istream& operator>>(istream &S,Fraction &Y)
{
    cout<<"\nNumerator:";
    S>>Y.num;
    cout<<"Denominator:";
    S>>Y.deno;
    return S;
}
ostream& operator<<(ostream &A,Fraction M)
{
    A<<M.num<<"/"<<M.deno<<endl;
    return A;
}
int main()
{
    Fraction f1,f2;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f1;
    cout<<"Enter 1st fraction value:";
    cin>>f1;
    f1++;
    cout<<"f1++ : ";
    cout<<f1;
    ++f1;
    cout<<"++f1 : ";
    cout<<f1;
    cout<<"Enter 2nd fraction value:";
    cin>>f2;
    cout<<"f2=++f1 ";
    f2=++f1;
    cout<<"\nf1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    cout<<"f2=f1++ ";
    f2=f1++;
    cout<<"\nf1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    return 0;
}