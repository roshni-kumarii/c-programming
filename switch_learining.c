// switch statements


/*
Syntax
switch (expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

*/

#include <stdio.h>

int main(){
	
	int expression=1;
	
	switch (expression){
		case 1:
			printf("hello i am using switch..");
			break; // 
		case 2:
			printf("hey naman ");
			break;
		default:
			printf("hey roshni ji");
	}
}

// jo case hai multiple times repeate ho skta hai..
// but jo -> default hai to ek hi hai..aur usme break use nahi ho rha hai..


// break karta kya hai??-> ab bhi koi case valid hai to  wo usko brake kar deta hai









