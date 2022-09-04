#include <stdio.h>
int main()
{scanf("%d %d",time,minutes);
int time=0,minutes=0;

int A=time/100;
int B=time%100;
int C=A*60+B;
int D=C+minutes;
int E=D/60;
int F=E%60;
int G=E*60+F;
printf ("%d",G);

return 0;
}
