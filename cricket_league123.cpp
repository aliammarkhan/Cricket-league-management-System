#include<iostream>
#include<conio.h>
using namespace std;


class Cricket_League
{
	private:
		string name,city,country;
		int age;
		float prizemoney;
	public:
		void setprizepool(float money)
		{
		   prizemoney=money;
		}
		void setname(string Name)
		{
			name=Name;
		}
		void setcity(string City)
		{
			city=City;
		}
		void setcountry(string Country)
		{
			country=Country;
		}
		void setage(int Age)
		{
			age=Age;
		}
			float getprizepool()
		{
		    return prizemoney;
		}
		string getname()
		{
			return name;
		}
		string getcity()
		{
			return city;
		}
		string getcountry()
		{
			return country;
		}
		int getage()
		{
			return age;
		}
		void display()
		{
			cout<<endl;
			cout<<"Name of League:"<<name<<endl;
			cout<<"Prize pool:"<<prizemoney<<endl;
		}
		
};

class Franchise:public Cricket_League
{
	float budget;
	
	public:
		
		void setbudget(float Budget)
		{
			 budget=Budget;
			
		}

		float getbudget()
		{
			return budget;
		}
			void display(int i)
		{
			cout<<endl;
			cout<<"Franchise "<<i+1<<":"<<endl;
			cout<<"Name:"<<getname()<<endl;
			cout<<endl;
		}
	
};


class Owners:public Franchise
{
  public:
  	void set_teambudget(float Budget)
  	{
        setbudget(Budget);		
    }
    	void display(int i)
		{
			cout<<endl;
			cout<<"Owner "<<i+1<<":"<<endl;
			cout<<"Name:"<<getname()<<endl;
			cout<<"Budget:"<<getbudget()<<endl;
			cout<<endl;
		}
};


 class Sponsors:public Franchise
{
	public:
	void set_sponsorBudget(float Budget)
	{
		setbudget(Budget);
	}
	void display(int i)
		{
			cout<<endl;
				cout<<"Sponsor "<<i+1<<":"<<endl;
			cout<<"Name:"<<getname()<<endl;
			cout<<"Budget:"<<getbudget()<<endl;
			cout<<endl;
		}
};

class Team:public Owners
{
	private:
		int shirtno;
		float amount,experienceyears;
		string type;
  public:
  
  	void setno(int N)
  	{
  	  shirtno=N;
	}
		void display(int i)
		{
			cout<<endl;
				cout<<"Team "<<i+1<<":"<<endl;
			cout<<"Name:"<<getname()<<endl;
			cout<<endl;
		}

	void setamount(float Amount)
	{
		
		amount=Amount;
	}
		void settype(string Type)
   	{
   		type=Type;
   	}
   	 void setexp(float y)
	   {
	   	 
	   	  experienceyears=y;
	   }
	   int getno()
  	{
  	 return  shirtno;
	}
		
	float getamount()
	{
		
		return amount;
	}
		string gettype()
   	{
   		return type;
   	}
   	 float getexp()
	   {
	   	 
	   	 return experienceyears;
	   }
   		
   		
	
	
	
};

class player:public Team
{
	
float avg;
float eco;

   public:
   	
   	void setavg(float Avg)
   	{
   	    avg=Avg;	
	 }
  void seteco(float Eco)
   	{
   	    eco=Eco;	
	 }
	 void display(int i)
		{
			cout<<endl;
			cout<<"Player "<<i+1<<":"<<endl;
			cout<<"Type:"<<gettype()<<endl;
			cout<<"Name:"<<getname()<<endl;
			cout<<"age:"<<getage()<<endl;
			cout<<"Country:"<<getcountry()<<endl;
			cout<<"City:"<<getcity()<<endl;
			cout<<"Shirt number:"<<getno()<<endl;
           	cout<<"Average:"<<avg<<endl;
			cout<<"Economy:"<<eco<<endl;
			cout<<"Amount:"<<getamount()<<endl;
			cout<<"Experience(years):"<<getexp()<<endl;		
			cout<<endl;
		}
  };


class Management:public Cricket_League
{
	string xtype;
	
	public:
		void set_ManagementType(string Type)
		{
			xtype=Type;
		}
		 void display(int i)
		{
			cout<<endl;
			cout<<"Staff"<<i+1<<":"<<endl;
			 cout<<"Type:"<<xtype<<endl;
			cout<<"Name:"<<getname()<<endl;
			cout<<"age:"<<getage()<<endl;
			cout<<"Country:"<<getcountry()<<endl;
			cout<<"City:"<<getcity()<<endl;
		
			cout<<endl;
		}
};



int main()
{
	Cricket_League cl;
	Franchise *f;
	Owners *O;
	Team *t;
	player p[100];
	Sponsors s[100];
	Management m[100];
	
	string name,country,city,type;
	char ch;
	float budget,amount,experienceyears,eco,avg;
	int n,i=0,k=0,j=0,noOfplayers=0,age,shirtno,noOfSponsors=0
	,noOfStaff=0,noOfmStaff=0,no;
	
	
	cout<<"\t\tWelcome to Cricket leauge management system"<<endl;
	
	cout<<"Enter name of your league:";
	getline(cin,name);
	cl.setname(name);
	cout<<"Enter prize pool:";
	cin>>amount;
	cl.setprizepool(amount);
	amount=0;
	cout<<"How many Franchises your league has?";
	cin>>n;
	f=new Franchise[n];
	O=new Owners[n];
	t=new Team[n];
	no=n;
	cout<<"Enter name of Franchises:"<<endl;
    for(int i=0;i<n;i++)
    {
	cout<<"Franchise "<<i+1<<":";
	fflush(stdin);
getline(cin,name);
	f[i].setname(name);
	cout<<"Owner "<<i+1<<":";
   getline(cin,name);
	O[i].setname(name);
	cout<<"Budget:";
	cin>>budget;
	O[i].set_teambudget(budget);
	cout<< "Team " <<i+1<<":";
		fflush(stdin);
	   getline(cin,name);
	t[i].setname(name);

	
	
    }
    system("cls");
  
    
    while(1)
{
	 
   cout<<"Options:"<<endl;
   cout<<"1.Add Players:"<<endl;	
   cout<<"2.Add Sponsors:"<<endl;
   cout<<"3.Add Management Staff:"<<endl;
   cout<<"4.Display:"<<endl;
   cout<<"5.Exit:"<<endl;
   ch=getche();
   
   if(ch=='1')
   {
   	  cout<<"How many Players you want to add?";
   	  cin>>n;
   	  for(i=i;i<noOfplayers+n;i++)
   	  {
   	  	cout<<"For Player "<<i+1<<":"<<endl;
   	  	fflush(stdin);
   	  	cout<<"Enter Name:";
   	   getline(cin,name);
   	  	p[i].setname(name);
   	  	cout<<"Enter Age:";
   	  	cin>>age;
   	  	p[i].setage(age);
   	  	cout<<"Enter country:";
   	  	cin>>country;
   	  	p[i].setcountry(country);
   	  	cout<<"Enter City:";
   	  	cin>>city;
   	  	p[i].setcity(city);
   	  	cout<<"Enter amount:";
   	  	cin>>amount;
   	  	p[i].setamount(amount);
   	  	cout<<"Enter Type(Bowler/Batsman/All Rounder):";
   	  	cin>>type;
   	  	p[i].settype(type);
   	  	cout<<"Enter Batting Average:";
   	  	cin>>avg;
   	  	p[i].setavg(avg);
   	  	cout<<"Enter bowling economy:";
   	  	cin>>eco;
   	  	p[i].seteco(eco);
   	  	cout<<"Enter Shirt no:";
   	  	cin>>shirtno;
   	  	p[i].setno(shirtno);
   	  	cout<<"Enter Experience(in years):";
   	  	cin>>experienceyears;
   	  	p[i].setexp(experienceyears);
   	  	}
	  noOfplayers=noOfplayers+n; 
	  n=0;
	  system("cls");
        }
       else  if(ch=='2')
        {
        	  cout<<"How many sponsors you want to add:";
        	  cin>>n; noOfSponsors;
              for(j=j;j<noOfSponsors+n;j++)
              {
                cout<<"For Sponsor "<<j+1<<":"<<endl;
              	 cout<<"Enter name of sponsors:";
              	 cin>>name;
              	 s[i].setname(name);
              	 cout<<"Enter sponsors budget:";
              	 cin>>budget;
              	 s[i].set_sponsorBudget(budget);
			  }
			  noOfSponsors=noOfSponsors+n; 
			  n=0;
			  system("cls");
        	  
        	}
        	else if(ch=='3')
        	{
        		 cout<<"How many Staff members you want to add?";
   	  cin>>n;
   	  for(k=k;k<noOfStaff+n;k++)
   	  {
   	  	cout<<"For Staff Member "<<k+1<<":"<<endl;
   	  	fflush(stdin);
   	  	cout<<"Enter Name:";
   	   getline(cin,name);
   	  	m[i].setname(name);
   	  	cout<<"Enter Age:";
   	  	cin>>age;
   	  	m[i].setage(age);
   	  	cout<<"Enter country:";
   	  	cin>>country;
   	  	m[i].setcountry(country);
   	  	cout<<"Enter City:";
   	  	cin>>city;
   	  	m[i].setcity(city);
   	  
   	  	cout<<"Enter Type(Coach/Medical/Management):";
   	  	cin>>type;
   	  	m[i].set_ManagementType(type);
   	  	
   	  	}
      noOfStaff=noOfStaff+n; 
	  n=0;
	  system("cls");
			}
			else if(ch=='4')
			{
				  system("cls");
				cl.display();
				
				for(int l=0;l<no;l++)
				{
					f[l].display(l);
					
				}
				for(int l=0;l<no;l++)
				{
					t[l].display(l);
					
				}
				for(int l=0;l<no;l++)
				{
					O[l].display(l);
					
				}
				for(int l=0;l<j;l++)
				{
					s[l].display(l);
					
				}
			
				for(int l=0;l<i;l++)
				{
					p[l].display(l);
					
				}
					for(int l=0;l<i;l++)
				{
					m[l].display(l);
					
				}
				
				
				
			}
			else if(ch=='4')
			break;
			else
			cout<<"Enter a valid option !"<<endl;
        	
}	
	
	
	return 0;
}
