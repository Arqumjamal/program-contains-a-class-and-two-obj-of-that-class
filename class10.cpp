#include <iostream>
using namespace std;


class part{
	
	
	private:
		int modelno;
		int partnumber;
		float cost;
		
		public:
			void  setpart(int a,int b, float c){
				
				modelno =  a;
				partnumber = b;
				cost = c;
				
			}
			void showpart(){
				
				
				cout<<"Model =:"<<modelno<<endl;
				cout<<"partnumber=:"<<partnumber<<endl;
				cout<<"cost=:"<<cost<<endl;
				
			}
			
};
int main(){
    part c1,c2,c3;
	c1.setpart(442,21,31);
	c2.setpart(322,323,42);
	c3.setpart(324,323,311);
	
	c1.showpart();
	c2.showpart();
	c3.showpart();
	
	return 0;
}