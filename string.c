#include<stdio.h>
void main()
{
int d;
int a = 5;
int b = 6;
c = a+b; //this change is for branch1
a = c-a; //this change is for branch1
d = c-b; //to check the merge conflict
printf("%d", c);
}
