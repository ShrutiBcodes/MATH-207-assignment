//skew symmetric
#include<iostream>
using namespace std;
int main (void)
{
    int a,b;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>a>>b;
    if(a!=b)
    {
        cout<<"Matrix is not skew symmetric as it is not a square matrix."<<endl;
    }
    else
    {
        int mat[a][b];
        cout<<"Enter the elements of the matrix: "<<endl;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin>>mat[i][j];
            }
        }
        bool skewSymmetric = true;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(mat[i][j] != -mat[j][i])
            {
                    skewSymmetric = false;
                    break;
            }
            }
        }
        if(skewSymmetric)
        {
            cout<<"Matrix is skew-symmetric."<<endl;
        }
        else 
        {
            cout<<"Matrix is not skew-symmetric."<<endl;
        }
        }
        

    return 0;
}