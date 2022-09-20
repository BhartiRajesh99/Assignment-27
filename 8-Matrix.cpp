#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3],i,j;
    public:
        Matrix()
        {
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    a[i][j]=0;
        }
        void input()
        {
            cout<<"Enter Matrix Elements(3x3):\n";
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    cin>>a[i][j];
        }
        void display()
        {
            cout<<"Matrix is:\n";
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
        Matrix operator-()
        {
            Matrix V;
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    V.a[i][j]=-a[i][j];
            return V;
        }
};
int main()
{
    Matrix M,N;
    M.input();
    N=-M;
    N.display();
    return 0;
}