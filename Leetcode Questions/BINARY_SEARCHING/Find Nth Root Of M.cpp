#include <cmath>
int NthRoot(int n, int m) {
// Bruute Force Approach.
//  for(int i=0;i<=m;i++){
//    if(pow(i,n)==m){
//      return i;
//    }
//    else if(pow(i,n)>m){
//      break;
//    }
//  }
//  return -1;

//Binary search
int start=1;
int end=m;
while(start<=end){
  int mid=start+(end-start)/2;
  if(pow(mid,n)==m){
    return mid;
  }
  else if(pow(mid,n)>=m){
    end=mid-1;
  }
  else{
    start=mid+1;
  }
}
return -1;
}