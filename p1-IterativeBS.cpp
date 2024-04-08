#include<iostream>
using namespace std;

int main(){
int arr[5]={2,3,4,10,40};
int targetElement=3;
int size=5;

int low=0;
int high=size-1;

while(low<=high){

       int mid=(low+high)/2;

       if(arr[mid]==targetElement) {
        cout<<"Index of target element is "<<mid;
        break;
       }
  
  if(arr[mid]<targetElement){
    low=mid+1;
  }
  else {
    high=mid-1;
  }



}

    return 0;
}