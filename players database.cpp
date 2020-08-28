#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
class Players
{
	private:
		 string id,name,type,country,age, salary;
	public:
	void display()
	{

		ifstream out;
		out.open("cricket_players.txt");
		while(!out.eof())
		   {
		      getline(out,id); 
		  
		  	  getline(out,name);
		      getline(out,age);
		      getline(out,type);
		      getline(out,country);
		      getline(out,salary);
		       if(!out.eof())
			  {
			  
			  cout<<"\n\nID:"<<id<<endl;
			  cout<<"Name:"<<name<<endl;
			  cout<<"Age:"<<age<<endl;
			  cout<<"Country:"<<country<<endl;
			  cout<<"Type:"<<type<<endl;
			  cout<<"Salary:"<<salary<<endl;
			  cout<<endl;
	         	}
			  }
		out.close();
		}
	
};
class Team:public Players
{
        public:
		virtual void addplayers(int n)=0;
		virtual void display()=0;
	
};

class Karachi:public Team
{


	public:
		void addplayers(int n)
		{
		 string Id,Name,Type,Country,Age, Salary;
		 int count=0;
			
			ifstream out1;
			out1.open("cricket_players.txt");
			ofstream in1;
			in1.open("Karachi_players.txt",ios::app);
		
		
		   
		    
		     while(!out1.eof())
		     {
			 
		      getline(out1,Id); 
		      count++;
		      getline(out1,Name);
		      getline(out1,Age);
		      getline(out1,Type);
		      getline(out1,Country);
		      getline(out1,Salary);
		      
		     
			 
			 if(!out1.eof())
			 {
			  
			  if(count==n)
			  {
			  
			  in1<<Id<<endl;
		      in1<<Name<<endl;
		      in1<<Age<<endl;
		      in1<<Country<<endl;
		      in1<<Type<<endl;
		      in1<<Salary<<endl;
	          }
		      
		      }
		     
		   }
		   out1.close();
		   in1.close();
	}
	void display()
	{
		string s1,s2,s3,s4,s5,s6;
		ifstream temp1;
		temp1.open("Karachi_players.txt");
		
		 
		  	  
		   while(!temp1.eof())
		   {
		      getline(temp1,s1); 
		  
		  	  getline(temp1,s2);
		      getline(temp1,s3);
		      getline(temp1,s4);
		      getline(temp1,s5);
		      getline(temp1,s6);
		      
		      
		      
			  if(!temp1.eof())
			  {
			  
			  cout<<"\n\nID:"<<s1<<endl;
			  cout<<"Name:"<<s2<<endl;
			  cout<<"Age:"<<s3<<endl;
			  cout<<"Country:"<<s4<<endl;
			  cout<<"Type:"<<s5<<endl;
			  cout<<"Salary:"<<s6<<endl;
			  cout<<endl;
	         	}
			  
		
		
	} 
	  temp1.close();
		}
		
};
		
class Lahore:public Team
{


	public:
		void addplayers(int n)
		{
		 string Id,Name,Type,Country,Age, Salary;
		 int count=0;
			
			ifstream out1;
			out1.open("cricket_players.txt");
			ofstream in1;
			in1.open("Lahore_players.txt",ios::app);
		
		
		   
		    
		     while(!out1.eof())
		     {
			 
		      getline(out1,Id); 
		      count++;
		      getline(out1,Name);
		      getline(out1,Age);
		      getline(out1,Type);
		      getline(out1,Country);
		      getline(out1,Salary);
		      
		     
			 
			 if(!out1.eof())
			 {
			  
			  if(count==n)
			  {
			  
			  in1<<Id<<endl;
		      in1<<Name<<endl;
		      in1<<Age<<endl;
		      in1<<Country<<endl;
		      in1<<Type<<endl;
		      in1<<Salary<<endl;
	          }
		      
		      }
		     
		   }
		   out1.close();
		   in1.close();
	}
		void display()
	{
		string s1,s2,s3,s4,s5,s6;
		ifstream temp1;
		temp1.open("Lahore_players.txt");
		
		 
		  	  
		   while(!temp1.eof())
		   {
		      getline(temp1,s1); 
		  
		  	  getline(temp1,s2);
		      getline(temp1,s3);
		      getline(temp1,s4);
		      getline(temp1,s5);
		      getline(temp1,s6);
		      
		      
		      
			  if(!temp1.eof())
			  {
			  
			  cout<<"\n\nID:"<<s1<<endl;
			  cout<<"Name:"<<s2<<endl;
			  cout<<"Age:"<<s3<<endl;
			  cout<<"Country:"<<s4<<endl;
			  cout<<"Type:"<<s5<<endl;
			  cout<<"Salary:"<<s6<<endl;
			  cout<<endl;
	         	}
			  
		
		
	}
	temp1.close();
		}
		
		};
	class Peshawar:public Team
{


     	public:
		void addplayers(int n)
		{
		 string Id,Name,Type,Country,Age, Salary;
		 int count=0;
			
			ifstream out1;
			out1.open("cricket_players.txt");
			ofstream in1;
			in1.open("Peshawar_players.txt",ios::app);
		
		
		   
		    
		     while(!out1.eof())
		     {
			 
		      getline(out1,Id); 
		      count++;
		      getline(out1,Name);
		      getline(out1,Age);
		      getline(out1,Type);
		      getline(out1,Country);
		      getline(out1,Salary);
		      
		     
			 
			 if(!out1.eof())
			 {
			  
			  if(count==n)
			  {
			  
			  in1<<Id<<endl;
		      in1<<Name<<endl;
		      in1<<Age<<endl;
		      in1<<Country<<endl;
		      in1<<Type<<endl;
		      in1<<Salary<<endl;
	          }
		      
		      }
		     
		   }
		   out1.close();
		   in1.close();
	}
		void display()
	{
		string s1,s2,s3,s4,s5,s6;
		ifstream temp1;
		temp1.open("Peshawar_players.txt");
		
		 
		  	  
		   while(!temp1.eof())
		   {
		      getline(temp1,s1); 
		  
		  	  getline(temp1,s2);
		      getline(temp1,s3);
		      getline(temp1,s4);
		      getline(temp1,s5);
		      getline(temp1,s6);
		      
		      
		      
			  if(!temp1.eof())
			  {
			  
			  cout<<"\n\nID:"<<s1<<endl;
			  cout<<"Name:"<<s2<<endl;
			  cout<<"Age:"<<s3<<endl;
			  cout<<"Country:"<<s4<<endl;
			  cout<<"Type:"<<s5<<endl;
			  cout<<"Salary:"<<s6<<endl;
			  cout<<endl;
	         	}
			  
		
		
	}
	temp1.close();
		}
	};
			
class Quetta:public Team
{

        public:
		void addplayers(int n)
		{
		 string Id,Name,Type,Country,Age, Salary;
		 int count=0;
			
			ifstream out1;
			out1.open("cricket_players.txt");
			ofstream in1;
			in1.open("Quetta_players.txt",ios::app);
		
		
		   
		    
		     while(!out1.eof())
		     {
			 
		      getline(out1,Id); 
		      count++;
		      getline(out1,Name);
		      getline(out1,Age);
		      getline(out1,Type);
		      getline(out1,Country);
		      getline(out1,Salary);
		      
		     
			 
			 if(!out1.eof())
			 {
			  
			  if(count==n)
			  {
			  
			  in1<<Id<<endl;
		      in1<<Name<<endl;
		      in1<<Age<<endl;
		      in1<<Country<<endl;
		      in1<<Type<<endl;
		      in1<<Salary<<endl;
	          }
		      
		      }
		      
		     
		   }
		   out1.close();
		   in1.close();
	}
		void display()
	{
		string s1,s2,s3,s4,s5,s6;
		ifstream temp1;
		temp1.open("Quetta_players.txt");
		
		 
		  	  
		   while(!temp1.eof())
		   {
		      getline(temp1,s1); 
		  
		  	  getline(temp1,s2);
		      getline(temp1,s3);
		      getline(temp1,s4);
		      getline(temp1,s5);
		      getline(temp1,s6);
		      
		      
		      
			  if(!temp1.eof())
			  {
			  
			  cout<<"\n\nID:"<<s1<<endl;
			  cout<<"Name:"<<s2<<endl;
			  cout<<"Age:"<<s3<<endl;
			  cout<<"Country:"<<s4<<endl;
			  cout<<"Type:"<<s5<<endl;
			  cout<<"Salary:"<<s6<<endl;
			  cout<<endl;
	         	}
			  
}
}

};
	
int main()
{
string s;
int ch;
int n;
	Players obj;
	Karachi khi;
	Lahore lhr;
	Quetta qt;
	Peshawar kpk;
	
	cout<<"Options:"<<endl<<endl;
	
	while(1)
	{
		system("cls");
		cout<<"1.Show all players of league:"<<endl;
		cout<<"2.Choose Karachi"<<endl;
		cout<<"3.Choose Lahore"<<endl;
		cout<<"4.Choose Peshawar"<<endl;
		cout<<"5.Choose Quetta"<<endl;
		cout<<"6.Exit"<<endl;
		cin>>ch;
		 if(ch==1)
		 {
		 	system("cls");
		 	obj.display();
		 	system("pause");
		 }
		 else if(ch==2)
		 {
		 	system("cls");
		 	cout<<"1.ADD players"<<endl;
		 	cout<<"2.Show players"<<endl;
		 	cin>>ch;
		 	if(ch==1)
		 	{ system("cls");
		 	cout<<"Enter id of player you want to add:";
		 	 cin>>n;
		 	 khi.addplayers(n);
		 	  	
			}
			else if(ch==2)
			{
				system("cls");
				khi.display();
				system("pause");
			}
		}
			 else if(ch==3)
		 {
		 	system("cls");
		 	cout<<"1.ADD players"<<endl;
		 	cout<<"2.Show players"<<endl;
		 	cin>>ch;
		 	if(ch==1)
		 	{ 
		 		system("cls");
		 	cout<<"Enter id of player you want to add:";
		 	 cin>>n;
		 	 lhr.addplayers(n);
		 	  	
			}
			else if(ch==2)
			{
				system("cls");
				lhr.display();
				system("pause");
			}
		}
	
		 else if(ch==4)
		 {
		 		system("cls");
		 	cout<<"1.ADD players"<<endl;
		 	cout<<"2.Show players"<<endl;
		 		cin>>ch;
		 	if(ch==1)
		 	{ 
		 	   system("cls");
		 	cout<<"Enter id of player you want to add:";
		 	 cin>>n;
		 	 kpk.addplayers(n);
		 	  	
			}
			else if(ch==2)
			{
				system("cls");
				kpk.display();
				system("pause");
			}
		}
			 else if(ch==5)
		 {
		 		system("cls");
		 	cout<<"1.ADD players"<<endl;
		 	cout<<"2.Show players"<<endl;
		 		cin>>ch;
		 	if(ch==1)
		 	{ 	system("cls");
		 	cout<<"Enter id of player you want to add:";
		 	 cin>>n;
		 	 qt.addplayers(n);
		 	  	
			}
			else if(ch==2)
			{
					system("cls");
				qt.display();
				system("pause");
			}
		}
		else if(ch==6)
		break;
	
	
	
			
		 	
		 	
		 }
		
		
		
	}
	


