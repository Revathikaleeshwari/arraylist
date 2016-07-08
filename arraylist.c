#include<stdio.h>
int main()
{
char a[10],b[10];
int c,d,e,f,g,h,i,j;
scanf("%s%s",a,b);
scanf("%d%d%d",&c,&d,&e);
printf("%s#%d#%d#%d\n",a,c,d,e);
scanf("%d%d%d",&f,&g,&h);
printf("%s#%d#%d#%d\n",b,f,g,h);
i=c+d+e;
j=f+g+h;
if(i>j)
{
printf("%s",a);
}
else if(j>1)
{
printf("%s",b);
}
else
printf("Both the marks are same\n");
return 0;
}
