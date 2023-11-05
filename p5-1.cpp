#include<iostream> 
using namespace std;
class A{
	public:
		A()
		{
			cout<<"This is Class A :) "<<endl;
		}
};
class B : public A{
	public:
		B(){
			cout<<"This is Class B";
		}
};
int main()
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	
	B obj;
}
