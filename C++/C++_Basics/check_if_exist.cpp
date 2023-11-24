#include <iostream>
using namespace std;

int n=1;
int i;
int result;
//int nums[n]={};
int func (int n){
    int sum =0;
    for(int i=1; i<n; i++){
        if(i%3==0 || i%5==0|| i%7==0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int n=11;
    result = func(11);
    std::cout << result << std::endl;
    return 0;
}