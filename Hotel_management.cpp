#include<bits/stdc++.h>
using namespace std;
int main(){
     int quant; //quantity 
     int choice; 
     
     int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshakes=0,Qchicken=0; //varibles to hold quantity of food items
     
     int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshakes=0,Schicken=0;   //sold food items
     
     int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shakes=0,Total_chicken=0;  //total price of items
       
     cout<< "\n\t Quantity of items we have ";
     cout<<"\n\t Rooms avaliable:";
     cin>>Qrooms;
     cout<<"\n Quantity of Pasta :";
     cin>>Qpasta;
     cout<<"\n Quantity of Noodles :";
     cin>>Qnoodles;
     cout<<"\n Quantity of Shakes :";
     cin>>Qshakes;
     cout<<"\n Quantity of Chicken-rolls :";
     cin>>Qchicken;
     m:
     cout<<"\n\t\t\t Please select from the menu options ";
     cout<<"\n\n1) Rooms";
     cout<<"\n\n2) Pasta";
     cout<<"\n\n3) Burger";
     cout<<"\n\n4) Noodles";
     cout<<"\n\n5) Shakes";
     cout<<"\n\n6) chicken-rools";
     cout<<"\n\n7) Information regarding sales and collection ";
     cout<<"\n\n8) Exit";
    
	 cout<<"\n\n Please enter your choice ";
     cin>>choice;
     switch(choice)
     {
     	case 1:
     		cout<<"\n\n Entre the number of rooms you want: ";
     		cin>>quant;
     		if(Qrooms-Srooms>=quant)
     		{
     			Srooms=+quant;  //no. of availabke rooms
     			Total_rooms=+quant*1200;
     			cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you ";
			 }
			 else 
			 	cout<<"\n\t Only"<<" "<<Qrooms-Srooms<<" "<<"Rooms remaning in hotel ";
			 	break;
			 	/*************************************************/
			 case 2:
     		cout<<"\n\n Entre Pasta Quantity: ";
     		cin>>quant;
     		if(Qpasta-Spasta>=quant)
     		{
     			Spasta=+quant;  //no. of availabke rooms
     			Total_pasta=+quant*250;
     			cout<<"\n\n\t\t"<<quant<<" Pasta is the order! ";
			 }
			 else 
			 	cout<<"\n\t Only"<<" "<< Qpasta-Spasta<<" "<<"pasta remaning in hotel ";
			 	break;
			 	/***************************************************/
			 	case 3:
     		cout<<"\n\n Entre Burger quantity  ";
     		cin>>quant;
     		if(Qburger-Sburger>=quant)
     		{
     			Sburger=+quant;  //no. of availabke rooms
     			Total_burger=+quant*120;
     			cout<<"\n\n\t\t"<<quant<<"Burger is the order!  ";
			 }
			 else 
			 	cout<<"\n\t Only"<<" "<<Qburger-Sburger<<" "<<"burger  remaning in hotel ";
			 	break;
			 	/******************************************************/
			 	case 4:
     		cout<<"\n\n Entre Noodles quantity : ";
     		cin>>quant;
     		if(Qnoodles-Snoodles>=quant)
     		{
     			Snoodles=+quant;  //no. of availabke rooms
     			Total_noodles=+quant*140;
     			cout<<"\n\n\t\t"<<quant<" Noodles is the order!  ";
			 }
			 else 
			 	cout<<"\n\t Only"<<" "<<Qrooms-Srooms<<" "<<"noodles remaning in hotel ";
			 	break;
			 	/********************************************************/
			 	case 5:
     		cout<<"\n\n Entre Shakes quantity : ";
     		cin>>quant;
     		if(Qshakes-Sshakes>=quant)
     		{
     			Sshakes=+quant;  //no. of availabke rooms
     			Total_shakes=+quant*120;
     			cout<<"\n\n\t\t"<<quant<<" Shakes is the order! ";
			 }
			 else 
			 	cout<<"\n\tOnly"<<" "<<Qshakes-Sshakes<<" "<<"Shakes remaning in hotel ";
			 	break;
			 	/******************************************************/
			 	case 6:
     		cout<<"\n\n Entre Chicken rolls quantity : ";
     		cin>>quant;
     		if(Qchicken-Schicken>=quant)
     		{
     			Schicken=+quant;  //no. of availabke rooms
     			Total_chicken=+quant*150;
     			cout<<"\n\n\t\t"<<quant<<" Chicken is the order! ";
			 }
			 else 
			 	cout<<"\n\t Only"<<" "<<Qchicken-Schicken<<" "<<"Chicken-rolls remaning in hotel ";
			 	break;
			 	/****************************************************/
			 	case 7:
			 		cout<<"\n\t\t Details oF sales and collection ";
			 		cout<<"\n\n Number of rooms we had :  "<<Qrooms;
			 		cout<<"\n\n Number of rooms we gave for rent "<<Srooms ;
			 		cout<<"\n\n Remaning rooms : "<<Qrooms-Srooms;
			 		cout<<"\n\n Total collection for the day : "<<Total_rooms;
			 		
			 		
			 		cout<<"\n\n Number of Pasta we had :  "<<Qpasta;
			 		cout<<"\n\n Number of Pasta we sold  "<<Spasta ;
			 		cout<<"\n\n Remaning Pasta : "<<Qpasta -Spasta ;
			 		cout<<"\n\n Total  Pasta collection for the day : "<<Total_pasta;
			 		
			 		cout<<"\n\n Number of burger we had :  "<<Qburger;
			 		cout<<"\n\n Number of burgers we sold  "<<Sburger ;
			 		cout<<"\n\n Remaning burgers  : "<<Qburger -Sburger ;
			 		cout<<"\n\n Total  burger collection for the day : "<<Total_burger;
			 		
			 		cout<<"\n\n Number of Nooldes we had :  "<<Qnoodles;
			 		cout<<"\n\n Number of noodles we sold  "<<Snoodles ;
			 		cout<<"\n\n Remaning noodles  : "<<Qnoodles -Snoodles ;
			 		cout<<"\n\n Total  noodles collection for the day : "<<Total_noodles;
			 		
			 		cout<<"\n\n Number of shakes we had :  "<<Qshakes;
			 		cout<<"\n\n Number of shakes we sold  "<<Sshakes ;
			 		cout<<"\n\n Remaning shakes  : "<<Qshakes -Sshakes ;
			 		cout<<"\n\n Total  shakes collection for the day : "<<Total_shakes;
			 		
			 		cout<<"\n\n Number of Chicken-rolls we had :  "<<Qchicken;
			 		cout<<"\n\n Number of Chicken-rolls we sold  "<<Schicken ;
			 		cout<<"\n\n Remaning Chicken-rolls  : "<<Qchicken -Schicken ;
			 		cout<<"\n\n Total Chicken-rolls collection for the day : "<<Total_chicken;
			 		
			 		cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_burger+Total_pasta+Total_noodles+Total_shakes+Total_chicken;
			 		break;
			 		case 8:
			 			exit(0);
			 			
			 			default:
			 				cout<<"\n Please select the numbers mentioned above! ";
			 				
			 		 
	 }
	 goto m; // Dubara menu pe jaane k liye and it also used for jump from one part to another part
	 
}
