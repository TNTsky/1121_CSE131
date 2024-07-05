#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//==========================================================================================================================

int** newMTX(int m,int n)
{
    // int newmtx[3][3];
    int **newmtx = (int**)malloc(sizeof(int*)*m);
    int i,j;
    
    for (i=0;i<m;i++)
    {
        newmtx[i] = (int*)malloc(sizeof(int)*n);
        for (j=0;j<n;j++) {newmtx[i][j]=0;}
    }

    return newmtx;
}

int** randMTX(int m,int n)
{
    int **newmtx = newMTX(m,n);
    int i,j;

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++) {newmtx[i][j]=rand()%50+1;}
    }

    return newmtx;
}

//==========================================================================================================================

int **Addition(int **A,int **B,int m,int n,int c1,int c2)
{
    int **M = newMTX(m,n);
    int i,j;

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            M[i][j]=A[i][j]*c1+B[i][j]*c2;
        }
    }

    return M;
}

int **Multiplication(int **A,int **B,int n)
{
    int **M = newMTX(n,n);
    int i,j,k;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            for (k=0;k<n;k++)
            {
                M[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    return M;
}

//==========================================================================================================================

void show(int **mtx,int m,int n)
{
    int i,j;

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++) {printf("%d ",mtx[i][j]);}
        printf("\n");
    }
    printf("\n");

    return;
}

int main()
{
    srand(time(NULL));

    int **A = randMTX(3,3);
    int **B = randMTX(3,3);

    show(A,3,3);
    show(B,3,3);
    
    show(Addition(A,B,3,3,1,1),3,3);
    show(Addition(A,B,3,3,1,-1),3,3);
    show(Multiplication(A,B,3),3,3);
}
