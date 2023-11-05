#include<iostream>
using namespace std;
class animal
{
	public:
	eat()
	{
		cout<<"Eating ..... ->";
	}
};
class dog : public animal
{
	public:
	eat()
	{
		cout<<"Dog Eating Bread ->";
	}
};
int main()
{
          cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	dog d=dog();
	d.eat();
	
	return 0;
}
