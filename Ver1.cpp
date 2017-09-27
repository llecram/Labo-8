#include <iostream>
using namespace std;
int multi(int **z, int len){
  int sum=0;
  for (int i=0;i<len;i++){
    for (int j=0;j<len;j++){
      sum=sum + z[i][j] * z[j][i];
    }
  }
  return sum;
}
int matA(int b;int len){
  **b=new int *[len];
  
}
int main() {
  // dimensions
  int N = 3;
  int M = 3;
 
  // dynamic allocation
  int **ary = new int *[N];
  for(int i = 0; i < N; ++i){
      ary[i] = new int[M];
  }
  // fill
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < M; ++j){
      ary[i][j] = i;
    }
  }
  // print
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < M; ++j){
      cout << ary[i][j];
    }
    cout<<"\n";
  }
  cout<<multi(ary,3);
  // free
  for(int i = 0; i < N; ++i){
    delete [] ary[i];
  delete [] ary;
  }
  return 0;
}
 
