//Mishree Kalaria
//24070123052
//Btach:A2 

#include <iostream>
#include <vector>

class SearchArray{
    public :
    int linearsearch(const std::vector<int>&arr, int target){
        for(size_t i = 0; i < arr.size(); ++i){
            //size_t is typedef of unsigned long long 
            if(arr[i] == target){
                return i;
            }
        }
        return -1;
    }
};
int main() {
    std::vector<int> data = {44,66,72,11,69,30};
    // Vector - dynamic array
    int target;
    std::cout<<"Enter a number to search :"<<"\t";
    std::cin>>target;
    
    SearchArray searcher;
    int index = searcher.linearsearch(data,target);
    
    if(index != -1){
        std::cout<<"Target "<<target<<" found at index :"<< index;
    }
    else{
        std::cout<<"Target not found!";
    }

    return 0;
}

/*
Enter a number to search : 69
Target 69 found at index :4
*/
