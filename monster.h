#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
          void heal();
	monster(string= "Anonymous", int=1,int=1);
	
	void monster::operator--(int a)
	{
		hp=-5;
	} 
	
	void moster::operator+=(monster &x)
	{
		this->hp+=x.hp;
        x.hp=0;
	}
	//ALT+126
	~monster();
	monster(int, int);
	void operator+=(int);//Binary
	void operator+=(int);//

	void display();
	bool operator>(monster &x);
};
bool monster::operator>(monster x){
	if (hp>x.hp) return true;
	else return false;
}

monster:: display()
{
	cout<<"Name   :"<<name <<endl;
	cout<<"Hp     :"<<hp <<endl;
	cout<<"Potion :"<<potion<<endl;


}
monster :: monster(string n, int h, int p )//default value
{
	name =n;
	hp =h;
	potion = p;
	cout <<"Monster "<<name<<"is here"<< endl;
	
}//

monster:: ~monster()//deconstructor
{
	cout<< name<<"is Deleted"<<endl;
}
monster :: monster(int,int)
{
	
}
#endif
