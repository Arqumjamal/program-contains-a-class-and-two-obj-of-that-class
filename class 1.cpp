#include <iostream>
using namespace std;


class    smallobj{
	private:
		int somedata;
		public:
			void setdata(int d){
			
			int setdata = d;
		}
		void showdata(){
			cout<<"Data is =:" <<somedata<<endl;
			
		}
			

};
int main(){
    smallobj  s1,s2;
    s1.setdata(56778);
    s2.setdata(6789);
    
    s1.showdata();
    s2.showdata();
    
    return 0;
}