/*This rand() will return invert original random number generated */


//x=9,8,7==>>> t=987



#include <iostream>
#include <ctime>

int ran();

int main()
{
    //int x=ran()%1000; //number of zeros with digit after % operator will provide number of desired random numbers
    std::cout<<ran();

    return 0;
}


/*Formula:- Xn+1=(axn+c)mod m*/
/*X0=3,m=9,a=7,c=4*/
int ran()
{
    	time_t current_time; //object from time_t class or ctime

	current_time = time(NULL);  //object time returning seconds passed from Jan 1970 thats diffrnt evrytime

    int n=0; //counter
    int x=current_time%10; //seed value
    //int x=x0;
    int a=7;    //Multiplier
    int c=4;    //increment
    int m=9;
    int temp=0; //storage var
    int i=1; //for the sake of place values

    for(n=0;n<m;++n)
    {
        x=(a*x+c)%m;
        //std::cout<<x;
            if(x==0){x+=i;} //if x==0,temp has to lose one digit ,that's why increment x by 10
         temp=(x*i)+temp;
         std::cout<<x;

             i*=10; //increasing place values

    }std::cout<<"\n";
   // std::cout<<temp;
    std::cout<<"\n";
    return temp;
}
