#include<stdio.h>
void main(){
    int m1,m2,m3,m4,m5,total, avg;
    printf("enter marks");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
       avg=total/5;
    printf("%d%d",total, avg);
    if(avg>90)
        printf("o");
    else if(avg<=90&&avg>=85)
    printf("a");
        else if(avg<85&&avg>=75)
                printf("b");
        else if(avg<75&&avg>=60)
         printf("c");
         else if(avg<60&&avg>=35)
                 printf("d");
        else
                 printf("fail");
}