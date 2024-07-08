#include <iostream>

using namespace std;

int main(){

    int dice1, dice2, dice3, diceNum, prizeMoney;
    cin >> dice1 >> dice2 >> dice3;

    if(dice1==dice2 && dice2==dice3){
        diceNum = max(max(dice1, dice2),dice3);
        prizeMoney = 10000+diceNum*1000;
    }
    else if(dice1==dice2){
        diceNum = dice1;
        prizeMoney = 1000+(diceNum)*100;
    }
    else if(dice2==dice3){
        diceNum = dice2;
        prizeMoney = 1000+(diceNum)*100;
    }
    else if(dice1==dice3){
        diceNum = dice1;
        prizeMoney = 1000+(diceNum)*100;
    }
    else{
        diceNum = max(max(dice1,dice2),dice3);
        prizeMoney = diceNum*100;
    }

    cout << prizeMoney;

    return 0;
}