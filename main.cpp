#include <iostream>
#include <array>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    array<int, 20> arr;

    arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for(auto& printNiz: arr){
        cout << printNiz << " ";
    }


    cout << endl;

    for(auto &element : arr){

        if(element % 3 == 0){
            element = element + 2;
        }

        if(element % 5 == 0){
            pow(element, 2);
        }

        if(element % 2 == 0){
            element =  element+ 10;
        }

        else{
            element = element;
        }

         cout << element << " ";
    }

    return 0;
}
