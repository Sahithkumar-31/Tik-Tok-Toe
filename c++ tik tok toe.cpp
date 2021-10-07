#include <iostream>
#include <windows.h>
using namespace std;
char boxes[10]={'0','1','2','3','4','5','6','7','8','9'};

int player=1,choose,i;
char input;
int who();
void border();

int main(){
	do{
	player=(player%2)?1:2;
	border();
	cout<<"PLAYER"<<player<<" Enter the choice :  ";
	cin>>choose;
	input=(player==1)?'X':'O';
	if(choose==1&&boxes[1]=='1')
	boxes[1]=input;
	else if(choose==2&&boxes[2]=='2')
	boxes[2]=input;
		else if(choose==3&&boxes[3]=='3')
	boxes[3]=input;
		else if(choose==4&&boxes[4]=='4')
	boxes[4]=input;
		else if(choose==5&&boxes[5]=='5')
	boxes[5]=input;
		else if(choose==6&&boxes[6]=='6')
	boxes[6]=input;
		else if(choose==7&&boxes[7]=='7')
	boxes[7]=input;
		else if(choose==8&&boxes[8]=='8')
	boxes[8]=input;
		else if(choose==9&&boxes[9]=='9')
	boxes[9]=input;
	else{
		cout<<"Invalid output";
		player--;
	}
	i=who();
	player++;
	Sleep(500);
	
}while(i==-1);
border();
if (i==1)
{
    cout<<"==>PLAYER"<<--player<<" WON<==";
}
else
{
	cout<<"==>DRAW<==";
}
}

who()
{
	if(boxes[1] == boxes[2] && boxes[2]==boxes[3])
	   return 1;
	else if(boxes[4]==boxes[5]&&boxes[5]==boxes[6])
	   return 1;
	else if(boxes[7]==boxes[8]&&boxes[8]==boxes[9])
	   return 1;
	else if(boxes[1]==boxes[4]&&boxes[4]==boxes[7])
	   return 1;
	else if(boxes[2]==boxes[5]&&boxes[5]==boxes[8])
	   return 1;
	else if(boxes[3]==boxes[6]&&boxes[6]==boxes[9])
	   return 1;
	else if(boxes[1]==boxes[5]&&boxes[5]==boxes[9])
	   return 1;
	else if(boxes[3]==boxes[5]&&boxes[5]==boxes[7])
	   return 1;
	else if(boxes[1] !='1' && boxes[2] !='2' && boxes[3] !='3' && boxes[4] !='4' && boxes[5]!='5' && boxes[6]!='6' && boxes[7]!='7' && boxes[8]!='8' && boxes[9]!='9')
	   return 0;
	else {
		return -1;
	}
	
}

void border()
{    system("cls");
	cout<<"TIK TAK TOE GAME \n";
	cout<<"PLAYER1 'X' ::  PLAYER2  'O' \n";
	cout<<"  "<<boxes[1]<<"|"<<"  "<<boxes[2]<<"|"<<"  "<<boxes[3]<<"\n";
	cout<<"  "<<boxes[4]<<"|"<<"  "<<boxes[5]<<"|"<<"  "<<boxes[6]<<"\n";
	cout<<"  "<<boxes[7]<<"|"<<"  "<<boxes[8]<<"|"<<"  "<<boxes[9]<<"\n";
}






