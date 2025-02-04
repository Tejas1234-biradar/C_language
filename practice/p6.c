#include <stdio.h>
void inputMatrix(int a[10][10],int* c,int* r){
    printf("Enter the number of coloumns and rows\n");
    scanf("%d %d",c,r);
    for (int i = 0; i < *r; i++)
    {
        for (int j = 0; j < *c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void upperTriangular(int a[10][10],int c,int r,int trans[10][10]){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i>j){
                trans[i][j]=0; 
            }
            else{
                trans[i][j]=a[i][j];
            }
        }
    }
}
void lowerTriangular(int a[10][10],int c,int r,int trans[10][10]){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i<j){
                trans[i][j]=0;
            }
             else{
                trans[i][j]=a[i][j];
            }
        }
    }
}
void printMatrix(int a[10][10],int c,int r){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ",a[i][j]);
      }
        printf("\n");
    }
}
int main(){
    int r,c,upTrans[10][10],a[10][10],lowTrans[10][10];

    inputMatrix(a,&c,&r);
    upperTriangular(a,c,r,upTrans);
    lowerTriangular(a,c,r,lowTrans);
    printf("The upper triangular matrix is \n");    
    printMatrix(upTrans,c,r);
    printf("The lower triangular matrix is \n");
    printMatrix(lowTrans,c,r);
    return 0;
}