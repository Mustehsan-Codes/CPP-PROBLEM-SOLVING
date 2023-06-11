//C++ PROGRAM TO CALCULATE VARIANCE OF UNGROUPED DATA 
#include<iostream>
using namespace std;
float Variance(float*arr,int size){
	float mean = 0.0;
	int total = 0;
	float sum = 0.0;
	for (int i = 0; i <size; i++){
		sum = sum + arr[i];
		total++;
	}
	mean = sum / total;
	float variance = 0.0;
	for (int i = 0; i < size; i++){
		variance = (variance + ((arr[i] - mean) *(arr[i] - mean)));
	}
	variance = variance / total;
	cout << "Your data is  :  ";
	for (int i = 0; i < size; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
	return variance;
}
int main(){
	int size = 0;
	cout << "Enter how many data values you want to enter " << endl;
	cin >> size;
	float*arr = new float[size];
	cout << "ENter data \n";
	for (int i = 0; i < size; i++){
		cin >> arr[i];
	}
	cout << "Variance of your given data is  " << Variance(arr, size) << endl;
	delete[]arr;//delete array to avoid memory leakage 
	arr = nullptr;
	return 0;
}