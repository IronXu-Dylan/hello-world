#include<stdio.h>
int a(int n) {
	if(n>9)
	a(n/10);
    printf("%d ",n%10);
}
int main() {
	int n;
	scanf("%d",&n);
	a(n);
	return 0;
}
//15848 
//1584
//158
//15
//1
