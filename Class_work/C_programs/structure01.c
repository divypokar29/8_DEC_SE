/*
structure is a user define data type wich is contain similer 
and dis-similer data elements

structure which is one kind of group which contain dissimiler data elements

array vs structure 

array can contain only similer data elements in single variable

at that time structure can contain  multiple elements of different data types in 
single variavlb

structure syntax :

structure which is represent by struct keywords

struct <structureName>
{
    datatype var;
    datatype var;
    .
    .
    .
}

*/


#include <stdio.h>
struct Student
{
	int id;
	int score;
}
main(){
struct Student s1;

s1.id = 101;
s1.score = 88;

printf("\n id = %d",s1.id);
printf("\n score =%d",s1.score);
}