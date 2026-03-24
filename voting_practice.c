// question -> using if else write a program that below 18 not eligible for vote and above 18 elegele for vote

// use if else 
// vote process kya hai??? -> 18 below not eligible for vote
						//-> 18 ablove eligible...
						
//jaha if else waha conditions aa jata ..

//coonditions...
// 1. 18 below -> 18>input
// 2. 18 above -> 18<input

// input?? -> jo hum user input dalenge ...terminal me

#include<stdio.h>
int main()
{
	int age;
	
	printf("enter your age:");
	scanf("%d",&age);
	
	//coneditions lagarana hai
	
	if(age<18){
		printf("not eligible for voting");
	}
	else{
		printf("eligible for voting");
	}
}
