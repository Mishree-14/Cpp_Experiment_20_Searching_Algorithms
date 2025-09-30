//Mishree Kalaria
//24070123052
//Batch:A2 

#include <iostream>

int main() {
    int target;
    int array[6] = {2,6,9,33,11,86};
    std::cout<<"Enter a number for search :"<<"\t";
    std::cin>>target;
    
    for(int i = 0; i < 6 ; i++){
        if(array[i] == target){
            std::cout<<"Number found at "<<i<<" index."<<std::endl;
            exit(0);
        }
        else{
            continue;
        }
    }
    
    std::cout<<"Number not found!";
    

    return 0;
}
/*
Enter a number for search : 11
Number found at 4 index.
*/
