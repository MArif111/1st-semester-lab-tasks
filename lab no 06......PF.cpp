#include<iostream>
using namespace std;
int main (){      	c                                     task no 04
	  
	  
	  
	  
	  int marks,Maths,PF,ICT;
	  char grade;
	  cout<<"Enter your marks of maths:";
	  cin>> Maths;
	  cout<<"Enter your marks of PF:";
	  cin>> PF;
	  cout<<"Enter your marks of ICT:";
	  cin>> ICT;
	  double TotalMarks=PF+ICT+Maths;
	  cout<<"\n"<<TotalMarks<<endl;
	  double percentage=(TotalMarks/300)*100;
	  cout<<percentage<<endl;
	  
	  if(percentage>=90)
	  { grade='A';
	  	cout<<grade;}
	  else if((percentage>=80)&&(percentage<90))
	  { grade='B';
	  	cout<<grade;}
	  else if((percentage>=70)&&(percentage<80))
	  	  {grade='C';
		cout<<grade;}
	  else if((percentage>=60)&&(percentage<70))
	  {grade='D';
	  	cout<<grade;}
	  else {
	  	grade='F';
	  	cout<<grade;
	  }
	  if(grade=='F'){
	  	return 0;
	  }
	if((grade=='A')&&(TotalMarks>=270))
	  cout<<"yes";
	 
	  return 0;
	   }


