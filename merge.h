
/****************************Print function********************************************/
/*
void print(int arr[], int size) {
    for (int i = 0; i < size;i++) {         //print until size i is equal to or greater than size
        cout << arr[i] << " ";
    }//for()

}//print()

/// /////////////////////////////merge sort///////////////////////////////////////////
void merge(int arr[], int left, int midd, int right) {// merge the sorted arrays together

    int i, j, k;
    i = 0;
    j = 0;
    k = left;

    int n1 = midd - (left + 1);
    int n2 = right - midd;

    int* L_arr = new int[n1];
    int* R_arr = new int[n2];

    for (int i = 0; i < n1; i++)
        L_arr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R_arr[j] = arr[midd + 1 + j];


    // Until reach end, pick larger among
    // elements L and R and place them in the correct position
    while (i < n1 && j < n2) {
        if (L_arr[i] <= R_arr[j]) {
            arr[k] = L_arr[i];
            i++;
        }//if()
        else {
            arr[k] = R_arr[j];
            j++;
        }//else
        k++;
    }//while()
    while (i < n1) {
        arr[k] = L_arr[i];
        i++;
        k++;
    }//while(i)
    while (j < n2) {
        arr[k] = R_arr[j];
        j++;
        k++;
    }//while(j)
    
}//merge()
void mergesort(int arr[], int left, int right) {        //devide and sort two sides of array
    if (left < right) {
        int split = (left + right) / 2;          //split arr in two
        mergesort(arr, left, split);                    //sort left side recursivly
        mergesort(arr, split + 1, right);               //sort right side recursively

        merge(arr, left, split, right);                 //merge the arrays together
    }
}//Mergesort()
/////////////////////////////////main funct///////////////////////////////////////////
int main() {
    

    cout << endl << "Array prior to being sorted" << endl;

    int arr[] = { 7,6,8,9,2,5,3,4,1,15,68,96 };         //create array for merge sort
    int size = sizeof(arr) / sizeof(arr[0]);

    print(arr, size);                                   //show array pre sort, sort, show aray post sort
    mergesort(arr, 0, size - 1);                         //insert array, left index, right index
    cout << endl << "Sorted array using merge sort " << endl;
    print(arr, size);


    return 0;
}//main()
*/
