#include<iostream>
#include<cstdio>
#include<cmath>
int power(int a,int b){
    if(b==0)
        return 1;
    if(b==1)
        return a%1337;
    if(b%2)
        return ((power(a,b/2)%1337)*(power(a,b/2)%1337)*(a%1337))%1337;
    return (power(a,b/2)%1337 * power(a,b/2)%1337)%1337;
}
int main(){
    std::cout<<power(2147483647,200)<<std::endl;
    return 0;
}
