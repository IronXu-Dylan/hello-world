#include <stdio.h>
int main() {
	int day,month,year,num,n,c;
	scanf("%d",&n);
	for(c=0;c<n;c++) {
		scanf("%d %d %d",&year,&month,&day);
		switch(month) {
			case 1:num=0;break;
			case 2:num=31;break;
			case 3:num=59;break;
			case 4:num=90;break;
			case 5:num=120;break;
			case 6:num=151;break;
			case 7:num=181;break;
			case 8:num=212;break;
			case 9:num=243;break;
			case 10:num=273;break;
			case 11:num=304;break;
			case 12:num=334;break;
		}
		num=num+day;
		if(((year%4==0&&year%100!=0)||year%400==0)&&month>2)
		num+=1;
		printf("%d\n",num);
	}
}
