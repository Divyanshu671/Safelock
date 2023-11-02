#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[], int n, int i)  
{
    int largest = i;
    int l=i*2+1;
    int r=i*2+2;
    if(l<n && arr[largest]<arr[l])
        largest=l;
    if(r<n && arr[largest]<arr[r])
        largest=r;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void buildHeap(int arr[], int n)  
{ 
    for(int i=n/2-1;i>-1;i--){
        heapify(arr,n,i);
    }

}


void heapSort(int arr[], int n)
{
    buildHeap(arr,n);
    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}

void printArray(int arr[],int n){
    cout<<"Using Heap sort Sorted Array is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[10000],n,i;
    cout<<"Enter size of array : ";
    cin>>n;
    for(i=0;i<n;i++){
        arr[i]=rand()%100;
    }
    heapSort(arr,n);
    printArray(arr,n);
    return 0;
}