#include <stdio.h>

int main() {
    int a;
	int b;
	int c;

    printf("Enter 1st number: "); // a= 1, b= 2, c=3
    scanf("%d", &a);
    
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    printf("Enter 3rd number: ");
    scanf("%d",&c);

    if (a >= b && a >= c) {  // 1>=2 && 1>=3      && -> agar tera dono conditon true hai then wo niche wala code exicute karta hai
        printf("The greatest number is: %d\n", a);
    }
    else if (b >= a && b >= c) { //2>=1 && 2>=3 -> false conditon ...not satisfy
        printf("The greatest number is: %d\n", b);
    }
    else if (c>=a && c>=b) {   //true........
        printf("The greatest number is: %d\n", c);
    }else{
    			printf("invalid input");
	}
	

}
