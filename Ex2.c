#include<stdio.h>
int main(){
    char str[40];
    int remainder[32];
    int b,k,i,cnt=o;
    unsigned int a=-1;
    k=0;
    printf("Max value of unsigned int %u\n",a);
    while(a!=0){
        b=a/2;
        k++;
        reminder[k]=a-b*2;
        a=a/2;
    };
    for(i=k;i>1;i--){
        if(reminder[i]==1){
            cnt++;
        }
    }
    printf("Max bit of unsigned int %d\n",cnt);
    return 0;
    }
