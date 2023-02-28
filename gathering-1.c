#include<stdio.h>
int fact(int a){
	if(a==1 || a==0){
		return 1;
	}
	else if(a<0){
		printf("not possible ");
	}
	else{
		return a*fact(a-1);
	}
}


int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("%d",fact(a));
	return 0;
}
