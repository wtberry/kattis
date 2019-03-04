#include <iostream>

int main(int arge, char** argv){
    // read in the 2 int
    int x, y;
    int quad = 0; // storing which quadrant
    std::cin >> x;
    std::cin >> y;

    if((x*y) > 0){
        // 1st or 3rd
        if(x>0) quad = 1;
        else quad = 3;
    }
    else{
        if(x<0) quad = 2;
        else quad = 4;
    }

    std::cout << quad << std::endl;
}