#include<stdio.h>
int prime(int);
void main(){
    int num,p;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    p = prime(num);
    if(p==1){
        printf("\n %d is prime",num);
    }else{
        printf("\n %d is not a prime",num);
    }
}
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
