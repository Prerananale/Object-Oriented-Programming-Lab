#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class stationary

{
      public:
      int quantity;
      string bame;
      string wame;
      float price;
     
          void getdata() 
 {
                 cout<<"Enter the perfume Name you want to buy : ";
                 cin>>bame;
                 cout<<"Enter the company name: ";
                 cin>>wame;
                 cout<<"Enter perfume Quantity you want to buy : ";
                 cin>>quantity;
                 cout<<"Enter Price of the Product : ";
                 cin>>price; 
  
  }   
          void displaydata()
          {
          	cout<<setw(10)<<left<<bame<<setw(10)<<left<<wame<<setw(20)<<left<<quantity<<setw(5)<<left<<price<<endl;
           }
           
  
   };
   int main()
   {
   int i,n;
    
    		cout<<"\n How many perfume do you want to enter : ";
    		cin>>n;
    		stationary*ptr= new stationary[n];
    		for (i=0;i<n;i++)
    	 	{
     			ptr->getdata();
     			ptr++;
     	 	}
     
     		cout<<setw(10)<<left<<"Product"<<setw(10)<<left<<"Manufacturer Name"<<setw(20)<<left<<"Quantity"<<setw(5)<<left<<"Price"<<endl;
    
		for (i=0;i<n;i++)
     		{
     			ptr--;
     		}     


	for (i=0;i<n;i++)
     	{
     		ptr->displaydata();
        	ptr++;
     	}
int size=sizeof(*ptr);
cout<<"\n\n"<<"Size of Pointer Is: "<<size<<endl;
cout<<"\n\n"<<"Address of Pointer Is: "<<endl;
for (i=0;i<n;i++)
     	{
     		cout<<i+1<<" "<<"ptr: "<<ptr<<endl;
        	ptr--;
     	}
     	



   return 0;
   }
