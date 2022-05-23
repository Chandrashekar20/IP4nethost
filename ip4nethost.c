#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char a[20];
   int n[4],i=0,ch;
   printf("Enter the ipv4 Address\n");
   scanf("%s",a);
   char *num;
   num=strtok(a,".");
   while(num!=NULL)
    {
     n[i]=atoi(num);
     i++;
     num=strtok(NULL,".");
    }
    for(i=0;i<4;i++)
  {
    if((n[i]>=0&&n[i]<256)!=1)
     ch=4;
     break;
   }

   if(n[0]>=0&&n[0]<128)
   { ch=1;}
   else
   {  if(n[0]>=128&&n[0]<192)
      { ch=2;  }
      else
      {  if(n[0]>=192&&n[0]<224)
         { ch=3; }
         else
         { ch=4; }

      }
   }
   switch(ch)
   {
     case 1: printf("Class A\nNetwork ID: %d.0.0.0\nHost ID: 0.%d.%d.%d\n",n[0],n[1],n[2],n[3]);
             break;
     case 2:  printf("Class B\nNetwork ID: %d.%d.0.0\nHost ID: 0.0.%d.%d\n",n[0],n[1],n[2],n[3]);
             break;
     case 3:  printf("Class C\nNetwork ID: %d.%d.%d.0\nHost ID: 0.0.0.%d\n",n[0],n[1],n[2],n[3]);
             break;
     case 4: printf("Enter a valid input\n");
             break;
   }
   return 0;
