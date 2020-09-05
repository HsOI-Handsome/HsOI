#include <bits/stdc++.h>
#include <windows.h>
#include "mmsystem.h"
#include "windows.h"
#include<conio.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
#define ll long long
//思考原则：万事皆写于函数，但是也不要忘记主函数的功能~ 
//千万千万要注意，绝对不能在输入前面写freopen("CON","w",stdout),会死机！ 
/*
问题汇总：
-----------------------------------
1.无法存档（导致大多数玩家无法保存战绩） 
2.虽然可以存档，但是不知道如何关闭freopen  暂时不做任何修改 
--------------------------------- 
*/
/*
解释文案：
1.begin函数用作游戏前幕 
2.jc函数用于竞猜模式
3.jq函数用于剧情模式 
4.start函数用于获取角色信息 
5.shangcheng函数用于出售用户使用的技能卡以及其他一些物品
6.duihuanma函数用于角色输入兑换码 
*/

/*
帮助编写网站：
-------------------------------------------------------------------
如何调整输出字体颜色：
https://zhidao.baidu.com/question/1373408175878727899.html
https://zhidao.baidu.com/question/1446048243795159460.html

--------------------------------------------------------------------
如何自定义快捷方式的图标：
https://jingyan.baidu.com/article/af9f5a2d16bd4d43140a4597.html
------------------------------------------------------------------- 
freopen的重定向与关闭：
https://www.cnblogs.com/lfri/p/10163062.html
------------------------------------------------------------------------- 
*/
char choose;
struct st{
	string name;
	ll money;
	ll xl;
	int guanqia;
	ll jna;
	ll jnb;
	ll cjjc;
	ll gjjc;
	ll gmcs;
	ll gmk;
}yh;

void gjjc(){
	srand(time(0));
	
	int df=rand()%3+1;
	int guess;
	cout<<"有钱大亨：我俩来一局石头剪刀布，我输了你可以获得"<<yh.guanqia*100<<"RMB\n";
	cout<<"系统提示：输入1则为石头，输入2则为剪刀，输入3则为布\n";
	cin>>guess;
	switch(guess){
		case 1:
			if(df==2){
				yh.money+=yh.guanqia*100;
			}
			
				switch(df){
					case 1:cout<<"系统提示：有钱大亨出了石头，两人平局！\n";
					Sleep(1000);
					system("cls");
					break;
					case 2:cout<<"系统提示：有钱大亨出了剪刀，你赢了！\n";
					Sleep(1000);
					system("cls");
					break;
					case 3:cout<<"系统提示：有钱大亨出了布，你输了！\n";
					Sleep(1000);
					system("cls");
					break;
				}
			 
		break;
		case 2:
			if(df==3){
				yh.money+=yh.guanqia*100;
			}
			switch(df){
					case 1:cout<<"系统提示：有钱大亨出了石头，你输了！\n";
					Sleep(1000);
					system("cls");
					break;
					case 2:cout<<"系统提示：有钱大亨出了剪刀，两人平局！\n";
					Sleep(1000);
					system("cls");
					break;
					case 3:cout<<"系统提示：有钱大亨出了布，你赢了！\n";
					Sleep(1000);
					system("cls");
					break;
				}
		break;
		case 3:
			if(df==1){
				yh.money+=yh.guanqia*100;
			}
			switch(df){
					case 1:cout<<"系统提示：有钱大亨出了石头，你赢了！\n";
					Sleep(1000);
					system("cls");
					break;
					case 2:cout<<"系统提示：有钱大亨出了剪刀，你输了！\n";
					Sleep(1000);
					system("cls");
					break;
					case 3:cout<<"系统提示：有钱大亨出了布，两人平局！\n";
					Sleep(1000);
					system("cls");
					break;
				}
		break;
	}
	return; 
} 


/*
mciSendString("close mymusic", NULL, 0, NULL);							//关闭之前的音乐 
			mciSendString("open music\\暴龙-神.mp3 alias mymusic", NULL, 0, NULL);	// 打开音乐（龙神出场音乐） 
			mciSendString("play mymusic repeat", NULL, 0, NULL);				//循环播放
*/
void xiuxi(){
	ll a,b,c;
	cout<<"请输入休息的时长！\n";
	cout<<"hours:";
	cin>>a;
	cout<<endl;
	cout<<"minutes:";
	cin>>b;
	cout<<endl;
	cout<<"seconds:";
	cin>>c;
	cout<<endl;
	int sum=a*60*60+b*60+c;
	system("cls");
	cout<<"还剩下"<<a<<"时"<<b<<"分"<<c<<"秒"<<endl;
	Sleep(1000);
	system("cls");
	while(sum){
		sum--;
		a=sum/60/60;
		b=(sum-a*60*60)/60;
		c=sum-a*60*60-b*60;
		cout<<"还剩下"<<a<<"时"<<b<<"分"<<c<<"秒"<<endl;
		Sleep(1000);
		system("cls");
		if(sum<=0){
			system("cls");
			cout<<"时间到了！！！！\n";
			Sleep(1000);
			/*system("C:\\Users\\dell\\Desktop\\程序设计研发\\More\\music\\01.mp3");
            cin.get();
            system("cls");
            cout<<"祝各位度过疫情难关，中国必胜！\n";
            Sleep(104000);*/
			system("cls");
			return;
		}
	}
}
	


void shangcheng(){
	/*
	cout<<"研发中....\n";
	
	Sleep(2000);
	system("cls");*/
	char choose;
	while(1){
		cout<<"神秘人：欢迎来到商城，这次...你想买点什么呢？\n";
	cout<<"系统提示：请观看菜单\n";
	Sleep(3000);
	system("cls");
	cout<<"A.无孔不入（可对Boss造成[Boss等级*25]点伤害）  售卖价格：[Boss等级*30]RMB\n";
	cout<<"B.绝命之翼（可对Boss造成[Boss等级*50]点伤害）  售卖价格：[Boss等级*50]RMB\n";
	cout<<"按C可以购买10张无孔不入技能卡 按D可以购买10张绝命之翼\n"; 
	cout<<"E.初级竞猜模式入场券                           售卖价格：[Boss等级*15]RMB\n";
	cout<<"按G可以购买10张初级竞猜模式入场券\n";
	cout<<"H.高级竞猜模式入场券                           售卖价格：[Boss等级*25]RMB\n";
	cout<<"按I可以购买10张高级竞猜模式入场券\n";
	cout<<"J.改名卡                                       售卖价格：[改名次数*5]RMB\n";
	cout<<"按F可以退出\n";
	cout<<"系统提示：你目前有："<<yh.money<<"元\n";
	cout<<"神秘人：请问...客官需要点什么？\n";
	cin>>choose;
	switch(choose){
		case 'A':
			if(yh.money>yh.guanqia*30){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*30;
				yh.jna++;
				Sleep(1000);
				system("cls");
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
		break;
		case 'C':
			if(yh.money>yh.guanqia*30*10){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*30*10;
				yh.jna+=10;
				Sleep(1000);
				system("cls");
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
		case 'B':
			if(yh.money>yh.guanqia*50){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*50;
				yh.jnb++;
				Sleep(1000);
				system("cls");
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
		case 'D':
			if(yh.money>yh.guanqia*50*10){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*50*10;
				yh.jnb+=10;
				Sleep(1000);
				system("cls");
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
		case 'E':
			if(yh.money>yh.guanqia*15){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*15;
				yh.cjjc++;
				Sleep(1000);
				system("cls");
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
		case 'G':
			if(yh.money>yh.guanqia*15*10){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*15*10;
				yh.cjjc+=10;
				Sleep(1000);
				system("cls");
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
		case 'F':
			cout<<"神秘人：客官慢走，欢迎下次光临！\n";
			Sleep(1000);
			system("cls"); 
			return;
		case 'H':
			if(yh.money>=yh.guanqia*25){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*25;
				yh.gjjc++;
				Sleep(1000);
				system("cls"); 
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
		case 'I':
			if(yh.money>=yh.guanqia*25*10){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.guanqia*25*10;
				yh.gjjc+=10;
				Sleep(1000);
				system("cls"); 
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
		case 'J':
			if(yh.money>=yh.gmcs*5){
				cout<<"系统提示：购买成功！已为你放于背包中！\n";
				yh.money-=yh.gmcs*5;
				yh.gmk++;
				Sleep(1000);
				system("cls");
			}
			else{
				cout<<"系统提示：钱有点不够哦 0_0\n";
				Sleep(1500);
				system("cls");
			}
			break;
	}
	}
}

void begin(){
	system("color BF");
	cout<<"欢迎游玩：More\n"; 
	cout<<"游戏设计：Handsome、楼峻康\n";
	cout<<"制作团队：Yours\n";
	cout<<"团队链接：www.luogu.org/team/26970\n";
	cout<<"洛谷团队编号：26970\n";
	Sleep(3000);
	system("cls");
	return;
}
void gaiming(){
	SYSTEMTIME sys;
    GetLocalTime( &sys );
	system("cls");
	string name;
	bool flag;
	while(1){
		cout<<"请输入你心仪的名字：";
		cin>>name;
		cout<<"确定要改成这个名字吗？(确定输入1，否定输入0)\n";
		cin>>flag;
		if(flag){
			yh.name=name;
			yh.money-=yh.gmcs*5;
			yh.gmcs++;
			cout<<"改名成功！\n";
			printf( "当前时间为%4d年%02d月%02d日 %02d时%02d分%02d秒\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute,sys.wSecond);
			cout<<"剩余"<<yh.money<<"RMB\n";
			Sleep(1500);
			system("cls");
			return;
		}
	}
	
	return;
}
/*
void duqu(){
	freopen("Player.txt","r",stdin);
	cin>>yh.name>>yh.guanqia>>yh.money>>yh.xl>>yh.jna>>yh.jnb>>yh.cjjc>>yh.gjjc>>yh.gmcs;
	cout<<"读取完毕....启动中.......\n";
	Sleep(5000);
	system("cls");
	fclose(stdin);
	fclose(stdin);
	fclose(stdin);
	freopen("CON","r",stdin);
	freopen("CON","r",stdin);
	freopen("CON","r",stdin);
	return; 
}*/
void start(){
	//原计划读档，出现问题，暂时改为不存档  
	//duqu();
	yh.name="admin";
	yh.guanqia=1;
	yh.money=5;
	yh.xl=150;
	//fclose(stdin);
	//fclose(stdout);
	//freopen("CON", "r", stdin);
    //freopen("CON", "w", stdout);
	char f;
	cout<<"当前游戏名："<<yh.name<<endl;
	cout<<"请问是否要改名？\n";
	cout<<"这是第"<<yh.gmcs<<"次改名\n";
	cout<<"需要花费"<<yh.gmcs*5<<"RMB\n";
	cout<<"请问是否要改名？（改名按T，不改名按F）\n";
	cin>>f;
	if(f=='T'){
		if(yh.money>=yh.gmcs*5){
			gaiming();
		    return;
		}
		
		else{
			cout<<"系统提示：目前RMB不够哦\n";
			Sleep(2000);
			system("cls");
			return;
		}
		
		
	}
	else{
		cout<<"游戏马上开始！\n";
		Sleep(1000);
		system("cls");
	}
	//freopen("CON", "r", stdin);
	system("cls");
	return;
}
void jq(){
	srand(time(0));
	ll jnaj=rand()%4+1;
	ll jnbj=rand()%1+1;
	ll cjjcq=rand()%1+1;
	ll xl=yh.guanqia*100+5; 
	char chose;
	/*cout<<"建设中......\n";
	Sleep(1500);*/
	while(1){
		cout<<"本轮Boss：暗夜猫妖\n";
		cout<<"等级："<<yh.guanqia<<endl;
		cout<<"Boss剩余血量："<<xl<<endl; 
		cout<<"玩家："<<yh.name<<endl;
		cout<<"你目前有"<<yh.money<<"元\n";
		cout<<"你剩余血量:"<<yh.xl<<endl;
		cout<<"击杀Boss可获得"<<yh.guanqia*100<<"元\n";
		cout<<"请选择释放技能：A.无孔不入 B.普通攻击 C.绝命之翼 D.逃跑神技\n";
		cout<<"您持有无孔不入："<<yh.jna<<"张\n";
		cout<<"您持有绝命之翼："<<yh.jnb<<"张\n"; 
		cin>>chose;
		switch(chose){
			case 'A':
				if(yh.jna>0){
					xl-=yh.guanqia*25;
					yh.jna--;
					cout<<"系统提示：你对Boss造成了"<<yh.guanqia*25<<"点伤害 =-=\n";
					Sleep(1000);
					system("cls"); 
				}
				else{
					cout<<"系统提示：没有这种卡哦，战斗结束后去商城购买吧！\n";
					cout<<"造成伤害失败\n";
					Sleep(1000);
					system("cls");
				}
				break;
			case 'B':
			cout<<"系统提示：你对Boss造成了"<<yh.guanqia*9<<"点伤害 =-=\n";
			xl-=yh.guanqia*9;
			Sleep(1000);
			system("cls");
			break;
			case 'C':
				if(yh.jnb>0){
					xl-=yh.guanqia*50;
					yh.jnb--;
					cout<<"系统提示：你对Boss造成了"<<yh.guanqia*50<<"点伤害 =-=\n";
					Sleep(1000);
					system("cls"); 
				}
				else{
					cout<<"系统提示：没有这种卡哦，战斗结束后去商城购买吧！\n";
					cout<<"造成伤害失败\n";
					Sleep(1000);
					system("cls");
				}
				break;
			case 'D':
				system("cls");
				cout<<"恭喜你少年，逃跑成功！\(^o^)/\n";
				Sleep(1000);
				system("cls");
				return;
		}
		if(xl<=0){
			system("cls");
			cout<<"成功击杀暗夜猫妖 \(^o^)/ \n";
			cout<<"系统提示：恭喜获得"<<yh.guanqia*100<<"元~\n";
			yh.money+=yh.guanqia*100;
			yh.jna+=jnaj;
			yh.jnb+=jnbj;
			cout<<"超值掉落：无孔不入技能卡："<<jnaj<<"张  绝命之翼技能卡："<<jnbj<<"张 \n";
			cout<<"福利放送：初级竞猜模式入场券"<<cjjcq<<"张\n";
			yh.cjjc+=cjjcq;
			yh.guanqia++;
			yh.xl=yh.guanqia*100;
			Sleep(3000);
			system("cls");
			return;
		}
		cout<<"系统提示：Boss对你造成了"<<yh.guanqia*10<<"伤害\n";
		yh.xl-=yh.guanqia*10;
		Sleep(1000);
		system("cls");
	}
	system("cls");
	return;
}
void duihuanma(){
	string duihuanma;
	cout<<"神秘老头：听说你有兑换码？\n";
	cout<<"我：是的，我是作者大大的朋友\n";
	cout<<"神秘老头：那你告诉我兑换码是啥吧\n";
	cout<<"系统提示：请输入兑换码（回答错误将会自动跳转至主页）：\n";
	cin>>duihuanma;
	if(duihuanma=="LJK最帅"){
		system("cls"); 
		cout<<"系统提示：恭喜获得作者赠送的1000RMB！\n";
		yh.money+=1000;
		Sleep(2000);
		system("cls");
		
	}

		if(duihuanma=="More又出新模式了!"){
    	system("cls");
    	cout<<"系统提示：恭喜获得50RMB奖金！\n";
    	yh.money+=50;
    	Sleep(1000);
    	system("cls");
    	
	}
	
	
    
	return;
}

void jc(){
	srand(time(0));
	ll a=rand()%4+1;
	ll b;
	/*cout<<"建设中......\n";
	Sleep(1500);*/
	cout<<"本模式由玩家进行竞猜，如果猜对就可以增加"<<yh.guanqia*50<<"RMB\n";
	cout<<"请在1~4之间猜一个数字\n";
	cin>>b;
	if(a==b){
		yh.money+=yh.guanqia*50;
		cout<<"猜对了！\n";
		Sleep(3000);
	}
	else{
		cout<<"猜错了.....\n";
		Sleep(1000);
	}
	system("cls");
	return;
}
int main(){
	begin();
	start();
	system("color F1");
	while(1){
		system("cls");
		cout<<yh.name<<"你好\n";
		cout<<"请输入你想玩的模式：A.初级竞猜模式 B.剧情模式 C.商城 (输入S就可以保存)\n";
		cout<<"                    D.兑换码       E.高级竞猜模式  F.改名~  G.休息  \n ";
		cout<<"                    H.音乐派对   \n" 
		cout<<"系统提示：您目前还剩余"<<yh.money<<"RMB\n";
		freopen("CON", "r", stdin);
		cin>>choose;
		switch(choose){
			case 'A':
				cout<<"你目前有"<<yh.cjjc<<"张入场券\n"; 
				if(yh.cjjc>0){
					cout<<"使用后还剩下"<<yh.cjjc-1<<"张入场券\n";
					yh.cjjc--; 
					Sleep(2000);
					system("cls");
					jc();
				} 
				else{
					cout<<"系统提示：入场券不足，请去商店购买\n";
					Sleep(2000);
					system("cls"); 
				}
				break;
			case 'B':
				system("cls");
				if(yh.guanqia<=10){
					jq();
					break;
				}
				break;
				
			case 'S':
				cout<<"保存暂时不可用......\n";
				Sleep(2000);
				system("cls");
				/*
				freopen("玩家.txt","w",stdout);
				cout<<endl;
				cout<<yh.name<<" "<<yh.guanqia<<" "<<yh.money<<" "<<yh.xl;
				fclose(stdout);
				freopen("CON", "w", stdout);
				cout<<"保存完毕！\n";
				Sleep(2000);
				system("cls");
				break;*/
			case 'C':
			    system("cls");
				shangcheng();
				
				break;
			case 'D':
				system("cls");
				duihuanma();
				 break;
			case 'E':
				if(yh.gjjc>0){
					cout<<"你目前有"<<yh.gjjc<<"张入场券\n";
					cout<<"使用后还剩下"<<yh.gjjc-1<<"张入场券\n";
					yh.gjjc--;
					Sleep(2000);
					system("cls");
				    gjjc();
				}
				else{
					cout<<"系统提示：入场券不足，请去商店购买 (#^.^#)\n";
					Sleep(1000);
					system("cls");
				}
				
				break;
			case 'F':
			    if(yh.gmk>0){
			    	cout<<"你目前有"<<yh.gmk<<"张改名卡\n";
			    	cout<<"使用后还剩下"<<yh.gmk-1<<"张改名卡\n";
			    	Sleep(1000);
			    	system("cls");
			    	gaiming();
				}
				else{
					cout<<"系统提示：改名卡不足，请去商店购买 (#^.^#)\n";
					Sleep(1000);
					system("cls");
				}
				break; 
			case 'G':
				system("cls");
				cout<<"玩游戏之余也不要忘记休息哦\n";
				Sleep(1500); 
				system("cls");
				xiuxi();
				break;
		}
	}
	return 0;
}
