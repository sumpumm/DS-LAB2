#include<stdio.h>
#include<conio.h>
#define M 3
#define N 3
int main(){
    int a[M][N],b[M][N],c[M][N],i,j,k,s;
    printf("Enter first 3*3 boolean matrix");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second 3*3 boolean matrix");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            c[i][j]=a[i][j]||b[i][j];
        }
    }
    printf("The Joint Matrix is:\n");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            for(k=0;k<=1;k++){
                s=s||a[i][k]||b[i][j];
            }
        c[i][j]=s;
            s=0;
        }
    }
    printf("The product matrix:");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d",c[i][j]);
        }
    }
    return 0;
}
