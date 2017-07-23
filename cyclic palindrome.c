#include<stdio.h>
#include<string.h>
int main() {
  char a[100],temp,t;
  int l,i,c=0;
  gets(a);
 l=strlen(a);
 temp=a[0];
 a[0]=a[l-1];
  for(i=1;i<l;i++)
  {
      t=a[i];
      a[i]=temp;
      temp=t;
      
  }
  for(i=0;i<=l-1;i++)
  {
      if(a[i]==a[l-1-i])
      {
          c++;
      }
  }
  if(c==l)
  {
      printf("1");
  }
  else
  {
      printf("-1");
  }
}
