#include<stdio.h>

int pasTri[21][21];

void buildPascalTringle ()

{
    int i,j;
    for(i=0; i<21; i++)
    {
        for (j=0; j<=i; j++)
        {
            if (j==0 || i==j)
            pasTri[i][j]=1;
        else
            pasTri[i][j]= pasTri[i-1][j]+ pasTri[i-1][j-1];

        }
    }

}
int main()
{
    buildPascalTringle();
    int n,r,T,i;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d", &n,&r);
        printf("%d\n", pasTri[n][r]);
    }
    return 0;
}
