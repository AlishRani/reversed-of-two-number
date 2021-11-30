#include<stdio.h>;
int main()
{ 
     int a;
     int b;
     printf("enetr an integer");
     scanf("%d",&a);
     printf("enetr another integer");
     scanf("%d",&b);
     temp=a;
     a=b;
     b=temp;
     printf("value is reverse a=%dand b=%d",a,b);
     return 0;
}