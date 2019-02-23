#include <bits/stdc++.h>

using namespace std;

int main()
{
	int win[4]={0};
	int tie[4]={0};
	int lose[4]={0};
	string pl[4];
	string aig[4];
	int i=0;
	string ch;
	string choice;
	do{
	   ++i;	 
       cout << "--------------------------------------" << endl;
       cout << "-- Lets play Rock, Paper, Scissors! --" << endl;
       cout << "--------------------------------------" << endl;
       cout << "It is best of 3 game against computer"<<endl;
       cout << "Rock defeats Scissors / Scissors defeat Paper / Paper defeats Stone" << endl<<endl;
       cout << "------------------ROUND "<<i<<"--------"<<endl;
       cout << "Type your choice (Rock/Paper/Scissors) : " << endl<<endl;
       cin>>choice;
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        pl[i]=choice;
       // 1 = Rock, 2 = Paper, 3 = Scissors
       int ai = rand() % 3 + 1;
       string aich;
       if(ai==1)
          aich="Rock";
       else if(ai==2)
          aich="Paper";
       else
         aich="Scissors";
       cout<<"The computer chooses : "<<aich<<endl;
       aig[i]=aich;
       
    if(choice == "rock"  && ai == 1){
         cout << "Rock meets Rock its a tie!" << endl;
         tie[i]++;
         }
    else if(choice =="rock" && ai== 2){
         cout << "Rock is covered by Paper the computer wins!." << endl;
         lose[i]++;
         }
    else if(choice == "rock" && ai == 3){
         cout << "Rock crushes Scissors you win!" << endl;
         win[i]++;
         }
    else if(choice == "paper" && ai == 1){
         cout << "Paper covers Rock you win!" << endl;
         win[i]++;
         }
    else if(choice == "paper" && ai == 2){
         cout << "Paper meets Paper its a tie!" << endl;
         tie[i]++;
         }
    else if(choice == "paper" && ai == 3){
         cout << "Paper is cut by Scissors the computer wins!" << endl;
         lose[i]++;
         }
    else if( choice == "scissors" && ai == 1){
         cout << "Scissors are crushed by Rock computer wins!" << endl;
         lose[i]++;
         }
    else if( choice == "scissors" && ai == 2){
         cout << "Scissors cuts Paper you win!" << endl;
         win[i]++;
         }
    else if(choice == "scissors" && ai == 3){
         cout << "Scissors meet Scissors its a tie!" << endl;
         tie[i]++;
         }
    else{
		   cout << "You didn't select Rock, Paper or Scissors(So Round Invalid)" << endl;
	    }
	cout<<endl<<endl<<endl;    
	if(i==3)
	{
	  cout<<endl<<endl;	
	  cout<<"The results are as follows : "<<endl;
	  cout<<"          WIN    LOSE    TIE   PLAYER    PC"<<endl;
	  cout<<"ROUND 1    "<<win[1]<<"      "<<lose[1]<<"      "<<tie[1]<<"      "<<"      "<<pl[1]<<"      "<<aig[1]<<endl;
	  cout<<"ROUND 2    "<<win[2]<<"      "<<lose[2]<<"      "<<tie[2]<<"      "<<"      "<<pl[2]<<"      "<<aig[2]<<endl;
	  cout<<"ROUND 3    "<<win[3]<<"      "<<lose[3]<<"      "<<tie[3]<<"      "<<"      "<<pl[3]<<"      "<<aig[3]<<endl;
	  int cw=0;
	  for(int j=1;j<=3;j++)
	     {
			 if(win[j]==1)
			    ++cw;
		 }
     if(cw>=2)
       cout<<"---------------------------YOU WIN---------------------------"<<endl;
     else
       cout<<"-----------------------YOU DID NOT WIN-----------------------"<<endl;  		 
     for(int j=0;j<=3;j++)
     {
		 win[i]=0;
		 lose[i]=0;
		 tie[i]=0;
         aig[i]="NULL";
         pl[i]="NULL";
	 }  
	 i=0;
	 cout<<"Do you want to play again?(y/n) : ";
	 cin>>ch;
	}
	else
	  ch="Y";  
	cout<<""<<flush;      
   }while(ch == "Y" || ch == "y");
   return 0;
}

