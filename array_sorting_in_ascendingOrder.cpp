//Method 1:- 
// Using STL in C++

 void sortArr(int arr[], int n){
    sort(arr,arr+n);
    }

//Method -2
int sort_array(int arr[],int n){
    for(int i = 0;i<n;i++){

            for(int j =0;j<n-i-1;j++){

                if(arr[j]>arr[j+1]){

                    int temp = arr[j];

                    arr[j]=arr[j+1];

                    arr[j+1]=temp;
                }
            }
    }
}



                

            

          

        
