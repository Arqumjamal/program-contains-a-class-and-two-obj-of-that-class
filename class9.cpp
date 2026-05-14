#include  <iostream>
using namespace std;

class car{
	
	
	private:
		
		int  a;
		int  b;
		
		public:
			void   somedata(int a,int d)
			{
				a =43;
				b =489;
				
			}
			
			void showdata(){
				
				cout<<"Data of a is a =:"<<a<<b<<endl;
				
			}
		
};
int main(){
	
	car c1,c2;
	
	c1.somedata(88,484);
	c2.somedata(77,7474);
	
	c1.showdata();
	c2.showdata();
	
	return 0;
}