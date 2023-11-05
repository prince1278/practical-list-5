#include<iostream>
using namespace std;
class A 
{
	public :
	A(){
	cout<<"This is Class A ->"<<endl;
	}
};
class B
{
	public:
	
	B(){
	cout<<"This is Class B ->"<<endl;
	}
};

class C : public B, public A{};


int main()
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	C c;

	
	return 0;
}
