#include<iostream>
using namespace std;
class mystring
{
    private:
        char a[100];
        int i;
    public:
        mystring()
        {
            for(i=0;i<100;i++)
                a[i]='\0';
        }
        void input()
        {
            cout<<"Enter a string:";
            cin.getline(a,100);
        }
        void display()
        {
            cout<<a<<endl;
        }
        char* operator!()
        {
            for(i=0;i<100;i++)
                if(a[i]>='a'&&a[i]<='z')
                    a[i]=a[i]-32;
                else if(a[i]>='A'&&a[i]<='Z')
                    a[i]=a[i]+32;
            return a;
        }
};
int main()
{
    mystring m;
    char *C;
    m.input();
    m.display();
    C=!m;
    m.display();
    cout<<C;
    return 0;
}