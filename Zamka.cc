#include <iostream>

int digit_sum(int n){
    int digit_sum = 0;
    for(int i = 10000; i>0; i=i/10){
        int left_digit = n/i;
        digit_sum += left_digit;
        n = n%i;
    }
    return digit_sum;
}

int main(int arge, char** argv){
    /**
     * @input: L > D > X
     * @Find min N and max M such that L < N/M < D && sum of digits N/M == X
    **/
    // get input
    int L, D, X;
    int n, m;
    # if 1
    std::cin >> L; 
    std::cin >> D; 
    std::cin >> X; 
    # endif
    // get the value between L and D
    // start with N, minimum
        for(int i=L; i<=D; i++){
            //std::cout << "i, digit_sum: " << i << ", " << digit_sum(i) << std::endl;
            if(digit_sum(i)==X){
                n = i; 
                break;
            }
        }
        // for M
        for(int i=D; i>=L; i--){
            if(digit_sum(i)==X){
                m = i;
                break;
            }
        }

    std::cout << n << std::endl;
    std::cout << m << std::endl;

}