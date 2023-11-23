#include<stdio.h>
int main()
{
    int t,s,b,capacity,capacityKB;
    scanf("%d%d%d",&t,&s,&b);
    capacity=t*s*b*512;
    capacityKB=capacity/512;
    printf("%d KB",capacityKB);
}