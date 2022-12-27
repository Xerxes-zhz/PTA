#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool judge(int f, int m ,int b)
{
    if(f==b&&m==1)return true;
    if(f<0||b<0||m<0)return false;
    return judge(f,m-1,b-f);
}
void input()
{
    int n;
    char str[200];
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++)
    {
        scanf("%s",str);
        int len = strlen(str);
        bool flag = true, firstP = true, firstT = true;
        int j = 0,pp=0,tt=0;
        while(str[j]!='\0')
        {
            if(str[j]!='A'&&str[j]!='P'&&str[j]!='T')
            {
                flag = false;
                break;
            }
            if(str[j]=='P')
            {
                if(!firstP)
                {
                    flag = false;
                    break;
                }
                pp = j+1;
            }
             if(str[j]=='T')
            {
                if(!firstP)
                {
                    flag = false;
                    break;
                }
                tt = j+1;
            }
            j++;
        }
        int front = pp-1;
        int mid = tt - pp - 1;
        int behind = len - tt;
        if(flag&&judge(front,mid,behind))printf("YES\n");
        else printf("NO\n");
    }

}
int main()
{
    input();
    return 0;
}
