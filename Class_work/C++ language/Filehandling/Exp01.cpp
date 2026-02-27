#include<iostream>
#include<fstream>
using namespace std;

main(){
    //open file and write something inside the  file 
    ofstream file("cpp_file.cpp");

    file<<"\n welcome to c++";
    file<<"\n file handling concept";

    file.close();
}