#include <iostream>
#include <vector>



int main(){

    int alo[100] = {11,22,33};

    for(int i = 0; i < 100; i++){
        //std::cout << alo[i];
    }

    //std::cout << "\n" << &alo << "/ " << alo[0];
    //std::cout << "\n" << *alo+1 <<"/ " << alo[1];


    std::cout << *alo << std::endl;
    std::cout << *alo+1 << std::endl;

    std::cout << &alo[0] << std::endl;
    std::cout << &alo[1] << std::endl;

    

    std::vector<int> vetor1 = {66,77,88};

    for(int i = 0; i < vetor1.size(); i++){
        std::cout << vetor1[i];
        vetor1.push_back(30);
    }
    
    return 0;
}