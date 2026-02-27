#include<iostream>
using namespace std;
class Sample
{
    private:
       int score = 100; // provste member 

    public : 
       friend void displayscore(Sample obj); // method declareation only

};
void displayscore(Sample obj)
{
    cout<<"\n score = "<<obj.score;
}
main()
{
	Sample obj=Sample();
    displayscore(obj);
}
