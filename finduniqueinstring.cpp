//Implement an algorithm to determine if a string has all unique characters What if you can not use additional data structures?
/* 
	// procedure to determine if a string has all unique characters
	// this procedure for case sensitive string

		Step 1: checkUnique(arr); // define an function

				matched = 0; // define matched status 0. 0 stands for unique
				arr  // set array variable will contain string

		Step 2: 
			2.0 FOR X = 1 to till_null_of_strng // iterate till length of an array
			2.1 If found space then jusp to 2.0 step;
			2.2 FOR Y = 1 to till_null_of_strng 
			2.3 If x=y then jump to 2.2 step    // ignoring same inddexed value
			2.4 if arr[X]=arr[Y] then set matched=1  break;
			2.5 go to 2.3
			2.6 go to 2.2
		step 3: return matched=0
*/

#include<iostream>
using namespace std;

class findUnique {
	public: int strLength;
	public: findUnique(int charlength){
		strLength = charlength;
	}

	public: int checkUniqueNotCaseSence(char arr[]){
		int matched=0;
		for (int i = 0; i <=strLength; ++i)
		{
			if(arr[i]==32)
				continue;   //  ignoring spaces in string
			for (int j = 0; j <=strLength; ++j)
			{
				if(i==j)  // ignoring same position value in string  
					continue;
				else if(arr[i]==arr[j]) {  // if any charater will matched in any other place then it would be not unique string
					matched=1;
					break;
				}
			}
		}
		if(matched==1)
			return 1;
		return 0;

		// complexity of this function in worst case and best case would be n* 2(n)-n = 0(n 2) n Squre
	}

	public: int checkUniqueCaseSence(char arr[]){
		int matched=0;
		for (int i = 0; i <=strLength; ++i)
		{
			if(arr[i]==32)
				continue;   //  ignoring spaces in string
			for (int j = 0; j <=strLength; ++j)
			{
				if(i==j)  // ignoring same position value in string  
					continue;
				else if(arr[i]==arr[j]) {  // if any charater will matched in any other place then it would be not unique string
					matched=1;
					break;
				}
			}
		}
		if(matched==1)
			return 1;
		return 0;
		//complexity of this function in worst case and best case would be n* 2(n)-n = 0(n 2) n Squre
	}
};

int main(){
	// assigning value into string
	char arr[]="ajyp k d";
	int strLength = (sizeof(arr)/sizeof(*arr))-1; // getting size of string 
	findUnique fu(strLength);
	int a = fu.checkUniqueNotCaseSence(arr);
	if(a==1)
		cout <<"string is not unique";
	else 
		cout <<"string is unique";
 }