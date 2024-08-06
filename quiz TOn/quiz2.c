#include<stdio.h>
#define size 10

void prt(int a[],int n){///// I ADD PARAMITER//////
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int eql(int a[],int b[], int n){
///////////////////// I ADD //////////////////////////////////////////
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i])return 0;
    }
///////////////////////////////////////////////////////////////////////
    return 1;
}

void cpy(int a[],int b[],int n){
    int i;
    for(i = 0;i < n;i++){
        b[i] = a[i];
    }
}

int main(){
    int arr1[size] = {0,1,2,3,4,5};
    int arr2[size] = {0,1,2,3,4,5};
    int arr3[size] = { 0 };

    prt(arr1 , size);
    prt(arr2 , size);
    prt(arr3 , size);

    if(eql(arr1,arr2,size)){// I ADD
        printf("equal\n");
    }else{
        printf("different\n");
    }

    cpy(arr1,arr3,size);// I ADD
    prt(arr3,size);
    
    return 0;
}