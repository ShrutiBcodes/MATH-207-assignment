//addition of two matrices
#include<iostream>
using namespace std;
int main (void)
{
    int mat1[2][2] = {{1,2},{3,4}};
     int mat2[2][2] = {{5,6},{7,8}};
     int sum[2][2];
     cout<<"Sum of two matrices is: "<<endl;
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}