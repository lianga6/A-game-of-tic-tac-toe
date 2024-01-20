#include"iostream"
#include"string"
#include"cstdlib"
#include"ctime"
using namespace std;
string a[]={"","1","2","3","4","5","6","7","8","9",};//棋盘 
void xianshou(){       //先手落子 
	cout<<"请X下子："; 
	int n;
	cin>>n;
	if(a[n]!="O"&&a[n]!="X"){//落过子的地方不能再次落子 
		a[n]="X";
	}else {           
		cout<<"下错了,请重新游戏"<<endl; system("pause");
		exit(0);
	}
}
void houshou(){      //后手落子 
	cout<<"请O下子："; 
	int n;
	cin>>n;
	if(a[n]!="X"&&a[n]!="O"){//落过子的地方不能再次落子 
		a[n]="O";
	}else {
		cout<<"下错了,请重新游戏"<<endl; system("pause");
		exit(0);
	}
}
int shagua(){
		//cout<<"请电脑O下子："; 
		int b=1,c=10,r;
		srand((int)time(0));
		r=(rand()%(c-b))+b;	
		while(a[r]=="O"||a[r]=="X"){
			srand((int)time(0));
		r=(rand()%(c-b))+b;	
		}
		return r;
	 }
void zhineng(){
	int m;
	if(a[1]==a[2]&&a[1]=="O"&&a[3]=="3"){m=3;}if(a[1]==a[3]&&a[1]=="O"&&a[2]=="2"){m=2;}if(a[3]==a[2]&&a[3]=="O"&&a[1]=="1"){m=1;}
	else if(a[4]==a[5]&&a[4]=="O"&&a[6]=="6"){m=6;}if(a[4]==a[6]&&a[4]=="O"&&a[5]=="5"){m=5;}if(a[6]==a[5]&&a[6]=="O"&&a[4]=="4"){m=4;}
	else if(a[7]==a[8]&&a[7]=="O"&&a[9]=="9"){m=9;}if(a[7]==a[9]&&a[7]=="O"&&a[8]=="8"){m=8;}if(a[8]==a[9]&&a[8]=="O"&&a[7]=="7"){m=7;}
	else if(a[1]==a[4]&&a[1]=="O"&&a[7]=="7"){m=7;}if(a[1]==a[7]&&a[1]=="O"&&a[4]=="4"){m=4;}if(a[4]==a[7]&&a[7]=="O"&&a[1]=="1"){m=1;}
	else if(a[2]==a[5]&&a[2]=="O"&&a[8]=="8"){m=8;}if(a[2]==a[8]&&a[2]=="O"&&a[5]=="5"){m=5;}if(a[5]==a[8]&&a[5]=="O"&&a[2]=="2"){m=2;}
	else if(a[3]==a[6]&&a[3]=="O"&&a[9]=="9"){m=9;}if(a[3]==a[9]&&a[3]=="O"&&a[6]=="6"){m=6;}if(a[6]==a[9]&&a[6]=="O"&&a[3]=="3"){m=3;}
	else if(a[1]==a[5]&&a[1]=="O"&&a[9]=="9"){m=9;}if(a[5]==a[9]&&a[5]=="O"&&a[1]=="1"){m=1;}if(a[1]==a[9]&&a[1]=="O"&&a[5]=="5"){m=5;}
	else if(a[3]==a[5]&&a[3]=="O"&&a[7]=="7"){m=7;}if(a[3]==a[7]&&a[3]=="O"&&a[5]=="5"){m=5;}if(a[5]==a[7]&&a[5]=="O"&&a[3]=="3"){m=3;}
	
	else if(a[1]==a[2]&&(a[1]=="O"||a[1]=="X")&&a[3]=="3"){m=3;}
 else if(a[1]==a[3]&&(a[1]=="O"||a[1]=="X")&&a[2]=="2"){m=2;}
 else if(a[2]==a[3]&&(a[2]=="O"||a[2]=="X")&&a[1]=="1"){m=1;}
 else if(a[4]==a[5]&&(a[4]=="O"||a[4]=="X")&&a[6]=="6"){m=6;}
 else if(a[4]==a[6]&&(a[4]=="O"||a[4]=="X")&&a[5]=="5"){m=5;}
 else if(a[5]==a[6]&&(a[5]=="O"||a[5]=="X")&&a[4]=="4"){m=4;}
 else if(a[7]==a[8]&&(a[7]=="O"||a[7]=="X")&&a[9]=="9"){m=9;}
 else if(a[7]==a[9]&&(a[7]=="O"||a[7]=="X")&&a[8]=="8"){m=8;}
 else if(a[8]==a[9]&&(a[8]=="O"||a[8]=="X")&&a[7]=="7"){m=7;}
 else if(a[1]==a[4]&&(a[1]=="O"||a[1]=="X")&&a[7]=="7"){m=7;}
 else if(a[1]==a[7]&&(a[1]=="O"||a[1]=="X")&&a[4]=="4"){m=4;}
 else if(a[4]==a[7]&&(a[4]=="O"||a[4]=="X")&&a[1]=="1"){m=1;}
 else if(a[2]==a[5]&&(a[2]=="O"||a[2]=="X")&&a[8]=="8"){m=8;}
 else if(a[2]==a[8]&&(a[2]=="O"||a[2]=="X")&&a[5]=="5"){m=5;}
 else if(a[5]==a[8]&&(a[5]=="O"||a[5]=="X")&&a[2]=="2"){m=2;}
 else if(a[3]==a[6]&&(a[3]=="O"||a[3]=="X")&&a[9]=="9"){m=9;}
 else if(a[3]==a[9]&&(a[3]=="O"||a[3]=="X")&&a[6]=="6"){m=6;}
 else if(a[6]==a[9]&&(a[6]=="O"||a[6]=="X")&&a[3]=="3"){m=3;}
 else if(a[1]==a[5]&&(a[1]=="O"||a[1]=="X")&&a[9]=="9"){m=9;}
 else if(a[1]==a[9]&&(a[1]=="O"||a[1]=="X")&&a[5]=="5"){m=5;}
 else if(a[5]==a[9]&&(a[5]=="O"||a[5]=="X")&&a[1]=="1"){m=1;}
 else if(a[3]==a[5]&&(a[3]=="O"||a[3]=="X")&&a[7]=="7"){m=7;}
 else if(a[3]==a[7]&&(a[3]=="O"||a[3]=="X")&&a[5]=="5"){m=5;}
 else if(a[5]==a[7]&&(a[5]=="O"||a[5]=="X")&&a[3]=="3"){m=3;}
	

	else{m=shagua();
	}
	a[m]="O";
}
int shuying(){   //判定输赢函数 
	int s;
	if((a[1]==a[2]&&a[1]==a[3]&&a[1]=="X")||(a[4]==a[5]&&a[4]==a[6]&&a[4]=="X")||(a[7]==a[8]&&a[7]==a[9]&&a[7]=="X")||(a[1]==a[4]&&a[1]==a[7]&&a[1]=="X")||
   (a[2]==a[5]&&a[5]==a[8]&&a[2]=="X")||(a[3]==a[6]&&a[3]==a[9]&&a[3]=="X")||(a[1]==a[5]&&a[1]==a[9]&&a[1]=="X")||(a[3]==a[5]&&a[3]==a[7]&&a[3]=="X")){
   	s=1;
   }
   if((a[1]==a[2]&&a[1]==a[3]&&a[1]=="O")||(a[4]==a[5]&&a[4]==a[6]&&a[4]=="O")||(a[7]==a[8]&&a[7]==a[9]&&a[7]=="O")||(a[1]==a[4]&&a[1]==a[7]&&a[1]=="O")||
   (a[2]==a[5]&&a[5]==a[8]&&a[2]=="O")||(a[3]==a[6]&&a[3]==a[9]&&a[3]=="O")||(a[1]==a[5]&&a[1]==a[9]&&a[1]=="O")||(a[3]==a[5]&&a[3]==a[7]&&a[3]=="O")){
   	s=2;
   }
   return s;}   //返回值为1则X胜返回为2则O胜 
void win(){//判定输赢 
	if(shuying()==1){
   	        cout<<"游戏结束,X赢"<<endl;
	        system("pause");
	        exit(0);
        }
        if(shuying()==2){
   	        cout<<"游戏结束,O赢"<<endl;
            system("pause");
            exit(0);
        }//判定输赢 
}
void show(){//打印棋盘 
	for(int i=9;i>0;i=i-3){   //输出棋盘 
			cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i]<<endl;
			cout<<"+-+-+"<<endl;
	}
	cout << endl;		
}
void renren(){
	cout << "井字棋——人人对弈" << endl;
	show();
	for(int b=0;b<5;b++){     //交替落子最多X落5子O落4子 
        xianshou();
      system("cls");//清屏 
        show(); 
        win();
        if(b==4){cout<<"游戏结束,平局"<<endl;
		   system("pause");
		    exit(0);}//若第五轮x落完子后仍未决出胜负判定为平局 
	    houshou();
	    system("cls");//清屏 
        show();
        win();
   }
}
void renji1(){
	int n;
	cout << "井字棋——人与傻瓜电脑对弈" << endl;
	show();
	for(int b=0;b<5;b++){     //交替落子最多X落5子O落4子 
        xianshou();
       system("cls");//清屏 
        show(); 
        win();
        if(b==4){cout<<"游戏结束,平局"<<endl;
         exit(0);}
       n=shagua();
       a[n]="O";
      system("cls");//清屏 
        show();
        win();
	   }
}
void renji2(){
	cout << "井字棋——人与智能电脑对弈" << endl;
	show();
		for(int b=0;b<5;b++){     //交替落子最多X落5子O落4子 
        xianshou();
       system("cls");//清屏 
        show(); 
        win();
        if(b==4){cout<<"游戏结束,平局"<<endl;
         exit(0);}
         zhineng();
     system("cls");//清屏 
        show();
        win();
	   }
}
int main(){
	cout<<"亮哥无敌"<<endl;
	cout<<"人人对战请按1，人对傻瓜电脑请按2, 人对智能电脑请按3"<<endl;
	int m;
	cin>>m;
	if(m==1) {
	renren();
	}
	else if(m==2) {
	renji1();
	}
    else if(m==3) {
	renji2();
	}
	return 0;
}










