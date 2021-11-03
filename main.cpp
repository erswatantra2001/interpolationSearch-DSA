#include<iostream>
#include<math.h>
using namespace std;

int interpolation(int *arr,int n,int key){
    int low = 0,high = n-1,pos;
    while(low <= high){
      pos = low+((key-arr[low])/(arr[high]-arr[low])*(high-low));
      if(arr[pos] == key){
        cout << "the position of finding element is " << pos << endl;
        break;
      }
      else if(arr[pos]<key){
        low = pos+1;
      }
      else{
        high = pos-1;
      }
    }
    return 0;
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    interpolation(arr,n,key);
    return 0;
}