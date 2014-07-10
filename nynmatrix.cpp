/*Given an image represented by an NxN matrix, where each pixel in the image is 4 
bytes, write a method to rotate the image by 90 degrees Can you do this in place?*/

#include<iostream>
using namespace std;

void main(){
	int n;
	cout<<"Please enter NxN matrix size(Only in integres):";
	if(cin>>n){
		// creating 2darray for NxN  matrix where user will enter value;
		float** matrix= new float*[n];
		for (int i = 0; i < n; ++i)
			matrix[i]=new float[n];
		

		// creating temp 2d array
		float** tempMatrix=new float*[n];
		for (int i = 0; i < n; ++i)
		{
			tempMatrix[i]=new float[n];
		}

		// checking all inputs is correct or incorrect
		bool inputStatus=true;

		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <n; ++j)
			{
				cout<<"\nEnter a value for position matrix["<<i<<"]["<<j<<"] ";
				if(cin>>matrix[i][j]) {
					//cout<<matrix[i][j];
					//cout<<"  ";	
				} else {
					inputStatus=false;
					break;
				}
			}
			if(!inputStatus)
				break;
			//cout<<"\n";
		}

		if(inputStatus){
			cout<<"\n Now the matrix format will be before rotating\n";
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cout<<matrix[i][j];
					cout<<"  ";
				}
				cout<<"\n";
			}

 			cout<<"\n";
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j <n; ++j)
				{
					tempMatrix[i][j]=matrix[(n-1)-j][i];
				}
			}
			cout<<"\n";
			cout<<"\n After rorating 90 degree in right side matrix format will be\n";
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j <n; ++j)
				{
					cout<<tempMatrix[i][j];
					cout<<" ";
				}
				cout<<"\n";
			}
		} else
			cout<<"\nPlease enter only integer or float nunbers.";
	} else 
		cout<<"\nPlease enter only integers  numbers."; 
}


/*
Teast Case: 1 	Please enter NxN matrix size(Only in integres): a
				Please enter only integers numbers

	  Case  2   Please enter NxN matrix size(Only in integres) 2
	  			Enter a value for position matrix[0][0] = 10.5
	  			Enter a value for position matrix[0][1] = 10
	  			Enter a value for position matrix[1][0] = a

	  			Please enter only integer or float nunbers.

	  Case  2   Please enter NxN matrix size(Only in integres) 2
	  			Enter a value for position matrix[0][0] = 10.5
	  			Enter a value for position matrix[0][1] = 10
	  			Enter- a value for position matrix[1][0] = 20.5
	  			Enter a value for position matrix[1][1] = 20

				Now the matrix format will be before rotating
				10.5    10
				20.5	20

				After rorating 90 degree in right side matrix format will be

				20.5   10.5
				20     10

*/