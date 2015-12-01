#include<stdio.h>
int main(void)
{
	int x=2,i,sum=1;
	for(i=0;i<5;i++){
		sum*=x;
	}
	printf("%d\n",sum);
	return 0;
}