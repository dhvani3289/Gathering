#include<stdio.h>
int sum(int a[],int n){
	int i,sum=0;
	for(i=0; i<n; i++){
	   sum=sum+a[i];
	}
     return sum;
}
main(){
	int i,n;

	printf("Enter the size of an array : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++){
		printf("The value of[%d] : ",i);
	    scanf("%d",&a[i]);
	}
 
   printf("sum of all array elements : %d", sum(a,n));
}
	
