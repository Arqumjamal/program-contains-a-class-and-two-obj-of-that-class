#include <iostream>
#include <string>
using namespace std;

class Example{
	static int x;
	public:
		static int getstatic()
		{
		return x;
			
		}
};
int Example::x=2;
int main(){
	Example a;
	cout<<a.getstatic();
	}

