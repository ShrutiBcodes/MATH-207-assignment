//multiplication
#include<iostream>
using namespace std;
int main (void)
{
    int mat1[2][3] = {{1,2,3},{4,5,6}};
    int mat2[3][2] = {{5,6},{7,8},{9,10}};
    int product[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            product[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                product[i][j] = product[i][j] + (mat1[i][k] * mat2[k][j]);
            }
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
}