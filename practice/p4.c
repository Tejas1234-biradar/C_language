#include<stdio.h>

void inputMatrix(int c,int r,int a[10][10]){
for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("Enter the elements of matrix: ");
            scanf("%d\n",&a[i][j]);
        }
        printf("\n");
    }
    
}
void displayMatrix(int c,int r,int a[10][10]){
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                printf("The matrix is %d\n",a[i][j]);
            }
            printf("\n");
        }
}
//requesting a reschedule for a presentation due to valid reasons
//writing to a professor to request a meeting regarding project guidnace

void addMatrix(int c,int r,int a[10][10],int b[10][10],int sum[10][10]){
    sum[10][10]=0;
    for (int i = 0; i < c; i++){
        for(int j=0;j<r;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    
    
}
void multiplyMatrix(int c,int r,int a[10][10],int b[10][10],int result[10][10]){
    result=0;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<r;k++)
            result[i][j]+=a[i][k]+b[k][j];
        }
    }
    
}
void transpose(int c,int r,int a[10][10],int trans[10][10]){
    trans=0;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            trans[j][i]=a[i][j];
        }
    }
}
int main()
{   int matrix1[10][10], matrix2[10][10],c,r,sum[10][10],result[10][10],choice,trans[10][10];
    printf("Enter the value of columns and rows\n");
    scanf("%d %d",&c,&r);
    
    while(1){
        printf("\n===MENU===\n");
        printf("1-Add 2 matrix\n");
        printf("2-Multiply the 2 matrices\n");
        printf("3-Find the transpose of given matrix\n");
        printf("4-exit the matrix ");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            inputMatrix(c,r,matrix1);
            inputMatrix(c,r,matrix2);
            addMatrix(c,r,matrix1,matrix2,sum);
            displayMatrix(c,r,sum);
            break;
        case 2:
           inputMatrix(c,r,matrix1);
            inputMatrix(c,r,matrix2);
            multiplyMatrix(c,r,matrix1,matrix2,result);
            displayMatrix(c,r,result);
            break;
        case 3:
            inputMatrix(c,r,matrix1);
            transpose(c,r,matrix1,trans);
            displayMatrix(c,r,trans);
            break;
        case 4:
            return 0;
        
         
        default:
            printf("ENter a valid number");
            break;
        }
    }
    
    return 0;
}

