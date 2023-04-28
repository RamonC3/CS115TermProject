/*
void insertionSort(int arr[], int n){
     int i, key, j;
     for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }//while
        arr[j + 1] = key;
    }//for
}//insertionSort

void printArray(int arr[], int n){
     int i;
     for (i = 0; i < n; i++)
        cout << arr[i] << " ";
     cout << endl;
}//printArray

//my driver code
/*
int main(){
    int arr[] = { 6,2,8,3,4,58,96,12,45 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting... "<<endl;
    printArray(arr,N);
    cout << "After Sorting..." << endl;
    insertionSort(arr, N);
    printArray(arr, N);

    return 0;
}//main
*/*/
