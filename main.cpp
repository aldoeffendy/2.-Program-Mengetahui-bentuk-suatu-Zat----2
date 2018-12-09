#include <iostream>

using namespace std;

int main(){
	int a;

	cout<<"\nPROGRAM UNTUK MENGETAHUI BENTUK SUATU ZAT"<<endl;

	cout<<"Masukan Suhu dalam derajat celcius = ";
	cin>>a;
	if (a<0)
		cout<<"suhu "<<a<<" Zat dalam wujud Beku";
	else
		cout<<"Suhu "<<a<<" Zat dalam wujud tidak beku";
	return 0;
}
