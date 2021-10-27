#include<iostream>
#include<vector>
using namespace std;

//this function sorts and merges two arrays 
void merge( int start, int mid, int end, vector<int> &nums){
	int i = start, j = mid+1;
	vector<int> temp;
	int k = 0;
	while( i <= mid && j <= end){
		if(nums[i] < nums[j]){
			temp.push_back(nums[i++]);
		}
		else{
			temp.push_back(nums[j++]);
		}
	}
	while(i <= mid){
		temp.push_back(nums[i++]);
	}
	while(j <= end){
		temp.push_back(nums[j++]);
	}
	for(int i = start; i <= end; i++){
		int n = temp[k++];
		nums[i] = n;
	}
}
//this function divides the array and passed it to merge function to sort and merge 
void mergeSort(int start, int end, vector<int> &nums){
	if(start < end){
		int mid = (start + end) / 2;	
		mergeSort(start, mid, nums);
		mergeSort(mid+1, end, nums);
		merge(start,mid, end, nums);
	}
}
//main 
int main(){
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	vector<int> nums;
	cout<<"Enter array elements : "<<endl;
	for(int i = 0; i < size; i++){
		int n;
		cin>>n;
		nums.push_back(n);
	}
	mergeSort(0, size-1,nums);
	cout<<"Sorted array is "<<endl;
	for(int i = 0; i < size; i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}
//
//Time complexity : O( N * log(N) )
//
