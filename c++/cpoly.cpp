#include <iostream>
using namespace std;

template <typename T>
class CPoly {
	protected:
		T w,h;
	public:
		CPoly(T _w = 0, T _h = 0){w = _w; h = _h;}
		
		virtual T area(){}
		friend ostream& operator << (ostream& os, CPoly& me){
			os << me.area() << endl;
			return os;
		}
		
};

template <typename T>
class CRect : public CPoly<T> {
	public:
		CRect(int _w = 0, int _h = 0){this->w = _w;	this->h = _h;}	
		T area(){	return this->w * this->h;	}
		
};

template <typename T>
class CTri : public CPoly<T> {
	public:
		CTri(int _w = 0, int _h = 0){this->w = _w;	this->h = _h;}	
		T area(){	return this->w * this->h / 2;	}
};

template <typename T>
class CCir : public CPoly<T> {
	public:
		CCir(int _r = 0){this->w = this->h = _r;}	
		T area(){	return this->w * this->w * 3.14;	}
};

int main(){
	CRect<int> rect(2,2);
	CTri<double> tri(2,2);
	CCir<double> cir(2);
	
	cout << rect;
	cout << tri;
	cout << cir;
	return 0;
}


