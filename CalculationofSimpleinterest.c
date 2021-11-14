//Calculation
# include<stdio.h>
int main()
{ 
    int p,r,t;
    int si;
    printf("Enter the values");
    scanf("%d%d%d",&p,&r,&t);
    si=p*r*t/100;
    printf("%d",si);
    return 0;
}