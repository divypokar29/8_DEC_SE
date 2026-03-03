#include<iostream>
using namespace std;
class Showoption{
	public:
		void showOption(){
			cout<<"============================================\n\n";
	        cout<<"        WELCOME TO ONLINE FOOD SYSTEM       \n\n";
	        cout<<"============================================\n\n";
	        cout<<"\n  1) Registration \n";
	        cout<<"\n  2) Login \n ";
	        cout<<"\n  3) Exit \n";
		}

};
class Registration : public Showoption {
	protected:
		string reguser;
		string regpassword;
	public:
		void registration(){
			cout<<"Enter username : ";
			cin>>reguser;
			cout<<"Enter password : ";
			cin>>regpassword;
			
			cout<<"\n--------------------------\n";
			cout<<"   Registration successful!\n";
			cout<<"--------------------------\n";
			cout << "\nLogin to Continue\n\n";
			cout<<"--------------------------\n";
		}
};
class Login : public Registration{
	public:
		bool login(){
			string loginUser, loginPass;
			
			cout<<"Enter user : ";
			cin>>loginUser;
			cout<<"Enter password : ";
			cin>>loginPass;
			
			if(loginPass == regpassword && loginUser == reguser){
				cout<<"\n Login successfully \n";
				return true;
			}
			else if(loginPass != regpassword){
				cout<<"Invallid password\n";
				return false;
			}else if(loginUser != reguser){
				cout<<"Invallid Username!!\n";
				return false;
			}else{
				cout<<"Enter valid detaile!!\n";
				return false;
			}
			
		}
};
class FoodMenu
{
	public:
		
		string itemName[4] = {"Burger","Pizza","Pasta","Sandwich"};
		int itemPrice[4] = {120,250,180,100};
		int itemQuantity[4] = {0,0,0,0};
		
		void Menu()
		{
			
			cout<<"\n -------------------------------------------\n";
			cout<<"\n                 FOOD MENU                  \n";
			
			cout<<"\n -------------------------------------------\n";
			for(int i=0;i<4;i++){
				cout<<"\n   "<<i+1<<") "<<itemName[i]
				    <<" - Rs."<<itemPrice[i];
				    
			}
			cout<<"\n\n   5)             EXIT\n\n";
		}
		void addItem(int chose,int qty){
			itemQuantity[chose-1] += qty;
			cout<<"\nItem added successfully!\n";	
			}
		
		void bill(){
			int total = 0;
			
			cout<<"\n-----------------------BILL------------------------\n";
			
			for(int i=0;i<4;i++){
				if(itemQuantity[i]>0){
					int sub = itemQuantity[i] * itemPrice[i];
					
					cout<<itemName[i]<<" X "<<itemQuantity[i]<<" = Rs."<<sub<<endl;
					total += sub;
				}
			}
			cout<<"----------------------------";
			cout<<"\nTotal amount = Rs."<<total<<endl;
		}
};
int main()
{
    Login food;
    int choice;
    int chose,qty;
	FoodMenu me;
    
    while(true)  // infinite loop
    {
        food.showOption();
        cout <<"\n  Enter your choice !!!  \n ";
        cin >> choice;

        if(choice == 1)
        {
            food.registration();
            
            bool status = food.login();
            while(status == false)
            {
            	status = food.login();
			}
			me.Menu();
             while(true){
	
	
            	cout<<"\nEnter item number : ";
	            cin>>chose;
	
 	    if(chose == 5){
		    break;
	    }
	    if(chose >=1 && chose <=4){
		    cout<<"\nEnter quantity : ";
		    cin>>qty;
		
		    me.addItem(chose,qty);
	    }
    }
 me.bill();
 break; 
        }
        else if(choice == 2)
        {
            cout <<"\nPlease Register First!\n";
        }
        else if(choice == 3)
        {
            cout <<"\nThank You for Using the System!\n";
            break;   // exit loop
        }
        else
        {
            cout << "\nInvalid Choice!\n";
        }
    }

 
}