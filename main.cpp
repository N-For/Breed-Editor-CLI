#include <iostream>
#include <dir.h>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <direct.h>

using namespace std;


int brk=0;

string locate;
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

HWND consoleWindow = GetConsoleWindow();

enum ConsoleColor {
Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray,
DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
 
void setColor(unsigned fg, unsigned bg) {
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, (WORD)((bg << 4) | fg)); 
}

void start() {

	system("title Breed editor for MOWAS2                                                                                 Powered by NFOR");
	system("mode con cols=120 lines=40");
	scrol();
//	setlocale(LC_ALL,"RUS");
}
void animat(){


	gtxy(45,32);
int l=0;
int l_u=0;
int k3;
int k2;
int ix=0;
int ix0=0;
while(l_u<=100){
	ix0=1+rand()% 11;
	ix=ix+ix0;
gtxy(45,32);
k2=10 +rand()%50;
Sleep(k2);
k3=1+rand()%2;
l=l+k3;
//cout<<k2<<"   k3= "<<k3<<"  l_u ="<<l_u<<"  ";
if(ix>=10&&ix<20){
gtxy(45,31);
setColor(Green,Blue);
cout<<"#";
setColor(White,Black);
}
if(ix>=20&&ix<30){
gtxy(45,31);
setColor(Green,Blue);
cout<<"##";
setColor(White,Black);
}
if(ix>=30&&ix<40){
gtxy(45,31);
setColor(Green,Blue);
cout<<"###";
setColor(White,Black);
}
if(ix>=50&&ix<60){
gtxy(45,31);
setColor(Green,Blue);
cout<<"####";
setColor(White,Black);
}
if(ix>=60&&ix<70){
gtxy(45,31);
setColor(Green,Blue);
cout<<"#####";
setColor(White,Black);
}
if(ix>=70&&ix<80){
gtxy(45,31);
setColor(Green,Blue);
cout<<"######";
setColor(White,Black);
}
if(ix>=80&&ix<90){
gtxy(45,31);
setColor(Green,Blue);
cout<<"#######";
setColor(White,Black);
}
if(ix>=90&&ix<100){
gtxy(45,31);
setColor(Green,Blue);
cout<<"########";
setColor(White,Black);
}
if(ix==100){
gtxy(45,31);
setColor(Green,Blue);
cout<<"#########";
setColor(White,Black);
}
//
if(l_u>=10&&l_u<20){
gtxy(45,32);
setColor(White,Black);
cout<<"#";
}
if(l_u>=20&&l_u<30){
gtxy(45,32);
setColor(White,Black);
cout<<"##";
}
if(l_u>=30&&l_u<40){
gtxy(45,32);
setColor(White,Black);
cout<<"###";
}
if(l_u>=50&&l_u<60){
gtxy(45,32);
setColor(White,Black);
cout<<"####";
}
if(l_u>=60&&l_u<70){
gtxy(45,32);
setColor(White,Black);
cout<<"#####";
}
if(l_u>=70&&l_u<80){
gtxy(45,32);
setColor(White,Black);
cout<<"######";
}
if(l_u>=80&&l_u<90){
gtxy(45,32);
setColor(White,Black);
cout<<"#######";
}
if(l_u>=90&&l_u<100){
gtxy(45,32);
setColor(White,Black);
cout<<"########";
}
if(l_u==100){
gtxy(45,32);
setColor(White,Black);
cout<<"#########";
}
////

//
/*
if(l_u>=10&&l_u<20){
setColor(Green,Blue);
cout<<"#";
setColor(White,Black);
}*/
l_u=l_u+k3;
if(l_u<100&&ix>=100){
ix=0;
gtxy(45,31);
cout<<"                    ";
}if(l_u>=100){
ix=100;
}
gtxy(57,32);
cout<<l_u<<" % ";
gtxy(57,31);
cout<<ix<<" % ";

}
gtxy(45,31);
cout<<"                  ";
gtxy(45,32);
cout<<"                  ";
}
string bd;
void dray() {
	

	cout<<"  v1.48";
	cout<<"\n#####################################################################################################################\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                                                   #\n";
	cout<<"#                                                                                         Powered by PM / Nfor      #\n";
	cout<<"#                                                                                         November Update 2024      #\n";
	cout<<"#####################################################################################################################\n";
	gtxy(45,0);
	cout<<"Breed editor for MOWAS2";
	gtxy(50,36);

}
int ver;
string localizate[1000];
void debug(int d) {
	fstream b("loc/build.b");
	getline(b,bd);
	ver=atoi(bd.c_str());
	if(d==1||d==2) {
		ver++;
	}
	if(d==2) {
		mkdir("build");
 		string bd0="build\\"+bd;
		mkdir(bd0.c_str());
		string bd1=bd0+"\\main.exe";
		string bd2="xcopy main.exe "+bd1;
		system(bd2.c_str());
		
		string bd3=bd0+"\\main.cpp";
		string bd4="xcopy main.cpp "+bd3;
		system(bd4.c_str());	
	}
	b.close();
	ofstream c("loc/build.b");
	c<<ver;
	c.close();
	system("cls");
}
void loc() {

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
	if(locate=="7") {
		fstream lo("loc/ita.l");
		for(int i=0; i<=100; i++) {
			getline(lo,localizate[i]);
		}
	}
}

int l;
int del=0;//удаление папок
int  posy=0;
int  posx=1;
int model=1;

void temp() {
	mkdir("res");
	ofstream lib("res/output.set");
	lib<<"{breed"<<endl;
	lib<<"\t{behaviour soldier}"<<endl;
	lib<<"\t{skin \"rus_partizan3\"}"<<endl;
	lib<<"\t{portrait eng_elite1}"<<endl;
	lib<<"\t{icon_priority 0}"<<endl;
	lib<<"\t{nationality eng}"<<endl;
	lib<<"\t{armors"<<endl;
	lib<<"\t\t{head cap1_usa}"<<endl;
	lib<<"\t}"<<endl;
	lib<<"\t{perks"<<endl;
	lib<<"\t\t{\"health\" \"225%\"}"<<endl;
	lib<<"\t\t{\"rifle\" lvl_3}"<<endl;
	lib<<"\t\t{\"health_regeneration\" \"75%\"}"<<endl;
	lib<<"\t}"<<endl;
	lib<<"\t{veterancy"<<endl;
	lib<<"\t\t{\"lvl_1\" 10}"<<endl;
	lib<<"\t\t{\"lvl_2\" 20}"<<endl;
	lib<<"\t\t{\"lvl_3\" 30}"<<endl;
	lib<<"\t\t{\"lvl_4\" 40}"<<endl;
	lib<<"\t\t{\"lvl_5\" 50}"<<endl;
	lib<<"\t}"<<endl;
	lib<<"\{inventory"<<endl;
	lib<<"\t\t{item \"rifle ammo\" 70}"<<endl;
	lib<<"\t}"<<endl;
	lib<<"}"<<endl;
}
void clr(int ox, int oy) {
	gtxy(ox,oy);
	cout<<"  ";
}
string ciN(int ox, int oy,string &text) {
	gtxy(ox,oy);
	cin>>text;
	return text;
}
string lib[40];
void build() {
	mkdir("res");
	fstream read("res/edit/pt.b");
	string rd[1000];
	int d1=0;
	while(rd[d1]!="//stop") {
		d1++;
		getline(read,rd[d1]);
		gtxy(0,0);
	}
	d1--;

	ofstream pro("res/edit/pt.b");
	for(int i=1; i<=d1; i++) {
//if(i==0){
//pro<<rd[i];
//}else{
//pro<<endl<<rd[i];
//}
		pro<<rd[i]<<endl;

	}
	pro<<lib[0]+".set";
	pro<<endl<<"//stop";
pro.close();

	string put="res/"+lib[0]+".set";
	ofstream i(put);


	i<<"{breed"<<endl;
	i<<"\t{behaviour "+lib[1]+"}"<<endl;
	if(lib[2]=="y") {
		i<<"\t{hero}"<<endl;
	}
	i<<"\t{skin \""+lib[3]+"\"}"<<endl;
	i<<"\t{portrait "+lib[4]+"}"<<endl;

	i<<"\t{icon "+lib[5]+"}"<<endl;
	i<<"\t{icon_priority 0}"<<endl;

	i<<"\t{tags \""+lib[6]+"\"}"<<endl;
	i<<"\t{nationality "+lib[7]+"}"<<endl;

	i<<"\t{voice "+lib[7]+"}"<<endl;
	i<<"\t{armors"<<endl;

	i<<"\t\t{head  "+lib[8]+"}"<<endl;
	i<<"\t}"<<endl;

	i<<"\t{perks"<<endl;
	i<<"\t\t{\"rifle\" lvl_"<<lib[9]<<"}"<<endl;

	i<<"\t\t{\"speed\" "<<lib[10]<<"}"<<endl;
	i<<"\t\t{\"melee\" lvl_"<<lib[11]<<"}"<<endl;

	i<<"\t\t{\"pistol\" lvl_"<<lib[12]<<"}"<<endl;
	i<<"\t\t{\"stamina\" \""<<lib[13]<<"%\""<<"}"<<endl;

	i<<"\t\t{\"health\" \""<<lib[14]<<"%"<<"\"}"<<endl;
	i<<"\t\t{\"smg\" lvl_"<<lib[15]<<"}"<<endl;

	i<<"\t\t{\"mgun\" lvl_"<<lib[16]<<"}"<<endl;
	i<<"\t\t{\"rocketlauncher\" lvl_"<<lib[17]<<"}"<<endl;

	i<<"\t\t{\"stamina_regeneration\" \""<<lib[18]<<"%"<<"\"}"<<endl;
	i<<"\t\t{\"at_rifle\" lvl_"<<lib[19]<<"}"<<endl;
	i<<"\t\t{\"health_regeneration \""<<lib[27]<<"%\" }"<<endl;
	i<<"\t}"<<endl;

	i<<"\t{veterancy"<<endl;
	i<<"\t\t{\"lvl_1\" "<<lib[20]<<"}"<<endl;
	i<<"\t\t{\"lvl_2\" "<<lib[21]<<"}"<<endl;
	i<<"\t\t{\"lvl_3\" "<<lib[22]<<"}"<<endl;
	i<<"\t\t{\"lvl_4\" "<<lib[23]<<"}"<<endl;
	i<<"\t\t{\"lvl_5\" "<<lib[24]<<"}"<<endl;
	i<<"\t}"<<endl;

	i<<"\t{inventory"<<endl;
	i<<"\t\t{item \""<<lib[25]<<"\" }" <<endl;
	i<<"\t\t{item \""<<lib[26]<<" ammo\" 60 }"<<endl;
	i<<"\t}"<<endl;
	i<<"}"<<endl;

}
void edit_bild() {
	posx=1;
	posy=1;
	int libi[40]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
	while(true) {
		/*while(true){
		gtxy(5,0);
		cout<<l;
		*/l=getch();
//cout<<"   ";
//}
		if(l==72) {
			posy--;
		}
		if(l==80) {
			posy++;
		}
		if(l==75) {
			posx--;
		}
		if(l==77) {
			posx++;
		}
		if(l==27) {
			animat();
			system("cls");
			brk=1;

			break;
		}
		if(posy>7) {
			posy=1;
		}
		if(posy<=0) {
			posy=7;
		}
		if(posx>4) {
			posx=1;
		}
		if(posx<=0) {
			posx=4;
		}
		if(l==8) {
			if(libi[0]&&libi[1]&&libi[2]&&libi[3]&&libi[4]&&libi[5]&&libi[6]&&libi[7]&&libi[8]&&libi[9]&&libi[10]&&libi[11]&&libi[12]&&libi[13]&&libi[14]&&libi[15]&&libi[16]&&libi[17]&&libi[18]&&libi[19]&&libi[20]&&libi[21]&&libi[22]&&libi[23]&&libi[24]&&libi[25]&&libi[26]==1&&libi[27]==1) {
				gtxy(30,31);
				cout<<"                                ";
				gtxy(30,31);
				cout<<localizate[34];
				Sleep(500);
				gtxy(30,31);
				build();
				gtxy(30,31);
				cout<<localizate[36]<<lib[0]<<".set";
				gtxy(30,31);
				Sleep(1000);
				cout<<"                                  ";
				gtxy(30,31);
			} else {
				gtxy(30,31);
				cout<<localizate[35];
				Sleep(2222);
				gtxy(30,31);
				cout<<"                       ";
			}

		}
		if(true) {
			clr(3,4);
			clr(32,4);
			clr(62,4);
			clr(88,4);
			clr(3,8);
			clr(32,8);
			clr(62,8);
			clr(83,8);

			clr(3,12);
			clr(32,12);
			clr(62,12);
			clr(87,12);

			clr(3,16);
			clr(32,16);
			clr(62,16);
			clr(87,16);
			clr(3,20);
			clr(32,20);
			clr(57,20);
			clr(87,20);
			clr(3,24);
			clr(32,24);
			clr(62,24);
			clr(87,24);
			clr(3,28);
			clr(32,28);
			clr(62,28);
			clr(87,28);
			if(posx==1&&posy==1) {
				gtxy(3,4);
				cout<<"->";
				if(l==13) {
					ciN(18,4,lib[0]);
					libi[0]=1;
//cout<<endl<<lib[0];
				}
			}
			if(posx==2&&posy==1) {
				gtxy(32,4);
				cout<<"->";
				if(l==13) {
					ciN(47,4,lib[1]);
					libi[1]=1;
				}
			}
			if(posx==3&&posy==1) {
				gtxy(62,4);
				cout<<"->";
				if(l==13) {
					ciN(75,4,lib[2]);
					libi[2]=1;
				}
			}
			if(posx==4&&posy==1) {
				gtxy(88,4);
				cout<<"->";
				if(l==13) {
					ciN(97,4,lib[3]);
					libi[3]=1;
				}
			}
//_______________________
			if(posx==1&&posy==2) {
				gtxy(3,8);
				cout<<"->";
				if(l==13) {
					ciN(18,8,lib[4]);
					libi[4]=1;
				}
			}
			if(posx==2&&posy==2) {
				gtxy(32,8);
				cout<<"->";
				if(l==13) {
					ciN(47,8,lib[5]);
					libi[5]=1;
				}
			}
			if(posx==3&&posy==2) {
				gtxy(62,8);
				cout<<"->";
				if(l==13) {
					ciN(72,8,lib[6]);
					libi[6]=1;
				}
			}
			if(posx==4&&posy==2) {
				gtxy(83,8);
				cout<<"->";
				if(l==13) {
					ciN(102,8,lib[7]);
					libi[7]=1;
				}
			}

//3_______________________
			if(posx==1&&posy==3) {
				gtxy(3,12);
				cout<<"->";
				if(l==13) {
					ciN(22,12,lib[8]);
					libi[8]=1;
				}
			}
			if(posx==2&&posy==3) {
				gtxy(32,12);
				cout<<"->";
				if(l==13) {
					ciN(50,12,lib[9]);
					libi[9]=1;
				}
			}
			if(posx==3&&posy==3) {
				gtxy(62,12);
				cout<<"->";
				if(l==13) {
					ciN(75,12,lib[10]);
					libi[10]=1;
				}
			}
			if(posx==4&&posy==3) {
				gtxy(87,12);
				cout<<"->";
				if(l==13) {
					ciN(104,12,lib[11]);
					libi[11]=1;
				}
			}
//4_______________________
			if(posx==1&&posy==4) {
				gtxy(3,16);
				cout<<"->";
				if(l==13) {
					ciN(18,16,lib[12]);
					libi[12]=1;
				}
			}
			if(posx==2&&posy==4) {
				gtxy(32,16);
				cout<<"->";
				if(l==13) {
					ciN(50,16,lib[13]);
					libi[13]=1;
				}
			}
			if(posx==3&&posy==4) {
				gtxy(62,16);
				cout<<"->";
				if(l==13) {
					ciN(75,16,lib[14]);
					libi[14]=1;
				}
			}
			if(posx==4&&posy==4) {
				gtxy(87,16);
				cout<<"->";
				if(l==13) {
					ciN(102,16,lib[15]);
					libi[15]=1;
				}
			}
//5_______________________
			if(posx==1&&posy==5) {
				gtxy(3,20);
				cout<<"->";
				if(l==13) {
					ciN(18,20,lib[16]);
					libi[16]=1;
				}
			}
			if(posx==2&&posy==5) {
				gtxy(32,20);
				cout<<"->";
				if(l==13) {
					ciN(47,20,lib[17]);
					libi[17]=1;
				}
			}
			if(posx==3&&posy==5) {
				gtxy(57,20);
				cout<<"->";
				if(l==13) {
					ciN(82,20,lib[18]);
					libi[18]=1;
				}
			}
			if(posx==4&&posy==5) {
				gtxy(87,20);
				cout<<"->";
				if(l==13) {
					ciN(102,20,lib[19]);
					libi[19]=1;
				}
			}
//6_______________________
			if(posx==1&&posy==6) {
				gtxy(3,24);
				cout<<"->";
				if(l==13) {
					ciN(18,24,lib[20]);
					libi[20]=1;
				}
			}
			if(posx==2&&posy==6) {
				gtxy(32,24);
				cout<<"->";
				if(l==13) {
					ciN(47,24,lib[21]);
					libi[21]=1;
				}
			}
			if(posx==3&&posy==6) {
				gtxy(62,24);
				cout<<"->";
				if(l==13) {
					ciN(75,24,lib[22]);
					libi[22]=1;
				}
			}
			if(posx==4&&posy==6) {
				gtxy(87,24);
				cout<<"->";
				if(l==13) {
					ciN(102,24,lib[23]);
					libi[23]=1;
				}
			}
//7_______________________
			if(posx==1&&posy==7) {
				gtxy(3,28);
				cout<<"->";
				if(l==13) {
					ciN(18,28,lib[24]);
					libi[24]=1;
				}
			}
			if(posx==2&&posy==7) {
				gtxy(32,28);
				cout<<"->";
				if(l==13) {
					ciN(43,28,lib[25]);
					libi[25]=1;
				}
			}
			if(posx==3&&posy==7) {
				gtxy(62,28);
				cout<<"->";
				if(l==13) {
					ciN(80,28,lib[26]);
					libi[26]=1;
				}
			}
			if(posx==4&&posy==7) {
				gtxy(87,28);
				cout<<"->";
				if(l==13) {
					ciN(105,28,lib[27]);
					libi[27]=1;
				}
			}

		}
//_____

//____
		gtxy(30,38);
		//cout<<"x = "<<posx<<" ; posy = "<<posy;
	}
}
void bild() {
	system("cls");
	dray();
	gtxy(45,2);
	cout<<"Breed editor (Simplistic )";
	gtxy(100,0);
	cout<<localizate[0];
//1
	gtxy(6,4);
	cout<<localizate[6];
	gtxy(35,4);
	cout<<localizate[7];
	gtxy(65,4);
	cout<<localizate[8];
	gtxy(90,4);
	cout<<localizate[9];
//2
	gtxy(6,8);
	cout<<localizate[10];
	gtxy(35,8);
	cout<<localizate[11];
	gtxy(65,8);
	cout<<localizate[12];
	gtxy(86,8);
	cout<<localizate[13];
//3
	gtxy(6,12);
	cout<<localizate[14];
	gtxy(35,12);
	cout<<localizate[15];
	gtxy(65,12);
	cout<<localizate[16];
	gtxy(90,12);
	cout<<localizate[17];
//4
	gtxy(6,16);
	cout<<localizate[18];
	gtxy(35,16);
	cout<<localizate[19];
	gtxy(65,16);
	cout<<localizate[20];
	gtxy(90,16);
	cout<<localizate[21];
//5
	gtxy(6,20);
	cout<<localizate[22];
	gtxy(35,20);
	cout<<localizate[23];
	gtxy(60,20);
	cout<<localizate[24];
	gtxy(90,20);
	cout<<localizate[25];

//_______________________

	gtxy(6,24);
	cout<<localizate[26];
	gtxy(35,24);
	cout<<localizate[27];
	gtxy(65,24);
	cout<<localizate[28];
	gtxy(90,24);
	cout<<localizate[29];
//7
	gtxy(6,28);
	cout<<localizate[30];
	gtxy(35,28);
	cout<<localizate[31];
	gtxy(65,28);
	cout<<localizate[32];
	gtxy(90,28);
	cout<<localizate[33];


//8
	/*gtxy(6,32);
	cout<<localizate[34];
	gtxy(35,32);
	cout<<localizate[35];
	gtxy(60,32);
	cout<<localizate[36];
	gtxy(90,32);
	cout<<localizate[37];
	*/

	edit_bild();
}
int x0=10;
int y0=4;
void chist() {
	gtxy(4,3);
	cout<<"     ";
	gtxy(4,4);
	cout<<"     ";
	gtxy(4,5);
	cout<<"     ";
	gtxy(4,6);
	cout<<"     ";
	gtxy(4,7);
	cout<<"     ";
	gtxy(4,8);
	cout<<"     ";
	gtxy(4,9);
	cout<<"     ";
	gtxy(4,10);
	cout<<"     ";
	gtxy(4,11);
	cout<<"     ";
	gtxy(4,12);
	cout<<"     ";
	gtxy(4,13);
	cout<<"     ";
	gtxy(4,14);
	cout<<"     ";
	gtxy(4,15);
	cout<<"     ";
	gtxy(4,16);
	cout<<"     ";
	gtxy(4,17);
	cout<<"     ";
	gtxy(4,18);
	cout<<"     ";
	gtxy(4,19);
	cout<<"     ";
	gtxy(4,20);
	cout<<"     ";
	gtxy(4,21);
	cout<<"     ";
	gtxy(4,22);
	cout<<"     ";
	gtxy(4,23);
	cout<<"     ";
	gtxy(4,24);
	cout<<"     ";
	gtxy(4,25);
	cout<<"     ";
	gtxy(4,26);
	cout<<"     ";
	gtxy(4,27);
	cout<<"     ";
	gtxy(4,28);
	cout<<"     ";
	gtxy(4,29);
	cout<<"     ";
	gtxy(4,30);
	cout<<"     ";
}
void menu() {
	gtxy(54,2);
	cout<<"MENU";
	gtxy(100,0);
	cout<<localizate[0];
	gtxy(4,4);
	cout<<localizate[1];
	gtxy(4,6);
	cout<<localizate[2];
	gtxy(4,8);
	cout<<localizate[3];
	gtxy(4,11);
	cout<<localizate[38];
	gtxy(4,31);
	cout<<localizate[63];

	gtxy(100,2);
	cout<<"Build - "<<ver;
	gtxy(2,4);

}
void editor() {
	dray();
	string prog[1000];
	gtxy(8,12);
	cout<<localizate[37];
	/*cin>>prog;
	ofstream prg("res/edit/editor.b");
	prog=prog+".set";
	prg<<prog;
	prg.close();
	*/
	int pi=0;
	fstream mi("res/edit/pt.b");
	gtxy(10,y0);
	while(prog[pi]!="//stop") {
		gtxy(10,y0);
		pi++;
		getline(mi,prog[pi]);
//cout<<prog[pi]<<endl;
		y0++;
	}
pi--;
mi.close();
if(pi==0){
pi++;
}
if(prog[pi]=="//stop"){
MessageBox(GetActiveWindow(), "Вы не создавали ни одного проекта !", "Ошибка !", MB_ICONERROR);
system("cls");
dray();
pi=0;
}else{

	
	int pi1=pi;
	int pi2=1;
	int en=0;
	gtxy(28,12);
	cout<<pi2<<")  "<<prog[pi2]<<" <-                            ";
	en=0;
	
	int get=0;
	while(en!=13) {

		en=getch();
		gtxy(28,12);
		cout<<pi2<<")  "<<prog[pi2]<<" <-                        ";
		if(en==72) {
			pi2--;
		}
			if(pi2<1) {
			pi2=1;
		}
		if(pi2>pi1) {
			pi2=pi1;
		}
				if(en==80) {
			pi2++;
		}
		gtxy(28,12);
		//cout<<en<<"    ";
		if(en==134){
		del=1;
		en=13;
		get=1300;
		}
		//f12
		
	/*	system("cls");
		dray();
		menu();
		//menu_getch();
		}*/
	}
	gtxy(8,12);
	cout<<"                                            ";
	gtxy(0,0);
	ofstream m("res/edit/editor.b");
	m<<prog[pi2];
	m.close();
	mi.close();
//________________загрузка
	fstream f("res/edit/editor.b");
	string f0;
	getline(f,f0);
	string f1="res/"+f0;
//cout<<f1;
	f.close();
//___________________загрузка в файл
	fstream n(f1);
	string ni[60];
	for(int i=0; i<=50; i++) {
		getline(n,ni[i]);
	}
	system("cls");
	dray();
	y0=4;
	x0=10;
	f.close();
	m.close();
	int k=0;
	int gt=0;
	for(int i=0; i<=25; i++) {
		gtxy(x0,y0);
		cout<<i<<" ) "<<ni[i]<<endl;
		y0++;
	}
	int xn=5;
	int yn=4;
	y0=4;
	x0=10;
	gtxy(xn,yn);
	while(true) {
	if(get==1300){
	system("cls");
	dray();
	en=0;
	get=10;
	break;
		}

	/*	gtxy(4,1);
	cout<<get<<"    ";
		*/if(k==25) {
			if(get==80) {
				gt=2;
			}
		}
		if(get==13) {
			if(k==0) {
				gtxy(14,yn);
				cout<<"                                      ";
				gtxy(14,yn);
				getline(cin,ni[k]);
			}
			if(k==1) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==2) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==3) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==4) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==5) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==6) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==7) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==8) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==9) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}

			if(k==10) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==11) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==12) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==13) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==14) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==15) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==16) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==17) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==18) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==19) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==20) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==21) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==22) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==23) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==24) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==25) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==26) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==27) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}

			if(k==28) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==29) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==30) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==31) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==32) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==33) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==34) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==35) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==36) {
				gtxy(24,yn);
				cout<<"                                      ";
				gtxy(24,yn);
				getline(cin,ni[k]);
			}
			if(k==37) {
				gtxy(16,yn);
				cout<<"                                      ";
				gtxy(16,yn);
				getline(cin,ni[k]);
			}
			if(k==38) {
				gtxy(14,yn);
				cout<<"                                      ";
				gtxy(14,yn);
				getline(cin,ni[k]);
			}

		}
		if(get==27) {
			ofstream lk(f1);
			for(int i=0; i<=40; i++) {
				lk<<ni[i]<<endl;
			}
			animat();
			system("cls");
			dray();
			break ;
		}
		if(k==26) {
			if(get==72) {
				gt=1;
			}
		}

		get=getch();
		chist();

		/*if(k==25) {
			if(get==72){
				k=24;
				gtxy(24,yn);
			}
			}*/

		if(k<=0) {
			k=0;
		}
		if(k>51) {
			k=51;
		}
		if(yn<4) {
			yn=4;
		}
		if(yn>29) {
			yn=29;
		}




//if(gt==2){


//}
//if(gt==1){

//}
		y0=4;
		if(k==25) {
			yn=4;
		}
		if(get==80) {
			k++;
			yn++;
			if(k>50) {
				k=50;
			}
			if(yn<5) {
				yn=4;
			}
			if(k==26) {
				system("cls");
				dray();

				k=0;
				yn=4;

				for(int i=26; i<=50; i++) {
					gtxy(x0,y0);
					cout<<i<<" ) "<<ni[i]<<endl;
					y0++;
				}

				k=26;
			}
			if(k>50) {
				yn=28;
			}
			if(yn>29) {
				yn=29;
			}
		}
		if(get==72) {
			k--;
			yn--;
			if(k<0) {
				yn=4;
			}
			if(k==25) {
				system("cls");
				dray();
				yn=4;
				for(int i=0; i<=25; i++) {
					gtxy(x0,y0);
					cout<<i<<" ) "<<ni[i]<<endl;
					y0++;
				}
				/*x0=5;
				y0=4;
				*/yn=4;
				xn=5;
				gt=0;
				k=0;

			}

		}



		gtxy(xn,yn);
		cout<<"->";
gtxy(3,32);
cout<<localizate[62]<<k<<"  ";
	}
}
}




int lo0=1;
void autors() {
	int yx=6;
	int xx=15;
	int ii=39;
	int perem=1;
	for(int i=39; i<61; i++) {

		if(perem==1) {
			int xx=15;
			gtxy(xx,yx);
		}
		if(perem==2) {
			int xx=12;
			gtxy(xx,yx);
		}
		if(perem==3) {
			int xx=10;
			gtxy(xx,yx);
		}
		if(perem==4) {
			int xx=30;
			gtxy(xx,yx);
		}
		if(perem==5) {
			int xx=60;
			gtxy(xx,yx);
		}
		if(perem==6) {
			int xx=15;
			gtxy(xx,yx);
		}
		if(i==39) {
			perem=1;
		}
		if(i==39||i==40||i==41||i==45||i==46||i==49||i==50||i==51||i==52||i==53||i==54) {
			perem=2;
		}
		if(i==42||i==55||i==48) {
			perem=4;
		}
		if(i==47||i==43) {
			perem=3;
		}
		if(i==44) {
			perem=5;
		}
		if(i==56||i==57||i==58) {
			perem=6;
		}



		cout<<localizate[ii]<<endl;
		yx++;

		ii++;
//perem=0;
	}
	getch();
	system("start https://goo.su/v63r7g");
	system("start https://goo.su/mxzL6cj");
	system("start https://goo.su/eLB9j7b");
	system("start https://goo.su/8G7NTp");
	system("cls");
	dray();
}
void lang(){
system("title Language selection");
system("mode con cols=50 lines=8");
	cout<<"._______________________________________________.\n";
	cout<<"|                                              |\n";
	cout<<"|                                              |\n";
	cout<<"|                                              |\n";
	cout<<"|                                              |\n";
	cout<<"|                                              |\n";
	cout<<"|                                              |\n";
	cout<<".______________________________________________.";
	gtxy(4,3);
	cout<<localizate[64];;
	int kz=1;

	string x2;
	fstream x3("loc/loc.l");
	getline(x3,x2);
	int I=atoi(x2.c_str());
	while(kz!=27){
gtxy(4,4);
gtxy(5,4);
cout<<localizate[65]<<" ->             ";//<<kz<<"  ";
gtxy(21,4);
cout<<"                 ";
gtxy(21,4);
if(l==1){
cout<<localizate[66];
}
if(l==2){
cout<<localizate[67];
}
if(l==3){
cout<<localizate[68];
}
if(l==4){
cout<<localizate[69];
}
if(l==5){
cout<<localizate[70];
}
if(l==6){
cout<<localizate[71];
}
if(l==7){
cout<<localizate[73];
}
kz=getch();
if(kz==72){
l--;
}
if(kz==80){
l++;
}
if(l<1){
l=1;
}
if(l>7){
l=7;
}
//72 вверх 80 вниз
if(kz==13){
gtxy(2,6);
cout<<"                ";
gtxy(2,6);
cout<<localizate[72];	
ofstream xn("loc/loc.l");
xn<<l;
xn.close();
Sleep(2222);
system("start Breed_Editor.exe");
//system("start main.exe");
exit(23);
break;
}
}


	system("cls");
	system("title Breed editor for MOWAS2                                                                                 Powered by NFOR");
	system("mode con cols=120 lines=40");
	dray();
	menu();
}
void menu_getch() {
	
		if(del==1){
	animat();
	gtxy(8,22);
	cout<<localizate[79];
	Sleep(2000);
		system("start script.bat");
		exit(100);
		Sleep(3500);
		del=0;
		gtxy(8,22);
cout<<"                              ";
	}
	l=getch();
	gtxy(105,0);
	cout<<"   ";
	gtxy(1,4);
	cout<<"  ";
	gtxy(1,6);
	cout<<"  ";
	gtxy(1,8);
	cout<<"  ";
	gtxy(1,10);
	cout<<"  ";
	gtxy(1,11);
	cout<<"  ";
	gtxy(1,31);
	cout<<"  ";

	if(l==72) {
		posy--;
	}
	if(l==80) {
		posy++;
	}
	if(l==27) {
		exit(0);
	}
	if(posy<0) {
		posy=0;
	}
	if(posy>5) {
		posy=5;
	}
	if(posy==0) {
		if(l==13) {
			lo0++;
			if(lo0>4) {
				lo0=1;
			}
			ofstream lof("loc/loc.l");
			lof<<lo0;
			lof.close();
		}
		gtxy(105,0);
		cout<<"->";
	}
	if(posy==1) {
		gtxy(1,4);
		cout<<"->";
		if(l==13) {
			animat();
			gtxy(4,38);
			temp();
			cout<<localizate[4];
			Sleep(4500);
			gtxy(4,38);
			cout<<"                                                                                             ";

		}
	}
	if(posy==2) {
		if(l==13) {
			bild();
		}
		gtxy(1,6);
		cout<<"->";
	}
	if(posy==3) {
		gtxy(1,8);
		cout<<"->";
		if(l==13) {
			system("cls");
			gtxy(0,0);
			editor();
		}
	}

	if(posy==4) {
		gtxy(1,11);
		cout<<"->";
		if(l==13) {
			system("cls");
			dray();
			autors();

		}
		


	}


	if(posy==5) {
		gtxy(1,31);
		cout<<"->";
		if(l==13) {
			system("cls");
			dray();
			lang();

		}
		


	}

}

void ifer(unsigned &maxv,unsigned &minv ){
    const DWORD encodedVersion = ::GetVersion();
    const unsigned majorVersion = unsigned(LOBYTE(LOWORD(encodedVersion)));
    const unsigned minorVersion = unsigned(HIBYTE(LOWORD(encodedVersion)));

maxv=majorVersion;
minv=minorVersion;
}
int main() {
start();
//debug(2);
loc();
unsigned mx=0,mn=0;
ifer(mx,mn);
int podd=0;
//mn=4;
//mx=6;
if(mx>5){
	if(mx==6){
		if(mn>0){
			podd = 1;
		}
	}
	podd = 1 ;
}else{
	podd = 2 ;
}
if(podd==2){
system("cls");
cout<<localizate[60]<<"\n";
Sleep(5500);
cout<<localizate[61]<<"\n";
Sleep(3500);
int yes=0;
cout<<localizate[62]<<"\n";
Sleep(1500);
cout<<localizate[63]<<"\n";
Sleep(1500);
cout<<" -> ";
cin>>yes;
if(yes==1){
	podd=1;
}else{
	podd=2;
}
}
if(podd==2){
close(0);
}else{
	debug(0);
	while(true) {
		dray();
		while(true) {
			menu();
			menu_getch();
			if(brk==1) {
				brk=0;
				system("cls");
				break;
			}
		}
	}
	}
}


