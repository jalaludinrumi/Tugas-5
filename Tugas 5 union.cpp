#include <iostream>
using namespace std;

union data{
	int a;
	int b;
};

int main()
{
	data_data union;
	
	data_union.a=1;
	data_union.b=2;
	
	cout<<"data a: "<<data_union.a<<endl;
	cout<<"data b: "<<data_union.b<<endl;
	
	return 0;
}
