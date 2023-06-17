#include <iostream>
using namespace std;
const int Row=10;
const int Col=10;

add(int arr1[][Col], int arr2[][Col], int result[][Col],
 int row,int col){
 	for(int i=0; i<row; i++){
 		for(int j=0; j<col; j++){
 			result[i][j]= arr1[i][j]+arr2[i][j];
		 }
	 }
 }
 
 sub(int arr1[][Col], int arr2[][Col], int result[][Col],
 int row,int col){
 	for(int i=0; i<row; i++){
 		for(int j=0; j<col; j++){
 			result[i][j]= arr1[i][j]-arr2[i][j];
		 }
	 }
 }
 
 mul(int arr1[][Col], int arr2[][Col], int result[][Col],
 int row,int col){
 	for(int i=0; i<row; i++){
 		for(int j=0; j<col; j++){
 			result[i][j]= arr1[i][j] * arr2[i][j];
		 }
	 }
 }
 
 display(int arr[][Col], int row, int col){
 	for(int i=0; i<row; i++){
 		for(int j=0; j<col; j++){
 		cout<<arr[i][j]<<"    ";
		 }
		 cout<<endl;
	 }
	 cout<<endl;
 }

int main(){
	int arr1[Row][Col];
	int arr2[Row][Col];
	int result[Row][Col];
	int row,col;
	cout<<"Enter number of rows: ";
	cin>>row;
	cout<<"Enter number of columns: ";
	cin>>col;
	//initilizing arr1
	cout<<"Enter elements for array 1"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
cout<<"Enter element for ["<<i<<"]["<<j<<"]: ";
cin>>arr1[i][j];
		}
	}
	
		//initilizing arr2
		cout<<endl;
	cout<<"Enter elements of array 2"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
cout<<"Enter element for ["<<i<<"]["<<j<<"]: ";
cin>>arr2[i][j];
		}
	}
	cout<<"Array 1"<<endl;
	display(arr1,row,col);
	
	cout<<"Array 2"<<endl;
	display(arr2,row,col);
	
	cout<<"Addition of arrays"<<endl;
	add(arr1,arr2,result,row,col);
	display(result,row,col);
	
	cout<<"Substraction of arrays"<<endl;
	sub(arr1,arr2,result,row,col);
	display(result,row,col);
	
	cout<<"Multiplication of arrays"<<endl;
	mul(arr1,arr2,result,row,col);
	display(result,row,col);
			
}//main
