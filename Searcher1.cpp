#include <iostream>
using namespace std;

int linearSearchForLargest(int array[]); //function prototype

void printArray(int array[], int length){ //print an array
	for(int n=0; n<length; n++){ 
		cout << array[n] << endl;
	}
}

int main(){
	int myDataList[] = {12, 223, 232, 434, 1433, 0, -34, 14, 43, 544, 223}; //an array
	cout << "Here is the current data list: \n";
	printArray(myDataList, 11); //show the data list
	int biggest = linearSearchForLargest(myDataList); //assign largest number from array
	cout << "The largest number in this list is: " << biggest << endl;
	return 0;
}

int linearSearchForLargest(int array[]){ //Searches for largest number in array
	int largest=0; //need temporary value to compare numbers with array
	for(int n=0; n<11; n++){
		if(array[n]>largest){ //compare list to temp value
			largest=array[n];
		}
	}
	return largest;
}

