#include<iostream>
using namespace std;

int RecursiveBS(int arr[],int low,int high,int x ){

if(low>high){
    return -1;
}
else{
   int mid=(low+high)/2;

   if(x==arr[mid]){
    return mid;
   }
   else if(x>arr[mid]){
     return RecursiveBS(arr,mid+1,high,x);
   }
   else{
    return  RecursiveBS(arr,low,mid-1,x);
   }
}

}

int main(){
int arr[5]={2,3,4,10,40};
int targetElement=3;
int size=5;

int result=RecursiveBS(arr,0,size-1,targetElement);
cout<<"Index of target element is "<<result;

    return 0;
}
    

