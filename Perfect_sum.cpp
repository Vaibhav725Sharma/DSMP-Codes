#include <iostream>
using namespace std;

// globel variable
int count = 0;

int find(int arr[],int index,int n,int target)
{
  if(target ==0)
  return ++count;

  if(index==n)
  return 0;


  find( arr, index+1,n,target);
  find( arr, index+1,n,target - arr[index]);

  return count;

}

int main()
{
int arr[] ={2,5,0,6,1};
int target = 6;
cout<< find(arr,0,5,target) <<" ";
}