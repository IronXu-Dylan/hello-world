#include <stdio.h>
main() {
	int n,c,num,i,j=0;
	scanf("%d",&n);
	for(c=0;c<n;c++) {
		scanf("%d",&num);
		i=num;
		while(i>0) {
			j=j*10+i%10;
			i=i/10;
		}
		if(j==num)
		printf("yes\n");
		else
		printf("no\n");
	j=0;
	}
	return 0;
} 
