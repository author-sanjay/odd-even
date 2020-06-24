#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    cout<<"Let's Play Odd-Even";
    int user_number,toss,user_score=0,comp_score=0, user_batting,comp_num,user_bowling;
    int Choose;
    cout<<"Odd or even?";
    cin>>user_number;

  //toss

    toss=user_number+random(10);
    if(toss%2==0 && user_number%2==0)
    {
        cout<<"Choose batting or bawlling, Enter 1 for Batting and 2 for Bowling";
        cin>>Choose;

    }
    else
    {
        cout<<"You loose the toss, the computer Choose to bat first";
    }
    // user playing the game
    
    if(strcmpi(Choose,"batting"))
    {
        while(user_batting!=comp_num)
        {
            cin>>user_batting;
            comp_num=random(10);
            if(user_batting==comp_num){
                cout<<"You are Out";
                break;
            }
            else{
                user_score=user_score+user_batting;
            }
        }
    }
    else
    {
        while(user_bowling!=comp_num)
        {
            cin>>user_bowling;
            comp_num=random(10);
            if(user_bwoling==comp_num){
                cout<<"I am Out";
                break;
            }
            else{
                comp_score=comp_score+comp_num;
            }
        }
    }
    cout<<"computer score"<<comp_score;
    cout<<"Your score"<<user_score;
    if(comp_score==user_score)
    {
        cout<<"its a draw";
    } 
    elseif(comp_score>user_score)
    {
        cout<<"computer Wins";
    
    }
    else
    {
        cout<<"You Win";
    }
    getch();
}






