#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    void print(){
        cout<< level <<endl;
    }
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

};
int main(){
    // Static allocation
    // Hero ramesh;
    // //class is like user defined data type
    // //class is like  a template.
    // cout<<"size:"<<sizeof(Hero)<<endl;
    // cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    // //ramesh.health = 70;
    // ramesh.level = 'A';
    // ramesh.setHealth(70);
    // cout<<"health is:"<<ramesh.getHealth()<<endl;
    // cout<<"level is: "<<ramesh.level<<endl;
    // dynamic allocation.
    Hero *b  = new Hero;
    cout<<"level is "<<(*b).level;
    cout<<"Health is "<<(*b).getHealth();
   // return 0;
    }