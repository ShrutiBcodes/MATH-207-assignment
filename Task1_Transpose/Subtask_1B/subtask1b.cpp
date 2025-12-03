#include<iostream>
using namespace std;
int main (void)
{
    int mat[2][2] = {{1,2},{3,5}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          swap(mat[i][j],mat[j][i]);
        }
    }
    cout<<"Transpose of the matrix is: "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}