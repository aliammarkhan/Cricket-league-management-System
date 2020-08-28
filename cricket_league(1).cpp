#include<iostream>
#include<conio.h>
using namespace std;


class Cricket_League   //Abstract class
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
		void info_league()
			{
			cout<<endl;
			cout<<"Name of League:"<<name<<endl;
			cout<<"Prize pool:"<<prizemoney<<endl;
		   }
		
		virtual void display(int)=0;  //pure virtual function
		virtual  ~Cricket_League()=0;  //pure virtual destructor
	    
};
Cricket_League:: ~Cricket_League(){  }

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
		~Franchise(){}
	
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
			~Owners(){}
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
			~Sponsors(){}
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
	   
	   	~Team(){}
   		
   		
	
	
	
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
			~player(){}
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
			~Management(){}
};



int main()
{
	Cricket_League *cl,*cl1;
	Franchise *f,f1;
	Owners *O;
	Team *t;
	player *p=new player[100];
	Sponsors *s=new Sponsors[100];
	Management *m=new Management[100];

	
	cl=&f1;   //assigning address of derived object to Base pointer
	
	string st;
	char ch;
	float fl;
	int n=0,i=0,k=0,j=0,noOfplayers=0,noOfSponsors=0
	,noOfStaff=0,noOfmStaff=0,no,x,a;
	
	
	cout<<"\t\tWelcome to Cricket leauge management system"<<endl;
	
	cout<<"Enter name of your league:";
	getline(cin,st);
	cl->setname(st);
	cout<<"Enter prize pool:";
	cin>>fl;
	cl->setprizepool(fl);
	fl=0;
	while(1)
	{
	cout<<"How many Franchises your league has?";
	cin>>n;
	if(n!=0)
	break;
	else
	cout<<"\nPlease enter number of Franchises"<<endl;
    }
	f=new Franchise[n];
	O=new Owners[n];
	t=new Team[n];
	no=n;
	cout<<"Enter name of Franchises:"<<endl;
    for(int i=0;i<n;i++)
    {
	cout<<"Franchise "<<i+1<<":";
	fflush(stdin);
getline(cin,st);
	f[i].setname(st);
	cout<<"Owner "<<i+1<<":";
   getline(cin,st);
	O[i].setname(st);
	cout<<"Budget:";
	cin>>fl;
	O[i].set_teambudget(fl);
	cout<< "Team " <<i+1<<":";
		fflush(stdin);
	   getline(cin,st);
	t[i].setname(st);

	
	
    }

  
    
    while(1)    //Menu
{
		system("cls");
	cout<<endl<<endl; 
   cout<<"Options:"<<endl;
   cout<<"1.Add Players:"<<endl;	
   cout<<"2.Add Sponsors:"<<endl;
   cout<<"3.Add Management Staff:"<<endl;
   cout<<"4.Edit:"<<endl;
   cout<<"5.Display:"<<endl;
   cout<<"6.Exit:"<<endl;
   ch=getche();
   
   if(ch=='1')
   {
   	system("cls");
   	  cout<<"How many Players you want to add?";
   	  cin>>n;
   	  for(i=i;i<noOfplayers+n;i++)
   	  {
   	  	cout<<"For Player "<<i+1<<":"<<endl;
   	  	fflush(stdin);
   	  	cout<<"Enter Name:";
   	   getline(cin,st);
   	  	p[i].setname(st);
   	  	cout<<"Enter Age:";
   	  	cin>>x;
   	  	p[i].setage(x);
   	  	cout<<"Enter country:";
   	  	cin>>st;
   	  	p[i].setcountry(st);
   	  	cout<<"Enter City:";
   	  	cin>>st;
   	  	p[i].setcity(st);
   	  	cout<<"Enter amount:";
   	  	cin>>fl;
   	  	p[i].setamount(fl);
   	  	cout<<"Enter Type(Bowler/Batsman/All Rounder):";
   	  	fflush(stdin);
   	  	getline(cin,st);
   	  	p[i].settype(st);
   	  	cout<<"Enter Batting Average:";
   	  	cin>>fl;
   	  	p[i].setavg(fl);
   	  	cout<<"Enter bowling economy:";
   	  	cin>>fl;
   	  	p[i].seteco(fl);
   	  	cout<<"Enter Shirt no:";
   	  	cin>>x;
   	  	p[i].setno(x);
   	  	cout<<"Enter Experience(in years):";
   	  	cin>>fl;
   	  	p[i].setexp(fl);
   	  	}
	  noOfplayers=noOfplayers+n; 
	  n=0;
	  system("cls");
        }
       else  if(ch=='2')
        {
		system("cls");
        	  cout<<"How many sponsors you want to add:";
        	  cin>>n; 
              for(j=j;j<noOfSponsors+n;j++)
              {
                cout<<"For Sponsor "<<j+1<<":"<<endl;
              	 cout<<"Enter name of sponsors:";
              	 fflush(stdin);
              	 getline(cin,st);
            
              	 s[j].setname(st);
              	 cout<<"Enter sponsors budget:";
              	 cin>>fl;
              	 s[j].set_sponsorBudget(fl);
			  }
			  noOfSponsors=noOfSponsors+n; 
			  n=0;
			  system("cls");
        	  
        	}
        	else if(ch=='3')
        	{
        		system("cls");
        		 cout<<"How many Staff members you want to add?";
   	  cin>>n;
   	  for(k=k;k<noOfStaff+n;k++)
   	  {
   	  	cout<<"For Staff Member "<<k+1<<":"<<endl;
   	  	fflush(stdin);
   	  	cout<<"Enter Name:";
   	   getline(cin,st);
   	  	m[k].setname(st);
   	  	cout<<"Enter Age:";
   	  	cin>>x;
   	  	m[k].setage(x);
   	  	cout<<"Enter country:";
   	  	cin>>st;
   	  	m[k].setcountry(st);
   	  	cout<<"Enter City:";
   	  	cin>>st;
   	  	m[k].setcity(st);
   	  
   	  	cout<<"Enter Type(Coach/Medical/Management):";
   	  	cin>>st;
   	  	m[k].set_ManagementType(st);
   	  	
   	  	}
      noOfStaff=noOfStaff+n; 
	  n=0;
	  system("cls");
			}
			
			else if(ch=='4')
         {
         	system("cls");
         	while(1)
         	{
         		cout<<endl;
         		system("cls");
         		
         	    cout<<"1-Edit Players\n2-Edit Staff\n3-Edit Sponsors\n4-Exit\n"<<endl;
				 cin>>ch;
				 if(ch=='1')
				 {
				 	system("cls");
				 	cout<<"Enter Player no you want to edit:";
				 	cin>>x;
				 	if(p[x-1].getname()=="\0")
				 	{
				 		cout<<"There is no player in this position!!"<<endl;
				 		system("pause");
				 			continue;
				 			
					 
					}
				 
				 	
			
		cout<<"Enter Name:";
		fflush(stdin);
   	   getline(cin,st);
   	  	p[x-1].setname(st);
   	  	cout<<"Enter Age:";
   	  	cin>>a;
   	  	p[x-1].setage(a);
   	  	cout<<"Enter country:";
   	  	cin>>st;
   	  	p[x-1].setcountry(st);
   	  	cout<<"Enter City:";
   	  	cin>>st;
   	  	p[x-1].setcity(st);
   	  	cout<<"Enter amount:";
   	  	cin>>fl;
   	  	p[x-1].setamount(fl);
   	  	cout<<"Enter Type(Bowler/Batsman/All Rounder):";
   	  	cin>>st;
   	  	p[x-1].settype(st);
   	  	cout<<"Enter Batting Average:";
   	  	cin>>fl;
   	  	p[x-1].setavg(fl);
   	  	cout<<"Enter bowling economy:";
   	  	cin>>fl;
   	  	p[x-1].seteco(fl);
   	  	cout<<"Enter Shirt no:";
   	  	cin>>a;
   	  	p[x-1].setno(a);
   	  	cout<<"Enter Experience(in years):";
   	  	cin>>fl;
   	  	p[x-1].setexp(fl);
			}
			else if(ch=='2')
			{
				system("cls");
					cout<<"Enter staff no you want to edit:";
				 	cin>>x;
				 	if(m[x-1].getname()=="\0")
				 	{
				 		cout<<"There is no staff member in this position!!"<<endl;
				 		system("pause");
				 			continue;
					}
					fflush(stdin);
   	  	cout<<"Enter Name:";
   	   getline(cin,st);
   	  	m[x-1].setname(st);
   	  	cout<<"Enter Age:";
   	  	cin>>a;
   	  	m[x-1].setage(a);
   	  	cout<<"Enter country:";
   	  	cin>>st;
   	  	m[x-1].setcountry(st);
   	  	cout<<"Enter City:";
   	  	cin>>st;
   	  	m[x-1].setcity(st);
   	  
   	  	cout<<"Enter Type(Coach/Medical/Management):";
   	  	cin>>st;
   	  	m[x-1].set_ManagementType(st);
					
				
			}
			else if(ch=='3')
			{
				system("cls");
						cout<<"Enter sponsor no you want to edit:";
				 	cin>>x;
				 	if(s[x-1].getname()=="\0")
				 	{
				 		cout<<"There is no sponsor  in this position!!"<<endl;
				 		system("pause");
				 			continue;
					}
					cout<<"Enter name of sponsors:";
              	 cin>>st;
              	 s[x-1].setname(st);
              	 cout<<"Enter sponsors budget:";
              	 cin>>fl;
              	 s[x-1].set_sponsorBudget(fl);
				
			}
			else if(ch=='4')
			break;
			else
			{
			
			cout<<"Enter a Valid option\n"<<endl;
			system("pause");
		    }
				 	
         	  	
			}
         	
		}			
			else if(ch=='5')
			{
			
		
			
			      
				
				  cout<<endl;
				  while(1)
				  {
				  	  system("cls");
				  cout<<endl<<endl;
				  cout<<"0-League Name/prize\n1-Display Players\n2-Display staff\n3-Display Sponsors\n4-Display Franchises\n5-Display Owners\n6-Display Teams\n7-exit display\n";
				    ch=getche();
			
			if(ch=='0')
			{
				system("cls");
			cl->info_league();
			system("pause");
		   }
			
			else   if(ch=='4')
			   {
			     system("cls");
				for(int l=0;l<no;l++)
				{
				      
					cl1=&f[l];
					cl1->display(l);      //run time polymorphism
					
					
				}
				system("pause");
			    }
			    
			    else if(ch=='6')
			    {
				system("cls");
				
				for(int l=0;l<no;l++)
				{
					cl1=&t[l];
					cl1->display(l);  //run time polymorphism
					
				}
				system("pause");
			    }
			    
			    else if(ch=='5')
			    {
				system("cls");
				
				for(int l=0;l<no;l++)
				{
					cl1=&O[l];
					cl1->display(l);  //run time polymorphism
					
					
				}
				system("pause");
		     	}
		     	
		     	else if(ch=='3')
		     	{
				 system("cls");
				 		if(noOfSponsors == 0)
					{ 
					cout<<"Enter some sponsors !!"<<endl;
						system("pause");
					continue;
					
						
					}
				 
				for(int l=0;l<j;l++)
				{
				
					cl1=&s[l];
					cl1->display(l); //run time polymorphism
					
				}
					system("pause");

			    }
			    else if(ch=='1')
			    {
				system("cls");
					if(noOfplayers==0)
					{ 
					cout<<"Enter some Players !!"<<endl;
						system("pause");
					continue;
				
					
						
					}
					
				for(int l=0;l<i;l++)
				{
				
				cl1=&p[l];
				cl1->display(l); //run time polymorphism
					
					
				}
					system("pause");
			
		     	}
		     	else if(ch=='2')
		     	{   
				 system("cls");
				 if(noOfStaff==0)
					{ 
					cout<<"Enter some staff !!"<<endl;
						system("pause");
					continue;
					
						
					}
				 
					for(int l=0;l<k;l++)
				
				{
					
			
					cl1=&m[l];
					cl1->display(l);  //run time polymorphism
					
					
				}
					system("pause");
			
			  }
			  else if(ch=='7')
                 break;				
				else
				{
				
			cout<<"Enter a valid option !"<<endl;
			system("pause");
		 }
			

         	}
	}
	
	   else if(ch=='6')
	   break;
		   
		
	

			else
			{
			    
			cout<<"Enter a valid option !"<<endl;
			system("pause");
		    }
		}
	delete cl;
	delete cl1;
	delete f;
	delete O;
	delete t;
	delete p;
	delete s;
	delete m;
		return 0;
	
  }
