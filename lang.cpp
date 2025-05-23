#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
string localizate[150];
void scrol() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsole,&csbi);
	csbi.dwSize.Y=20000;
	SetConsoleScreenBufferSize(hConsole,csbi.dwSize);
	for(int scrol0=20000; scrol0>0; --scrol0) {
	}
}
void gtxy(short int x,short  int y) {
	static HANDLE h = NULL;
	if(!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h,c);
}
string lo[5];
void start() {
system("title Language selection");
system("mode con cols=34 lines=8");
scrol();
SetConsoleCP(866); 
SetConsoleOutputCP(866);
scrol();
}
void dry(){
system("title Language selection");
system("mode con cols=34 lines=8");
	cout<<".______________________________.\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<".______________________________.";
	
}

void loc(){
string locate;
	fstream l("loc/loc.l");
	getline(l,locate);

	if(locate=="1") {
		fstream lo("loc/eng.l");
		for(int i=0; i<=100; i++) {
			getline(lo,localizate[i]);
		}
	}
	if(locate=="2") {
		fstream lo("loc/rus.l");
		//	locale loc("Russian");
		//setlocale (LC_ALL, "RUSSIAN");
		for(int i=0; i<=100; i++) {
			getline(lo,localizate[i]);
		}

	}
	if(locate=="4") {
		fstream lo("loc/serb.l");
		for(int i=0; i<=100; i++) {
			getline(lo,localizate[i]);
		}
	}
	if(locate=="3") {
		fstream lo("loc/bel.l");
		for(int i=0; i<=100; i++) {
			getline(lo,localizate[i]);
		}
	}
	if(locate=="5") {
		fstream lo("loc/spa.l");
		for(int i=0; i<=100; i++) {
			getline(lo,localizate[i]);
		}
	}
	if(locate=="6") {
		fstream lo("loc/ger.l");
		for(int i=0; i<=100; i++) {
			getline(lo,localizate[i]);
		}
	}
}
void l(){
system("title Language selection");
system("mode con cols=34 lines=8");
	cout<<".______________________________.\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<"|                              |\n";
	cout<<".______________________________.";
	gtxy(3,3);
	cout<<localizate[63];
	gtxy(3,4);
	cout<<localizate[64];

}
int main(){
loc();
start();
dry();
l();
Sleep(10000);
} 