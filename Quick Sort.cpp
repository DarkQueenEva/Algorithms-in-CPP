#include <iostream>
using namespace std;

int partition(int array[],int low,int high){
int pivot = array[high];
int i = low-1;

for(int j = low; j<=high-1; j++){
if(array[j]<pivot){
i++;
swap(array[i],array[j]);
}
}
swap(array[i+1], array[high]);
return i+1;
}
void quicksort(int array[], int low , int high){
if(low<high){
int pi = partition(array,low,high);
quicksort(array,low,pi-1);
quicksort(array,pi+1,high);
}
}
int main(){
int array[] = {12,15,13,10,19,18,9};
int length = sizeof(array)/sizeof(array[0]);
quicksort(array,0,length-1);

for(int i = 0; i<length; i++){

cout <<array[i]<<" ";
}

return 0;
}
