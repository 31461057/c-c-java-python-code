#include <stdio.h>

int main(){
	
	int age = 18;
    printf("age = %d\n", age);//18原值 
	printf("age = %d\n", age++);//18,先執行再算 
	printf("age = %d\n", age);//19執行完 
	
	printf("age = %d\n", ++age);//20 先加再執行 
	printf("age = %d\n", age);//20 執行完 
		
	printf("age = %d\n", age);//20
	
	printf("age = %d\n", age--);//20,先執行後減 
	printf("age = %d\n", age);// 19 結果 
		
	printf("age = %d\n", -age);//18先減後執行 
	printf("age = %d\n", age);//18 結果 
	
	
return 0;	
}

