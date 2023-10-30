#include <stdio.h>

int main(void) {
  int a,b,r,q,cnt=0;
  scanf("%d%d",&a,&b);
  q=a/b;
  r=a%b;
  printf("%d.",q);
  while(r!=0){
    a=r*10;
    q=a/b;
    r=a%b;
    printf("%d",q);
    cnt++;
    if(cnt==10)
         break;
  }
  return 0;
}