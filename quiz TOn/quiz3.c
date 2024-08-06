#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void avg(int a[][6]){
    int i,j;
    int sum;

    for(i = 0 ; i < 3 ;i++){
        sum = 0;
        for(j = 0; j < 5; j++){
            sum+=a[i][j];
        }
        a[i][j] = sum;// I ADD
    }

    for(j = 0 ; j < 5 ; j++){
        sum = 0;
        for(i = 0 ; i<3; i++){
            sum += a[i][j];
        }
        a[i][j] = sum; // I ADD
    }
}

void prt(int a[][6]){
    int i,j;

    for(i = 0; i < 4; i++){
        for(j = 0 ; j < 6; j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}

void max(int s,int a[][6]){
    int i ,max = 0;

    for(i = 1; i < 5; i++){
        max = (a[s][i] > a[s][max]) ? i : max; // I ADD
    }
    printf("Subject %d’s highest score is %d of student %d.\n", s+1, a[s][max], max+1);
}

int main(){
    int arr[4][6] = { 0 };
    int i,j,sub;

    srand((unsigned)time(NULL));
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            arr[i][j] = rand() % 100;// I ADD
        }
    }

    avg(arr);
    prt(arr);
    printf(" Please enter the subject number you wish to check ");
    scanf("%d", &sub);
    max(sub-1,arr);

    return 0;
}
