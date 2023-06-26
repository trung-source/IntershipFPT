#include <iostream>
using namespace std;


int part(int arr[], int start, int end)
{
    int pivot = arr[end];
 
    int count = 0;
    for (int i = end-1 ; i >= start; i--) {
        if (arr[i] > pivot)
            count++;
    }
 
    int index = end - count;
    swap(arr[index], arr[end]);
 

    int i = start, j = end;
    while (i < index && j > index) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < index && j > index) {
            swap(arr[i], arr[j]);
            i++;
			j++;
        }
    }
    return index;
}



 
void quickSort(int arr[], int start, int end)
{
  
    if (start >= end)
        return;
    int i = part(arr, start, end);
    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}

int main()
{	
 int arr[25] = {1,4,5,6,7,89,4,3,5,6,7,8,3,2,1,9,7,12,3,4,5,6,67,-1,-25};
quickSort(arr,0,24);

for(int i =0;i<25;i++){
	cout << arr[i] << " ";
}


return 0;
	
}
