#include <iostream>
#include <vector>

int main(int argc,char**argv){
    std::vector<int> s1={1,2,3};   
    for (auto x : s1){
        std::cout<<x<<std::endl;
    } 
    return 0;
}