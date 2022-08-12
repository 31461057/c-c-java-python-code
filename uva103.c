#include<stdio.h>
#include<math.h>
int main(){
	int maxcat,tallcat,leisure,i=1,split,k,power,splita,g,cat,j,totall;
	printf("enter how tall is maxcat?");
	scanf("%d",&maxcat);
	scanf("%d",&split);
	splita=split;
	cat=maxcat;
	
	k=0;
	if(split==1){
		i=1;
		while(maxcat>1){
			maxcat=maxcat/(i+1);
			k++;
		}
	}
	while(split>1){
		split=split/i;
		if(split==1){
			break;
		}
		i++;
	}
//5
	j=i;

	while(splita>1){
		splita=splita/i;
		k++;
	}
//	3
	for(g=1;g<k;g++){
		leisure=leisure+i;
		i=i*i;
	}
	i=j;
	
	leisure=leisure+1;
	totall=cat;
	
	for(g=1;g<=k;g++){
	cat=cat/(j+1);
	
	totall=totall+cat*i;
	i=i*j;
	}
		printf("%d,%d",leisure,totall);
} 
