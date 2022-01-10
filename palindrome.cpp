#include<stdio.h>
#include<conio.h>

main(){
int num,orgNum,rem,res=0;
printf("Enter a three digit number:");
scanf("%d",&num);
orgNum=num;

while(orgNum!=0){
	rem=orgNum%10;
	res+=rem*rem*rem;
	
	orgNum= orgNum/10;
	
}

if(res==num){
	printf("%d is a Armstrong Number",num);
}
else{
	printf("%d is not a Armstrong Number",num);
}
	
}
