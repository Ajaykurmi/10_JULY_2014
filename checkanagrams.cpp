/* 5.Write a method to decide if two strings are anagrams or not  */
#include<iostream>
using namespace std;

class checkAnagrams{
	
	public: checkAnagrams(){
	}
	/* function return status of is string anagrm or not*/
	public: bool findAnagram(char *arr1,char *arr2) {

			int i = 0;
			
			arr1=doSoryArrayUsingSelection(arr1);			
			//printf("%s\n",arr1 );
			//exit(0);
			
			arr2=doSoryArrayUsingSelection(arr2);
			//printf("%s\n",arr2 );
			//exit(0);
			for (i = 0; arr1[i]!='\0'; ++i)
			{
				//cout<<arr1[i];
				//cout<<"\n";
				if(arr1[i]!=arr2[i]) {	
					return false;
				}
			}
		
		return true;
	} 

	// sorting an array using selection sort
	public: char* doSoryArrayUsingSelection(char *arr){
		char back;
		for (int i = 0; arr[i]!='\0'; ++i)
		{
			if(arr[i]>=65 && arr[i]<=90)
				arr[i]+=32;
			
			for (int j = i+1; arr[j]!='\0'; ++j)
			{	
				if(arr[j]>=65 && arr[j]<=90)
					arr[j]+=32;

				if(arr[i]>arr[j]) {
					back=arr[i];
					arr[i]=arr[j];
					arr[j]=back;
				}	
			}

		}
		return arr;
	}
	
};

int main(){
	//char arr1[] = "AJAYkkk";
	cout<<"Here we are going to check anagrams\n\n";
	char * arr1 = (char *) malloc (sizeof (char)*100); 
	cout<<"Please enter first string for checking anagrams\n";
	
	cin>>arr1;
	char * arr2 = (char *) malloc (sizeof (char)*100); 
	
	
	cout<<"Please enter second string for checking anagrams\n";
	
	cin>>arr2;
	
	
	checkAnagrams anagrams;
	if(anagrams.findAnagram(arr1,arr2))
		cout<<"Strings are anagrams";
	else
		cout<<"Strings are not anagrams";
}

/* 
Test Cases 1
run: checkanagrams.exe
Here you are going to check anagrams

Please enter first string for checking anagrams
ajayKurmmi

Please enter second string for checking anagrams
Kurmiajay

Strings are anagrams

Test Cases 2
run: checkanagrams.exe
Here you are going to check anagrams

Please enter first string for checking anagrams
ajayKurmmi1111@@@@

Please enter second string for checking anagrams
Kurmiajay@@@@1111

Strings are anagrams

Test Cases 3
run: checkanagrams.exe
Here you are going to check anagrams

Please enter first string for checking anagrams
ajayKurmmiPatel

Please enter second string for checking anagrams
KurmiajaySingh

Strings are not anagrams

*/