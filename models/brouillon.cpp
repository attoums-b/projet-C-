#include <cstdlib>
#include<algorithm>
#include <ctime>
#include <iostream>
using namespace std;

int main(){
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNum =  rand() % 101;

    cout << randomNum;
    return 0;


}


