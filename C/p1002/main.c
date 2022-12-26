#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int n;
char answer[200],data[100],num[100][100]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void trans(int n)
{
    int i = 0,transarr[200];
    while(n > 0)
    {
        transarr[i] = n % 10;
        n = n/10;
        i++;
    }
    i--;
    for(; i >= 0 ; i--)
    {
        printf("%s",num[transarr[i]]);
        if(i!=0)printf(" ");
    }
}
void input()
{
    int count = 0,i=0;
    scanf("%s",&data);
    while(data[i]!='\0')
    {
        count += data[i] - '0';
        i++;
    }
    trans(count);
}
int main()
{
    input();
    return 0;
}
