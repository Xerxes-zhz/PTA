#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int n,num[1100],judge[11000];

void calc(int n)
{
    int count = 0;
    while(n != 1)
    {
        if(n%2 == 1)n=(3*n+1)/2;
        else n=n/2;
        if(judge[n]==1)break;
        else judge[n] = 1;

    }

}
void input()
{
    scanf("%d", &n);
    for(int i=1;i<=n ; i++)
    {
        scanf("%d",&num[i]);
        judge[num[i]] = -1;
    }

}
void output()
{
    for(int i=1;i<=100 ; i++)
    {
        if(judge[i]==-1)
            calc(i);
    }
    bool flag = true;
    for(int i=100;i>=1 ; i--)
    {

        if(judge[i]==-1&&!flag)
            printf(" %d",i);
        else if(judge[i]==-1&&flag)
            printf("%d",i),flag = false;
    }


}
void pre()
{
    for(int i=1;i<=100 ; i++)
    {
        judge[i] = 0;
    }
}
int main()
{
    pre();
    input();
    output();
    return 0;
}
