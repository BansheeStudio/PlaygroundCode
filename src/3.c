#include <stdio.h>
int main()
{
	double age;
	char name[50];
	printf("what is your name: ");
	scanf("%s",name);
	printf("what is your age: ");
	scanf("%lf",&age);
	printf("so your name is %s & your age is %1.0lf years old",name,age);
	return 0;
}
