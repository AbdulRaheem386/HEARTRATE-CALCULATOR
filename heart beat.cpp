#include<iostream>
using namespace std;
class heartbeat{
	string firstname;
	string lastname;
	int birthdate;
	int birthmonth;
	int birthyear;
	
	public:
		
		heartbeat(string fn, string ln, int bd, int bm, int by){
			firstname = fn;
			lastname = ln;
			birthdate = bd;
			birthmonth = bm;
			birthyear = by;
		}
		
		int getage(){
			int currentdate , currentmonth , currentyear;
			cout<<"Enter current date : ";
			cin>>currentdate;
			cout<<"Enter current month : ";
			cin>>currentmonth;
			cout<<"Enter current year : ";
			cin>>currentyear;
			
			int age = currentyear - birthyear;
			
			if (currentmonth < birthmonth || (currentmonth == birthmonth && currentdate < birthdate)){
				age--;
			}
			return age;
		}
		
		int maxheartrate(int age){
			return 220 - age;
		}
		
		void targetheartrate(int maxh){
			double lower = maxh * 0.5;
			double upper = maxh * 0.85;
			cout<<"Target heart rate "<<lower<<"-"<<upper<<"per minute"<<endl;
		}
		
		void displayinfo(){
			cout<<"----Persons Info----"<<endl;
			cout<<"Name : "<<firstname<<"-"<<lastname<<endl;
			cout<<"Datet of birth : "<<birthdate<<"/"<<birthmonth<<"/"<<birthyear<<endl;
		}
		
};
int main(){
	string fname,lname;
	int day,month,year;
	cout<<"Enter first name : ";
	cin>>fname;
	cout<<"Enter last name : ";
	cin>>lname;
	cout<<"Enter birth date : ";
	cin>>day;
	cout<<"Enter birth month : ";
	cin>>month;
	cout<<"Enter birth year : ";
	cin>>year;
	
	heartbeat person(fname,lname,day,month,year);
	 
	 person.displayinfo();
	 
	 int age = person.getage();
	 	cout<<"Age : "<<age<<" years "<<endl;
	 	
	 	int maxh = person.maxheartrate(age);
	 		cout<<" Maximum heart rate : "<<maxh<<" beats per minutte"<<endl;
	 		
	 		person.targetheartrate(maxh);
	 		
	 		return 0;
	
}
