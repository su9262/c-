# include <iostream>

using namespace std;

class cmath{
	private:
		int x,y;
	public:
		friend istream& operator>>(istream& os, cmath m){
			cout << "write x , y : ";
			cin >> m.x >> m.y;
			return os;
		}
		
		friend ostream& operator<<(ostream& os, cmath& m){
			cout << "x : "<<m.x <<" " << "y : "<< m.y<< endl;
			return os;
		}
};

int main(){
	int r = 5;
	cmath m;
	cin >> m;
	cout << m;
}
