#include<stdio.h>

void main(){
	int ans=1;
	int base=3;
	int expo=4;
	while(expo!=0){
		ans=ans*base;
		expo--;
	}
	printf("%d\n",ans);
}

