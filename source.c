
#include <stdio.h>
int * arr;
int fib(int n1,int n2){
    int temp = n1 + n2;
    return temp;
}
int run(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else{
        if(arr[n]!=NULL){return arr[n];}
        return fib(run(n-1),run(n-2));
    }
}
int main()
{
    int size;
    scanf("%d",&size);
    arr = (int*) malloc(sizeof(int) * size);
    for(int i =0;i<size;i++){
        int temp = run(i);
        printf("fib of  %d =  %d\n",i,temp);
        arr[i] = temp;
    }
    return 0;
}
