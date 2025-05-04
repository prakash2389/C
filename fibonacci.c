#include <iostream>
using namespace std;

int fibonacci(int n){
    int m=1;
    for (int j = 1; j <= n; j++){
	    m=m*j;
    }
	return m;
}

int main(){
  for (int i = 1; i < 10; i++) {
    cout <<  i << " : " << fibonacci(i) << "\n";
  }
 }
