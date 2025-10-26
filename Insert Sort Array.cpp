#include <iostream>
using namespace std;

int main()
{
    int array[] = {3,7,10,4,6};
    int n = sizeof(array)/sizeof(array[0]);
    int key;
    int j;

    for(int i=1; i<n; i++){
        key = array[i];
        j = i-1;
        while(j>=0 && array[j]>key){
            array[j+1]= array[j];
            j=j-1;
        }
        array[j+1] = key;

    }

    for(int i=0; i<n; i++){
        cout << array[i] <<" ";
    }


    return 0;
}
