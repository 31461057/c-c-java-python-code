#include <stdio.h>

int main(){
	
	int age = 18;
    printf("age = %d\n", age);//18��� 
	printf("age = %d\n", age++);//18,������A�� 
	printf("age = %d\n", age);//19���槹 
	
	printf("age = %d\n", ++age);//20 ���[�A���� 
	printf("age = %d\n", age);//20 ���槹 
		
	printf("age = %d\n", age);//20
	
	printf("age = %d\n", age--);//20,�������� 
	printf("age = %d\n", age);// 19 ���G 
		
	printf("age = %d\n", -age);//18�������� 
	printf("age = %d\n", age);//18 ���G 
	
	
return 0;	
}

