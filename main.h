#include<string>
#include <time.h>
#include <stdio.h>
using namespace std; 

//I know it is wrong to have one header for different classes but fuck it. 
class my_class{
    public: 
        int num;
        string brand;
        string dosomething();
        string retrieveHTTPRequest();
        
};
class countdown{
    public:    
        void begin_countdown();
        void retrievebitcoin();
         
        
};