#include<stdio.h>
#include<stdlib.h>

void Cmp(int a[],int b[],int c[]){
///////////////////// I ADD //////////////////////////////////////////
    for (int i = 0; i < 10; i++)
    {
        c[i] = (a[i]>b[i]) ? a[i] : b[i];
    }
////////////////////////////////////////////////////////////////////////
}

void prt(int a[]){
    int i;
    for(i = 0; i< 10;i++){
        printf("%3d", a[i]);
    }
    printf("\n");
}

int main(){
    int i;
    int A[10], B[10], Max[10];
    for ( i = 0; i < 10; i++)
    {
        A[i] = rand() % 100;
        B[i] = rand() % 100;
    }

    printf("A Array = ");
    prt(A);// I ADD
    printf("B Array = ");
    prt(B);// I ADD
    Cmp(A,B,Max);// I ADD
    prt(Max);// I ADD
    
    return 0;
}