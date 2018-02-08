
#include <stdio.h>

void main()
{
int a,b,z;

scanf("%d %d %d",&a,&b,&z);

if(a>b&&a>z){
printf("%d",a);
}else if(b>z&&b>a){
printf("%d",b);
}else {
printf("%d",z);
}
}
