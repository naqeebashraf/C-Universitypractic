#include<iostream>
using namespace std;
class Player
{
	private:
		int health;
		string name;
	public:
	Player()
	{
		health=0;
		name=" ";
		}
		Player(int n_health,string n_name)
		{
			health=n_health;
			name=n_name;
			}
			void display_info()
			{
				cout<<"name is :"<<name<<endl;
				cout<<"health is :"<<health<<endl;
				}	
};
class Shooter:public Player
{
	private:
		int ammo;
		public:
			Shooter()
			{
				ammo=0;
			}
			Shooter(int n_health,string n_name,int n_ammo):Player(n_health,n_name),ammo(n_ammo){
			}
			void display_info()
			{
				Player::display_info();
				cout<<"the ammo is :"<<ammo<<endl;
			}
};

int main()
{
	Shooter s1(100,"naqeeb",45);
	s1.display_info();
	return 0;
}
