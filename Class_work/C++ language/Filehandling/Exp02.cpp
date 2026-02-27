#include<iostream>
#include<fstream>
#include <string>
using namespace std;

main(){
    //read content from file 
    ifstream file("cpp_file.txt");

    string line;

    while (getline(file,line))
    {
        cout<<line<<endl;
    }

    file.close();
    
}