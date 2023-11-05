#include<iostream>
using namespace std;
class A
{
	public:
		

		void getdata()
		{
			cout<<"Class A";	
		}
};
class B
{		public :
		void putdata()
		{
			cout<<"Class B";
		}
};
class C : public B, public A
{
};
int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;

	C c;
	c.getdata();
	c.putdata();
	
	return 0;
		
}
