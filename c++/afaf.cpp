# include <iostream>
# include <fstream>
using namespace std;

void read_file(){
	string m;
	
	ifstream ifs;
	ifs.open("my.txt");
	while(getline(ifs,m)){
		cout << m << endl;
	}
}

void write_file(){
	ofstream f("my.txt");
	f << "Andong" << endl;
	f << "National" << endl;
	f << "Univ" << endl;
}

int main(){
	write_file();
	read_file();
}
