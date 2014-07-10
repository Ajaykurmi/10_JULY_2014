/*
6 question: Return a list containing only one copy of any duplicates in an input list, with items in the output in the same order as their first
appearance in the input.

Your task is to answer the interview question given above; you must provide at least two different solutions.
*/
#include<iostream>
using namespace std;
class duplicateCopy
{
public:
	//duplicateCopy();
	//~duplicateCopy();
	int maxLength;
	duplicateCopy(int maxVal) {
		maxLength=maxVal;
	}

	char* getDuplilcateCopy1(char* str){
		char *dynamic;
		int counter=0;
		int repeatCount=0;
		bool notExists=true;
		dynamic = new char[maxLength];
		
		for (int i = 0; str[i]!='\0'; ++i)
		{
			for (int j = i+1; str[j]!='\0'; ++j)
			{
				if(str[i]==str[j]) {
					repeatCount++;
					break;
				}
			}
			if(repeatCount>0) {
				for (int k = 0; k<counter; ++k)
				{
					if(str[i]==dynamic[k]) {
						notExists=false;
						break;
					}		
				}
				if(notExists) {
					//cout<<"in cond";
					dynamic[counter]= str[i];
					counter++;
				} 
				notExists= true;
				repeatCount=0;
			}
		}
		dynamic[counter]= '\0';
		return dynamic;
	}
};

void main(){
	//char str[] = "ajaysinghkurmipaitel";
	int numners;
	
	cout<<"How much string, you want to check duplicate charaters(Enter in integer)=";
	if(cin>>numners){
		duplicateCopy dc(100);
		for (int i = 0; i < numners; ++i)
		{
			char *str= new char[dc.maxLength];
			cout<<"Please enter string "<<i+1<<" to find characters duplicate copy:";
			cin>>str;
			char* value=dc.getDuplilcateCopy1(str);
			if(*value=='\0')
				cout<<"Duplicate character not found";
			else
			printf("\nDuplicated charaters are: %s\n", value);
		}	
	
	} else {
		cin.clear();
		cout<<"Wrong input provided! Please Enter only integer again\n\n";
		
	}
}

/*
Test Case 1
Output:
How much string, you want to check duplicate charaters(Enter in integer)=2 (Press Enter)
Please enter string 1 to find characters duplicate copy:ajay (Press Enter)
Duplicated charaters are:a

Please enter string 2 to find characters duplicate copy:kurmi (Press Enter)
Duplicate character not found

Test Case 2
output:
How much string, you want to check duplicate charaters(Enter in integer)=a (Press Enter)

Wrong input provided! Please Enter only integer again

*/