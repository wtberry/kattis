#include <iostream>


void fizzBuzz(int fizz, int buzz, int n){
    for(int i=1; i < n+1; i++){
        if((i%fizz == 0)&&(i%buzz == 0)) std::cout << "FizzBuzz" << std::endl;
        else if(i%fizz == 0) std::cout << "Fizz" << std::endl;
        else if(i%buzz == 0) std::cout << "Buzz" << std::endl;
        else std::cout << i << std::endl;
        }
    }


int main(int argc, char**argv){
    int f, b, n;
    std::cin >> f >> b >> n;
    fizzBuzz(f, b, n);
    }



