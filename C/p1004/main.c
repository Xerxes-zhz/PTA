#include <stdio.h>
#include <stdlib.h>
int n;
int max = -1,min = 2147483647;
struct student
{
    char name[100];
    char id[100];
    int point;
}stu[200];
void input()
{
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        scanf("%s %s %d",&stu[i].name,&stu[i].id,&stu[i].point);
        if(stu[i].point > max)max=stu[i].point;
        if(stu[i].point < min)min=stu[i].point;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(stu[i].point == max)
            printf("%s %s\n",stu[i].name,stu[i].id);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(stu[i].point == min)
            printf("%s %s\n",stu[i].name,stu[i].id);
    }
}
int main()
{

    input();
    return 0;
}
