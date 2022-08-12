#include<stdio.h>

int main(){
	int x,y,rx,ry,flag=3;
	char order[100],r[2],p;
	scanf("%d%d",&x,&y);
	scanf("%d%d%s",&rx,&ry,&r);
	
	
	while(flag==3){
	scanf("%s",&order);
	int d=r[0],scent=0,i;
	for(i=0;order[i];i++){
		if(order[i]=='F'){
			switch(d){
				case 'N':ry++;break;
				case 'E':rx++;break;
				case 'S':ry--;break;
				case 'W':rx--;break;
			}
		}
		else if(order[i]=='L'){
			switch(d){
				case 'N':d='W';break;
				case 'E':d='N';break;
				case 'S':d='E';break;
				case 'W':d='S';break;
			}
		}
		else{
			switch(d){
				case'N':d='E';break;
				case'E':d='S';break;
				case'S':d='W';break;
				case'W':d='N';break;
				}	
			}	
	if(rx<0||ry<0||ry>y||rx>x){
			switch(d){
				case 'N':ry--;break;
				case 'E':rx--;break;
				case 'S':ry++;break;
				case 'W':rx++;break;
				}
		if(p==1){
			continue;
		}
		else{
			scent=1;
			p=1;
			break;
		}	
			}
	
	}
	
	if(!scent){
		printf("%d%d%c",rx,ry,d);		
	}
	else{
		printf("%d%d%cLOST",rx,ry,d);
	}
}
	return 0;
}
