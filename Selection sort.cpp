#include <iostream>
using namespace std;

int main()
{
    int array[] = {12,23,17,11,19,30,29};
    int length = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i<length; i++){
        int min_index = i;

        for(int j = i; j<length; j++){
            if(array[min_index] > array[j]){
             swap(array[min_index],array[j]);
            }
        }
    }
    for(int i = 0; i<length; i++){
        cout<<array[i]<<" ";
    }


    return 0;
}
