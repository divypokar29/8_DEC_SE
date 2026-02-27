/*
Getter and Setter methods 

now, setter method which accept arguments and getter method return arguments 
*/
#include<iostream>
using namespace std;
class Student
{
	private:
		int id;
		string name;
		int marks;
		
	public:
		void setId(int id)
		{
			this->id = id;
		}
		int getId()
		{
			return id;
		}
		void setName(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return name;
		}
		void setMarks(int marks)
		{
			this->marks = marks;
		}
		int getMarks()
		{
			return marks;
		}
		
};
main()
{
	Student student=Student();
	student.setName("AAA");
	
	cout<<student.getName();
	
	cout<<"\n\n";
	
	student.setMarks(89);
	cout<<student.getMarks();
}