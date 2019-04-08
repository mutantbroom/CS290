/*********************
**Program: as2.cpp
**Author Jonathan Beck
**Date: 21 January 2018
**Description: Text based adventure game that asks the user for 1 of 2 options on various situations
**Input: 1s and 2s from the user based on their choice
**Output: Text that lets them know where their choices brought them
*********************/

#include <iostream>
//libraries for generating randome number and making random seed
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	cout<<"You find yourself in the middle of the weight room. Your goal is to get noticeable gains and become swole. Your first choice is what you choose to do today. Press 1 for weights. Press 2 for cardio"<<endl;
	int choice1;
	cin>>choice1;
	//if they choose weights
	cout<<endl;
	if(choice1==1){
		cout<<"Good choice, that's the only real option if you plan on seeing any gains in the weight room. What are you gonna work out today?Press 1 for upper body. Press 2 for Legs."<<endl;
		int choice2;
		cin>>choice2;
		//if they choose upper body
		cout<<endl;
		if(choice2==1){
			cout<<"Good choice again, hitting upper body is the only thing way people will actually notice you work out. What muscle will you start working first? Press 1 for Biceps. Press 2 for Pectorals."<<endl;
			int choice3;
			cin>>choice3;
			//if they choose biceps
			cout<<endl;
			if(choice3==1){
				cout<<"Um...ok? You do a couple bicep workouts and other people in the gym start to notice that you've spent the entire time you've been at the gym working on biceps. This is your chance to switch up your workout so you can look like you know what you're doing. What will you work next? Press 1 for Biceps. Press 2 for Pectorals."<<endl;
				int choice4;
				cin>>choice4;
				//if they choose biceps again
				cout<<endl;
				if(choice4==1){
					cout<<"Wow, you're either a frat guy or have quite a bit of emotional baggage if you're so keen on hitting biceps that much. Your workout everday consists of just biceps and your friends start to get worried becuase they can notice your biceps are growing like balloonw, but the rest of your body isn't changing at all. People start getting concerned and set up interventions for your bicep problem. You ignore their concerns because who needs friends when you have biceps like that? For the rest of your life you have to avoid going near anything with an edge for fear of it popping your massive biceps. The End...I guess?"<<endl;
				//if they choose pecs for the last decision
				}else if(choice4==2){
					cout<<"Alright, it's good you have some restraint. You do your bicep and pec routine for the next couple of months, and while it's unconventinal, you do notice some gains agter a couple months and are ultimately successful in your goal"<<endl;
				}
			//if they choose pecs 
			}else if(choice3==2){
				cout<<"Excellent chouce to start with first, you oblivously know your stuff so I don't need to ask you for what you do after this. You slowly work all of your upper body over the course of a couple of months, and start to see small, but noticeable gains. After around 4 months any average person can tell that you lift, and that's all that matters, isn't it? Congratulations, you know how to workout properly and get swole."<<endl;
			}
		//if they choose legs
		}else if(choice2==2){
			cout<<"Legs!? Are you kidding me? You might as well do cardio since no one is going to actually notice or care that you work legs. You aren't a power lifter or a football player, so you should never be doing legs. Try again!"<<endl;
		}
	
	//if they choose cardio
	}else if(choice1==2){
		//makes random seed so choosing this option is truly random
		srand(time(NULL));
		//generates int that is either 1 or 2
		int random=rand()%2+1;		
		
		cout<<endl;
		if(random==1){
			cout<<"You do cardio and all your gains are lost! You can't expect to get swole off of running. Try again!"<<endl;
		}else if(random==2){
			cout<<"You start cardio, but thankfully your friend comes into the weight room and tackles you off the treadmill before you lose too many gains. He forces you to do his workout, which isn't the best, but is way better than cardio."<<endl;
		}
	}

	//program ends once it gets out of nested if statements, which also means if the user gives bad input, the program just ends.
	return 0;
}
