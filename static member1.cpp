#include <iostream>
#include <string>


using namespace std;

class Example{
	
	static int x;
	public:
		static int getstatic(){
			return 0;
		}
};
int Example::x=1;
int main(){
	Example a;
	cout<<a.getstatic();
}