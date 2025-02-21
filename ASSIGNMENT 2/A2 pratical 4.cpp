#include<stdio.h>
int main ()
{ 
    int a,b;
	printf("enter the number 1 :");
	scanf("%d",&a);
	
	printf("enter the number 2 :");
	scanf("%d",&b);
	
	// Relational operators
    printf("RELATIONAL OPERATOR\n");
    
    printf("a == b: %d\n", a == b);  
    printf("a != b: %d\n", a != b);  
    printf("a > b: %d\n", a > b);    
    printf("a < b: %d\n", a < b);    

    // Logical operators
    printf("LOGICAL OPERATOR\n");
    
    printf("a > 0 && b > 0: %d\n", (a > 0 && b > 0)); 
    printf("a > 0 || b > 0: %d\n", (a > 0 || b > 0));  
    printf("!(a == b): %d\n", !(a == b));  
    
	// Arihmetic Operator	
	printf("ARITHMETIC\n");
	
	printf("a + b : %d\n",a+b);
	printf("a - b : %d\n",a-b);
	printf("a * b : %d\n",a*b);
	printf("a % b : %d\n",a%b);
	printf("a / b : %d\n",a/b);
  }
