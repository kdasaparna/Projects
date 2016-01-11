#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
char ch;
using namespace std;
void matrix();
class player
{
    public:
    string name;
    int score,point;
    player():score(0),point(0){}
    void getname();
    int check(int);
    friend void start(player,player);
};

inline void player::getname()
{
    cout<<"Enter your name:";
    cin>>name;
}
void start(player p1,player p2)
{
    srand(time(NULL));
    while((p1.point!=1)&&(p2.point!=1))
    {

        cout<<"\n\t\tAre you ready to throw the dice??";
        cin>>ch;
        system("clear");
        matrix();cout<<"\n";
        while((ch=='y')||(ch=='Y'))
        {
            cout<<p1.name<<" got ";
            p1.point= rand()%6+1;
            cout<<p1.point;
            if(p1.point==1)
            {
                cout<<"\n\t\t**********WOW!!!"<<p1.name<<" entered the board************\n";
                break;
            }
            else
            {
                cout<<"*********You have to wait till you get 1 to start playing********\n";
            }

           cout<<p2.name<<" got ";
            p2.point=rand()%6+1;
            cout<<p2.point;
            if(p2.point==1)
            {
                cout<<"\n\t\t**********WOW!!!"<<p2.name<<" entered the board....*********\n";
                break;
            }
            else
            {
                cout<<"********You have to wait till you get 1 to start playing********\n";
            }

        cout<<"\n\t\tAre you ready to throw the dice??";
        cin>>ch;
        system("clear");
            matrix();cout<<"\n";
        }
    while((p1.point==1)&&(p2.point!=1))
    {

        while(p1.score<=100)
            {

                cout<<"\t\tAre you ready to throw the dice??";
            cin>>ch;
            system("clear");
                matrix();cout<<"\n";
            while((ch=='y')||ch=='Y')
            {
                cout<<"\n"<<p1.name<<" got ";
                p1.point= rand()%6+1;
                cout<<p1.point;
                p1.score+=p1.point;
                p1.score=p1.check(p1.score);
                cout<<"\tCurrent score="<<p1.score<<"\n";

            if(p1.score>=100)
            {
                cout<<"\n\t\t\t\t\t"<<p1.name<<" is the %%WINNER%%";
                exit(0);
            }
            p2.point=rand()%6+1;
            cout<<p2.name<<" got "<<p2.point;
            if(p2.point==1)
            {
                cout<<"\n\t\t************WOW!!!"<<p2.name<<" entered the board....*********\n";
                while((p1.score<=100)&&(p1.score<=100))
                {
                    p1.point=rand()%6+1;
                    p1.score+=p1.point;
                    cout<<"\n"<<p1.name<<" got "<<p1.point;
                    p1.score=p1.check(p1.score);
                    cout<<"\n\t Your current score:"<<p1.score;

                    p2.point=rand()%6+1;
                    p2.score+=p2.point;
                    cout<<"\n"<<p2.name<<" got "<<p2.point;
                    p2.score=p2.check(p2.score);
                    cout<<"\n\t Your current score:"<<p2.score;
                    if(p1.score>=100)
                    {
                        cout<<"\n\t\t\t\t\t"<<p1.name<<" is the %%WINNER%%";
                        exit(0);
                    }
                    else if(p2.score>=100)
                    {
                        cout<<"\n\t\t\t\t\t"<<p2.name<<" is the %%WINNER%%";
                        exit(0);
                    }

                    cout<<"\n\t\tAre you ready for the next chance??";
                    cin>>ch;
                    system("clear");
                    matrix();cout<<"\n";
                }


            }
            else
            {

                    cout<<"\n************You have to wait till you get 1 to start playing*********\n";
            }


                cout<<"\n\t\tAre you both ready for the next chance??";
            cin>>ch;
            system("clear");
                matrix();cout<<"\n";
        }
        }


    }
    while((p1.point!=1)&&(p2.point==1))
    {
         while(p2.score<=100)
            {

                cout<<"\n\t\tAre you ready to throw the dice??";
            cin>>ch;
            system("clear");
                matrix();cout<<"\n";
            while((ch=='y')||ch=='Y')
            {
                cout<<"\n"<<p2.name<<" got ";
                p2.point= rand()%6+1;
                cout<<p2.point;
                p2.score+=p2.point;
                p2.score=p2.check(p2.score);
                cout<<"\n\tCurrent score="<<p2.score;

            if(p2.score>=100)
            {
                cout<<"\n\t\t\t\t\t"<<p2.name<<" is the %%WINNER%%";
                exit(0);
            }
            p1.point=rand()%6+1;
            cout<<p1.name<<" got "<<p1.point;
            if(p1.point==1)
            {
                cout<<"\n\t\t*************WOW!!!"<<p1.name<<" entered the board....*************\n";
                while((p1.score<=100)&&(p1.score<=100))
                {
                    p1.point=rand()%6+1;
                    p1.score+=p1.point;
                    cout<<"\n"<<p1.name<<" got "<<p1.point;
                    p1.score=p1.check(p1.score);
                    cout<<"\n\t Your current score:"<<p1.score;

                    p2.point=rand()%6+1;
                    p2.score+=p2.point;
                    cout<<"\n"<<p2.name<<" got "<<p2.point;
                    p2.score=p2.check(p2.score);
                    cout<<"\n\t Your current score:"<<p2.score;
                    if(p1.score>=100)
                    {
                        cout<<"\n\t\t\t\t\t"<<p1.name<<" is the %%&&WINNER&&%%";
                        exit(0);
                    }
                    else if(p2.score>=100)
                    {
                        cout<<"\n\t\t\t\t\t"<<p2.name<<" is the %%WINNER%%";
                        exit(0);
                    }

                    cout<<"\n\t\tAre you both ready for the next chance";
                    cin>>ch;
                    system("clear");
                    matrix();cout<<"\n";
                }


            }
            else
            {

                    cout<<"\n*************You have to wait till you get 1 to start playing**********\n";
            }

                cout<<"\n\t\tAre you both ready for the next chance??";
            cin>>ch;
            system("clear");
                matrix();cout<<"\n";
        }
        }


    }
    }
}
int player :: check(int score)
{
    switch(score)
    {
        case 23:score=5;
            cout<<"\n\t\/\/\/\/\/\/\% Ooops!!!!A snake caught you.You are going to "<<score<<"%\/\/\/\/\/\/\/\/";
            break;
        case 35:score=29;
            cout<<"\/\/\/\/\/\/\o Ooops!!!!A snake caught you.You are going to "<<score<<"o/\/\/\/\/\/\/\/\/";
            break;
        case 67:score=21;
            cout<<"\/\/\/\/\/\/\o Ooops!!!!A snake caught you.You are going to "<<score<<"o/\/\/\/\/\/\/\/\/";
            break;
        case 85:score=68;
            cout<<"\/\/\/\/\/\/\o Ooops!!!!A snake caught you.You are going to "<<score<<"o/\/\/\/\/\/\/\/\/";
            break;
        case 95:score=15;
            cout<<"\/\/\/\/\/\/\o Ooops!!!!A snake caught you.You are going to "<<score<<"o/\/\/\/\/\/\/\/\/";
            break;
        case 25:score=47;
            cout<<"\n\tH";
            cout<<"\n\tH WOW!!!!You got a ladder to "<<score;
            cout<<"\n\tH";
            break;
        case 30:score=52;
            cout<<"\n\tH";
            cout<<"\n\tH WOW!!!!You got a ladder to "<<score;
            cout<<"\n\tH";
            break;
        case 65:score=91;
            cout<<"\n\tH";
            cout<<"\n\tH WOW!!!!You got a ladder to "<<score;
            cout<<"\n\tH";
            break;
        case 75:score=87;
            cout<<"\n\tH";
            cout<<"\n\tH WOW!!!!You got a ladder to "<<score;
            cout<<"\n\tH";
            break;

    }

    return score;
}
void disp(int i)
 {
        switch(i)
        {
        case 23:
        case 5:cout<<setw(7)<<"*S1*";
                break;
        case 35:
        case 29:cout<<setw(7)<<"*S2*";
                break;
        case 67:
        case 21:cout<<setw(7)<<"*S3*";
                break;
        case 85:
        case 68:cout<<setw(7)<<"*S4*";
                break;
        case 95:
        case 15:cout<<setw(7)<<"*S5*";
                break;
        case 25:
        case 47:cout<<setw(7)<<"*L1*";
                break;
        case 30:
        case 52:cout<<setw(7)<<"*L2*";
                break;
        case 65:
        case 91:cout<<setw(7)<<"*L3*";
                break;
        case 75:
        case 87:cout<<setw(7)<<"*L4*";
                break;
        default:
                cout<<setw(7)<<i;
    }
}
void matrix()
{
    for(int i=100;i>=91;--i)
        disp(i);
    cout<<"\n";
    for(int i=81;i<=90;++i)
        disp(i);
    cout<<"\n";
    for(int i=80;i>=71;--i)
        disp(i);
    cout<<"\n";
    for(int i=61;i<=70;++i)
        disp(i);
    cout<<"\n";
    for(int i=60;i>=51;--i)
        disp(i);
    cout<<"\n";
    for(int i=41;i<=50;++i)
        disp(i);
    cout<<"\n";
    for(int i=40;i>=31;--i)
        disp(i);
    cout<<"\n";
    for(int i=21;i<=30;++i)
        disp(i);
    cout<<"\n";
    for(int i=20;i>=11;--i)
        disp(i);
    cout<<"\n";
    for(int i=1;i<=10;++i)
        disp(i);
}



int main()
{
    player p1,p2;
    cout<<"\n\n\t\t\tWELCOME TO SNAKE AND LADDER GAME :)\n";
    matrix();cout<<"\n";
    cout<<"\nEnter Player 1 details:\n";
    p1.getname();
    cout<<"\nEnter Player 2 details:\n";
    p2.getname();
    start(p1,p2);
}
