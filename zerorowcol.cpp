/* Write an algorithm such that if an element in an MxN matrix is 0, its entire row and 
column is set to 0 */

/*
Step 1; 
 Declare variable array // n*m matrix array
                           n // no of row size 
 findZeroAndReplacerowcolwithZero(array,m,n);



*/


#include<iostream>
using namespace std;

void main(){

	int n;
	int m;

	cout<<"Please enter a total N (rows) of matrix ";
	if(cin>>n && n<=10){
		cout<<"Please enter a total M (cols) of matrix ";
		if(cin>>m && n<=10){
			// crating 2d array
			float** matrix=new float*[n];
			for (int i = 0; i < n; ++i)
			{
				matrix[i]=new float[m];
			}

			

		// checking all inputs is correct or incorrect
		bool inputStatus=true;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <m; ++j)
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
		}
			//cout<<"\n";

			
		if(inputStatus){
			// creating temp 2d array
			float** tempMatrix=new float*[n];
			for (int i = 0; i < n; ++i)
			{
				tempMatrix[i]=new float[m];
			}
			cout<<"\n Now the matrix format will be before rotating\n";
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					cout<<matrix[i][j];
					cout<<"  ";
				}
				cout<<"\n";
			}
 				
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j <m; ++j)
				{
					if(matrix[i][j]==0) {
						for (int k = 0; k < n; ++k)
						{
							tempMatrix[i][k]=0;					
						}
						for (int k = 0; k < m; ++k)
						{
							tempMatrix[k][j]=0;
						}
					}
					else {
						if(tempMatrix[i][j]!=0)
							tempMatrix[i][j]=matrix[i][j];
							//cout<<tempMatrix[i][j];
						}	
					}
					//cout<<"\n";
				}
				
				cout<<"\n";
				cout<<"\n Rotated matrix are below\n";
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j <m; ++j)
					{
						cout<<tempMatrix[i][j];
						cout<<" ";
					}
					cout<<"\n";
				}
			} else {
				cout<<"Only Integer or float values is allowed";	
			}
		} else {
			cout<<"Only Integer number is allowd or should not be more than 10";
		}		

	} else {
		cout<<"Only Integer number is allowd or should not be more than 10";
	}
}