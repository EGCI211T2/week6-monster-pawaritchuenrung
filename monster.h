#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void Attack(monster &);
          void heal();
	monster(string, int=1,int=1);
	~monster();
};
monster :: monster(string n, int h, int p )
{
	name =n;
	hp =h;
	potion = p;
	cout <<"Monster "<<name<<"is here"<< endl;
	
}
monster:: ~monster()
{
	cout<< name<<"is Deleted"<<endl;
}
//monster :: 
#endif
