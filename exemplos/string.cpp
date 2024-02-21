#include <string>
#include <iostream>
using namespace std;


string adicionarstring(string word1, string word2){

    string word3 = word1 + word2;

    return word3;

}


int main(){

    string alo = "muito";
    string word2 = "bom";



    cout << alo + word2 << "\n";
    cout << adicionarstring("kasjdksa", "ashdjaskj");


    return 0;
}