#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	int i,x;
	queue<int>q1;
	queue<int>q2;
    	vector<int>numb={1,2,3,4,5,6,7,8,9,10};
	for(i=1; i<=10; i++){
		if(numb[i]%2==0){
			q1.push(i);
		}
		else{
			q2.push(i);
		}
	}
	cout<<"Первый элемент очереди с четными цифрами:  ";
	cout<<q2.front()<<"\n";
	cout<<"Последний элемент очереди с четными цифрами:";
	cout<<q2.back()<<"\n\n";
	cout<<"Первый элемент очереди с нечетными цифрами:  ";
	cout<<q1.front()<<"\n";
	cout<<"Последний элемент очереди с нечетными цифрами: ";
	cout<<q1.back()<<"\n";
	return 0;
}
