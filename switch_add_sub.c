// question-> using switch case add and subtracte karo..

//add and subtarct ..
//humlog use kar rehe hai switch ..to kuchh yaad rakhna padta hai 
					// humlog ek choice dalna padta hai ya isko expression bol sakte hai
					
#include<stdio.h>
int main(){
	int num1=10,num2=20;
	int choice =3; // choice == expression
	
	switch (choice){
		case 1:
			printf("additon =%d",num1+num2);
			break;
		case 2:
			printf("substraction=%d",num1-num2);
			break;
		default:
			printf("invalid input");
	}
	
	
}
