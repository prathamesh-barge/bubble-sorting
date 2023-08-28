#include<iostream>
using namespace std;

int main(){
	
	cout<<" insertion sort"<<endl;
  	int a[10];
  	int size;
  	cout<<"enter the size of array"<<endl;
  	cin>>size;
  	cout<<"enter the "<<size<<" elements"<<endl;
  	for(int i=0;i<size;i++){
  		cin>>a[i];
	  }
  	
	  cout<<" the array entered is "<<endl;
	  
	  
	  for(int i=0;i<size;i++){
  		cout<<a[i]<<" ";
	
}cout<<endl<<endl;
	
	for(int i=1;i<size;i++){
		// storing current value at i inside a temp variable
		int temp =a[i];
		// stating loop of index from 0ith index
		int j=i-1;
		//
		while(j>=0 && a[j]>temp){
			// giving the value of  j to j+1
			a[j+1]=a[j];
			j--;
			
		}// end of while loop
		
		// giving the value of temp variable to j+1 
      	
		  a[j+1]=temp;	
		
	}//end of for loop
	
		  cout<<" the array sorted is "<<endl;
	  
	  
	  for(int i=0;i<size;i++){
  		cout<<a[i]<<" ";
}

}
