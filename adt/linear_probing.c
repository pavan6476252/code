#include<stdio.h>
#include<stdlib.h>
#define size 10;
int arr[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int prob [10] ={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

void insert( );
void display();
void search();
void delete();

int main(){
	int choice;
	while(1){
		printf("1 .insert \n 2.display \n 3.search\n 4.exit\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 : insert();
			break;
			case 2 : display();
			break;
			case 3 : search();
			break;
			case 4: return 0;
		}
	}
	return 0;
	

}

 void  insert(){
	int num;
	printf("enter \n");
	scanf("%d",&num);
	int i=0;
	int hkey=0;
	while(1){
		if(i==10){
			printf("table full");
			return;
		}
	 hkey = (num + i)%size;
		if(arr[hkey]==-1){
			prob[hkey] = i;
			arr[hkey] = num;
			return;	
		}
		else{
			i++;
		}
	}
	
	
}

void display(){
	int i;
	printf("index  data  probs\n");
	for(i=0;i<10;i++){
		printf("%d\t%d\t%d \n" , i ,arr[i],prob[i]);
	}
}

void search(){
		int n,i=0;
	printf("ENTER NUMEBR FOR SEARCH\N");
	scanf("%d",&n);
	int hkey=0;
		while(1){
		if(i==10){
			printf("element no found");
			return;
		}
	 hkey = (n + i)%size;
		if(arr[hkey]==n){
			
			printf("element FOUND AT %d\n", hkey);
			return;	
		}
		else{
			i++;
		}
	}
}
void delete(){
	int n,i=0;
	printf("ENTER NUMEBR\N");
	scanf("%d",&n);
	int hkey=0;
		while(1){
		if(i==10){
			printf("element no found\n");
			return;
		}
	 hkey = (n + i)%size;
		if(arr[hkey]==n){
			arr[hkey]=-1;
				prob[hkey] = -1;
			printf("element deleted \n");
			return;	
		}
		else{
			i++;
		}
	}
	
}
