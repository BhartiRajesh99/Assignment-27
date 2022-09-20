#include<iostream>
#include<stdlib.h>
#include<strings.h>
using namespace std;
class CString
{
    private:
        char a[100],c[200];
        int i,j;
    public:
        CString()
        {
            i=0;j=0;
            for(i=0;i<100;i++)
                a[i]='\0';
            for(i=0;i<200;i++)
                a[i]='\0';
        }
        void input()
        {
            cout<<"Enter a string:";
            cin.getline(a,100);
        }
        void display()
        {
            cout<<a;
        }
        char* operator+(CString L)
        {
            for(i=0;a[i];i++)
            {
                c[i]=a[i];
            }
            for(j=0;L.a[j];j++)
            {
                c[j+i]=L.a[j];
            }
            c[i+j]='\0';
            return c;
        }
        int operator==(CString h)
        {
            return strcmp(a,h.a);
        }
};
int main()
{
    CString A,B;
    char *C;
    int d;
    A.input();
    B.input();
    C=A+B;
    cout<<C<<endl;
    d=(A==B);
    if(d==0)
        cout<<"string are equal";
    else if(d==1)
        cout<<"non dictionary order";
    else
        cout<<"dictionary order";
    return 0;
}
