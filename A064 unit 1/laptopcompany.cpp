# include  <iostream>
using namespace std;
class laptop{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"brand:"<< brand
        <<"processor:"<<processor
        <<"ram:"<<ram<<"GB"<<endl;
        }
};
int maim()
{
    laptop L1,L2;
    L1.brand="dell";
    L1.processor="intel i5";
    L1.ram=8;
    L2.brand="HP";
    L2.processor="AMDRYZEEN5";
    L2.ram=16;
    L1.display();
    L2.display();
    return 0;
}
