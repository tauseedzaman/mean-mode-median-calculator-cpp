#include<iostream>
using namespace std;
int main(){
	int arry[] = {1,2,3,4,5,6,7,8,9,4,5,4};
	int arrysize  = sizeof(arry)/sizeof(arry[0]);
	//print all values
	for(int i = 0; i < arrysize; i++){
		cout<<"\narry["<<i<<"]"<<" = "<<arry[i]<<endl;
	}
	//find mode
	/*
	*	Mode is the most occured number in the list.
	*/
	cout<<"\nMode : ";
	int max_occured_num = 0;
	for(int i = 0; i < arrysize; i++)
	{
		int count = 1;
		for(int j = i+1; j < arrysize; j++)
		{
			if(arry[i] == arry[j])
			{
				count++;
			}
		}
		if(count > max_occured_num)
		{
			max_occured_num = count;
		}
	}
	for(int i = 0; i < arrysize; i++)
	{
		int count = 1;
		for(int j = i+1; j < arrysize; j++)
		{
			if(arry[i] == arry[j])
			{
				count++;
			}
		}
		if(max_occured_num==count)
		{
			cout<<arry[i];
		}
	
	}
	
	// find mean
	/*
	* Mean is the average of the values given in the list
	*/
	int mean = 0;
	for(int i =0; i < arrysize;i++){
		mean += arry[i];
	}
	cout<<"\nMean: "<<mean/arrysize;
	
	//find median
	/*
	* Median is the middle value of the list
	*/
	int x = arrysize/2;
	cout<<"\nMedian :"<<arry[x];
}
