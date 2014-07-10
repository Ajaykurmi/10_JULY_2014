// program to find minimum and maximam no in given 1 to 100 numbers

/* in this class we will declare all possible method for finding min/max numbers according to its complexity wise */
#include<iostream>
using namespace std;

class findMinMax {
public:
	int min;
public:
	int max;
private:
	int arraSize;
private: 
	int arr[];
	public:  findMinMax(int size){
		arraSize = size;
		min=0;
		max=0;
	}
	// method to find minimam and maximam in given array
public:
	int* linearSearchMethod(arr[]){
		int valArr[2];
		 if(arraSize==0) { // doing one comparison
		 	min=0;
		 	max=0;
		 } else if((arraSize+1)==1) { // doing one comparision
		 	min=arr[0];
		 	max=arr[1];
		 }  else {
		 	
		 	for (int i = 0; i <=arraSize; ++i)
		 	{
		 		if(arr[i]>max)                   // this statement is doing n comparison for assending order list, it will called best case.
		 			max=arr[i];            
		 		else if(arr[i]<min){			// this state will run everytime when list is desending. it will called worst case.
		 			min=arr[i];
		 		}
		 	}
		 }
		 valArr[0]=min;
		 valArr[1]=max;
		 return valArr;
		 // total comparison required 1+n: This is best case if list is assending
		 // total comparison required 1+2n: this is worst case
	}

};

int main(){
	int arr[] = {8,10,4,5,6,0,4,15,8,19,25,7,78,87,3,400};
	int arraySize = (sizeof(arr)/sizeof(*arr))-1; // getting size of arra
	findMinMax minMaxLinear(arraySize);
	int *a= minMaxLinear.linearSearchMethod(arr);
	cout<<"Linear Algo Result\n";
	cout<<"Min=";
	cout<< a[0];
	cout<<"\nMax=";
	cout<< a[1];
	cout<"\n";
}