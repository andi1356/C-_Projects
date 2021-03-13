/* A group of work friends at Amazon is playing a competitive video game together. During the game, each player receives a certain amount of points based on their performance. At the end of a round, players who achieve at least a cutoff rank get to "level up" their character, gaining increased abilities for them. Given the scores of the players at the end of the round, how many players will be able to level up their character?
* Note that players with equal scores will have equal ranks, but the player with the next lowest score will be ranked based on the position within the list of all players' scores. For example, if there are four players, and three players tie for first place, their ranks would be 1,1,1, and 4. Also, no player with a score of O can level up, no matter what their rank.
*Write an algorithm that returns the count of players able to level up their character.
*        Input
* The input to the function/method consists of three arguments:
* cutOffRank, an integer representing the cutoff rank for levelin up the player's character;
* num, an integer representing the total number of scores;
* scores, a list of integers representing the scores of the players.
*        Output
* Return an integer representing the number of players who will be able to level up their characters at the end of the round.
*
*	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/

#include <algorithm>
#include <iostream>

bool descending(int x,int y){
    return x>y;
}

int nextLevel(int cutOffRank, int num, int scores[]){
    if(num==cutOffRank){
        return num;
    }
    std::sort(scores,scores+num,descending);
    if(scores[0]==0){
        return 0;
    }
    int x[num],R=0;
    for(int i=0; i < num ; i++){
        if(scores[i]==scores[i+1] || scores[i]==scores[i-1]){
            x[i]=i+1; x[i+1]=i+1; ++i;
        }
        else
            x[i]=i+1;

    }
    // std::cout<<x[0]<<x[1]<<x[2]<<x[3];
    std::cout<<x[0]<<x[1]<<x[2]<<x[3]<<x[4];

    for(int i=cutOffRank-1; i<num-1; ++i){
        if(x[i]==x[i+1]){
            R=i+2;
        }
        else{
            R=i+1;
            break;
        }
    }
    return R;
}

int main(){
    int x1[4]={100,50,50,25};
    int x2[5]={1,2,3,3,5};
    int R=nextLevel(2,5,x2);
    std::cout<<"\n CutOffRank-ul este 2, dar trec: "<<R<<" jucatori.";

}
