#include<iostream>
using namespace std;
void mvt();
void mft();

int main(){
	mft();
	return 1;
}


void mft(){
	int tot_mem;
	cout<<"enter total memory"<<endl;
	cin>>tot_mem;
	int os, par_size;
	cout<<"enter os size"<<endl;
	cin>>os;
	tot_mem -=os;
	cout<<"enter partation size"<<endl;
	cin>>par_size;
	int no_parti = tot_mem / par_size;
	int mft[no_parti];
	int mft_mem[no_parti];
	for(int i=0;i<no_parti;i++)
	
	{
		int temp;
		cout<<"enter process size "<<i+1<<endl;
		cin>>temp;
		mft_mem[i]=temp;
		if(temp<=par_size){
			
			mft[i] = par_size-temp;
		}
		else{
			mft[i]=-1;
		}
	}
	 
	cout<<"process no\t memory \t framentation"<<endl;
	for(int i=0;i<no_parti;i++)
	{                          
	if(mft[i]==-1){
		cout<<i+1<<"\t\t "<<mft_mem[i]<< "\t\t-----"<<endl;
	}else
	
		cout<<i+1<<"\t\t "<<mft_mem[i]<<"\t\t" <<mft[i]<<endl;
}
	int tot_ex_frag=0;
	for(int i=0;i<no_parti;i++){
		tot_ex_frag += mft[i];
		
	}
	cout<<"total external fragmentation is :" <<tot_ex_frag<<endl;
}

void mvt(){
		int memory_size;
	int os_size;
	int size;
	int pro_count;
	cout<<"enter total memory size"<<endl;
	cin>>memory_size;
	cout<<"enter os size"<<endl;
	cin>>os_size;
	memory_size -=os_size;
	cout<<"enter no.of processes"<<endl;
	cin>>pro_count;
	int processes[pro_count];
	for(int i=0;i<pro_count;i++){
		cout<<"Enter process" <<i+1<<" Memoery size"<<endl;
		cin>>processes[i];
		if(memory_size >= processes[i])
		memory_size -=size;
		else{
		
		cout<<"page "<<i+1<< " is not allocaterd due to insufficient memory"<<endl;	
		break;
	}
}
	cout<<"external fragmentation "<<memory_size<<endl;

}
