#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int i, j, k, n, m;
float b[5][5], u[5][5], c[5], x[5];

//rank
n=4;

int a[4][4]={
	{1,3,1,-2,1},
	{2,4,-1,3,-5},
	{3,1,1,5,-2},
	{4,2,6,-1,9}
};

for(i=0;i<n;i++)
{
    b[i][0]=a[i][0];
}
for(j=1;j<n+1;j++)
{
    u[0][j]=(a[0][j]/b[0][0]);
}
for(m=1;m<n;m++)
{
    for(i=m;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
            a[i][m]=a[i][m]-b[i][k]*u[k][m];
        }
        b[i][m]=a[i][m];
    }
    for(j=m+1;j<n+1;j++)
    {
        for(k=0;k<m;k++)
        {
            a[m][j]=a[m][j]-b[m][k]*u[k][j];
        }
        u[m][j]=a[m][j]/b[m][m];
    }
}

for(k=0;k<n;k++)
{
    i=(n-k-1);
    x[i]=u[i][n];
    for(j=i+1;j<n;j++)
    {
        x[i]=x[i]-u[i][j]*x[j];
    }
}

printf("The solution is :\n");
for(i=0;i<n;i++)
{
    printf("x[%d] = %f \n",i,x[i]);
}

return 0;
}
