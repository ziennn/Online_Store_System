/*
TOPIC:	ONLINE SHOPPING SYSTEM
BY: BANUT, ALLIAH
	BELLEZA, NICOLE ALIXIA
	CION, CHRISTINE MAE
	MANUEL, JOHN ANGELO
	NAVARRO, CRIZIEN MARNIC

	BSCS 2D
*/

//----------------------------------------------------------HEADER FILES----------------------------------------------------------//

#include <iostream>   // input or output
#include <string>
#include <windows.h>  // for sleep
#include <graphics.h> // design
#include <iomanip>    // for setw (format manipulator)

using namespace std;

int main(){

//----------------------------------------------------------VARIABLES----------------------------------------------------------//

	string Fullname,Contact,Address,Username, Password, User, Pass;				 //variables to read user infos
	string product[100], courier, cardnum, idnum[50];
	int cont = 1, pay, otp, choice, category, id, cancel, agent, proceed; 		 //variables to read the user choices
	int i=0, limit = 0, Gtotal=0, qty[100], total[100], price[100];

	char bar = 219;																 //display the ascii block/bar

//----------------------------------------------------------START PAGE----------------------------------------------------------//

	system("COLOR 0B"); 																   //color of background and font
	system ("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t                                          ";
	char a[] = {'*',' ','*',' ','*',' ','B',' ','R',' ','O',' ','W',' ','S',' ','E',' ',' ','n','\'',' ',' ','B',' ','U',' ','Y',' ','*',' ','*',' ','*'}; //display characters at a time

	for (int j=0;j<34;j++)
	{
		Sleep(300);
		cout<<a[j];
	}
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\tThe best of both worlds. Store and web."<<endl;
	Sleep (3000);

//----------------------------------------------------------MAIN PAGE----------------------------------------------------------//

	mainpage:
	system("cls");
	system("COLOR 0A");
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t* * *  M A I N   P A G E * * *"<<endl;
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t [1] Register  \t\t\t  [2] Login"<<endl;
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t[Any Key] Exit"<<endl;
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter your choice: ";
	cin>>choice;

	switch (choice){

//----------------------------------------------------------REGISTER PAGE----------------------------------------------------------//

	case 1:
		system ("cls");
		cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t     * * *  R E G I S T E R  * * *"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\tName                      :       ";
		cin.ignore();
		getline(cin,Fullname);
		cout<<"\t\t\t\t\t\t\t\tContact Number            :       ";
		getline(cin,Contact);
		cout<<"\t\t\t\t\t\t\t\tAddress                   :       ";
		getline(cin,Address);

		cout<<"\n\n\n\n\t\t\t\t\t\t\t\tUsername                  :       ";
		cin>>Username;
		cout<<"\t\t\t\t\t\t\t\tPassword                  :       ";
		cin>>Password;

		system("cls");
		system("COLOR 0B");
		Sleep(3000);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t    CREATING YOUR ACCOUNT....."<<endl;
    for(int j=0;j<67500;j++);
    	cout<<"		                                                     \t"; // loading bar
    for(int j=0;j<30;j++)
    {
        Sleep(200);
        system("COLOR 0B");
        cout<<bar;
    }

	system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  ACCOUNT REGISTERED!"<<endl;
		Sleep(2000);
		goto mainpage;


//----------------------------------------------------------LOGIN PAGE----------------------------------------------------------//

	case 2:
		login:

		system ("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t* * *  L O G I N  * * *"<<endl;
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\tUsername                  :      ";
		cin>>User;
		cout<<"\t\t\t\t\t\t\t\tPassword                  :      ";
		cin>>Pass;

		if (Username == User && Password == Pass){							  //checking the validity of the login infos
	system("cls");
	system("COLOR 0B");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t       LOGGING YOU IN....."<<endl;
    	for(int j=0;j<67500;j++);
    		cout<<"		                                                \t"; //Loading
    	for(int j=0;j<27;j++)
    	{
        	Sleep(200);
        	system("COLOR 0B");
        	cout<<bar;
    	}
    system("cls");
    cout<<endl<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  YOU HAVE SUCCESSFULLY LOGGED IN TO YOUR ACCOUNT....."<<endl;
    Sleep(3000);

//----------------------------------------------------------BROWSING PAGE----------------------------------------------------------//

	do{
		i++;
		limit++;

	system("cls");
			system("COLOR 03");
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t   Welcome to BROWSE n' BUY, "<<Username<<"!"<<endl;

			Sleep(2000);

			cout<<"\n\n\t\t\t\t\t\t\t\t    * * *  B R O W S E    P R O D U C T S * * *"<<endl;

			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tSHOP BY CATEGORY:"<<endl;
			cout<<"\n\t\t\t\t\t\t\t\t[1] CLOTHES"<<endl;
			cout<<"\t\t\t\t\t\t\t\t[2] FOOTWARE"<<endl;
			cout<<"\t\t\t\t\t\t\t\t[3] KITCHENWARE"<<endl;
			cout<<"\t\t\t\t\t\t\t\t[4] COMPUTER ACCESSORIES"<<endl;
			cout<<"\t\t\t\t\t\t\t\t[5] APPLIANCES"<<endl;
			ask:
			cout<<"\n\n\t\t\t\t\t\t\t\tEnter Category: ";
			cin>>category;

//----------------------------------------------------------CLOTHES PAGE----------------------------------------------------------//

	if (category == 1){
			clothes:
				system ("cls");
				cout<<"\n\n\n\t\t\t\t\t\t\t\t           * * * * * C L O T H E S * * * * *"<<endl;
				Sleep(1000);
				cout<<"\n\n\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t|                                WOMEN                              |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| ID |                           NAME                     |  PRICE  |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| 1  | Sleeveless Dress Blue                              | P 369   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 2  | Sports Bra Black                                   | P 359   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 3  | Denim Pants White                                  | P 499   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 4  | Jogger Pants Black                                 | P 399   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 5  | Highwaist Short Pink                               | P 299   |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t|                                MEN                                |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| ID |                           NAME                     | PRICE   |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| 6  | Blue Polo Shirt                                    | P 399   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 7  | Zip Up Hoodie                                      | P 699   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 8  | Slim Straight Pants                                | P 599   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 9  | Jogger Pants Gray                                  | P 499   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 10 | Floral Boardshorts                                 | P 349   |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\n\t\t\t\t\t\t\tEnter item ID     : ";
				cin>>id;

				switch(id){
					case 1:
						idnum 			[i] = "1";
						product			[i] = "Sleeveless Dress Blue";
						price			[i] = 369;
						break;
					case 2:
						idnum 			[i] = "2";
						product 		[i] = "Sports Bra Black";
						price 			[i] = 359;
						break;
					case 3:
						idnum 			[i] = "3";
						product 		[i] = "Denim Pants White";
						price 			[i] = 499;
						break;
					case 4:
						idnum 			[i] = "4";
						product 		[i] = "Jogger Pants Black";
						price 			[i] = 399;
						break;
					case 5:
						idnum 			[i] = "5";
						product 		[i] = "Highwaist Short Pink";
						price 			[i] = 299;
						break;
					case 6:
						idnum 			[i] = "6";
						product 		[i] = "Blue Polo Shirt";
						price 			[i] = 399;
						break;
					case 7:
						idnum 			[i] = "7";
						product 		[i] = "Zip Up Hoodie";
						price 			[i] = 699;
						break;
					case 8:
						idnum 			[i] = "8";
						product 		[i] = "Slim Straight Pants";
						price 			[i] = 599;
						break;
					case 9:
						idnum 			[i] = "9";
						product 		[i]	= "Jogger Pants Gray";
						price 			[i] = 499;
						break;
					case 10:
						idnum 			[i] = "10";
						product 		[i] = "Floral Boardshorts";
						price 			[i] = 349;
						break;

				default: 							 // wrong input
					system("cls");
					goto clothes;
				}

				cout<<"\n\t\t\t\t\t\t\tEnter Quantity    : ";
				cin>>qty[i]; 						//quantity is stored in array at index i

				total[i] = price[i] * qty[i];      //formula for total

				Sleep(3000);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tPRODUCT ADDED TO CART!"<<endl;

//----------------------------------------------------------FOOTWARE PAGE----------------------------------------------------------//

	}else if (category == 2){
			footware:
				system("cls");
				cout<<"\n\n\n\t\t\t\t\t\t\t\t        * * * * *  F O O T W A R E  * * * * *"<<endl;
				Sleep(1000);

				cout<<"\n\n\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| ID |                           NAME                     |  PRICE  |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| 11 | Under Armour Men's Running Shoes (Black)           | P 3,997 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 12 | Parisian Ladies Strap Heeled Pumps (Gray)          | P 779   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 13 | Converse Ladies Chuck Taylor  Sneakers (White)     | P 2,790 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 14 | Adidas Ladies  Sneakers (White and Metallic Cherry)| P 3,500 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 15 | FILA Ladies Rubber Shoes (Black)                   | P 1,699 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 16 | Vans Ladies Sneakers (Black)                       | P 2,699 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 17 | Keds Ladies  Sneakers (White)                      | P 2,635 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 18 | World Balance Ladies Rubber Shoes (White)          | P 1,799 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 19 | Hush Puppies Ladies Rubber Shoes (Navy Blue)       | P 2,880 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 20 | Skechers Ladies Rubber Shoes (White)               | P 2,150 |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\n\t\t\t\t\t\t\tEnter item ID     : ";
				cin>>id;

				switch(id){
					case 11:
						idnum 			[i] = "11";
						product			[i] = "Under Armour Men's Running Shoes (Black)";
						price			[i] = 3997;
						break;
					case 12:
						idnum 			[i] = "12";
						product			[i] = "Parisian Ladies Strap Heeled Pumps (Gray)";
						price			[i] = 779;
						break;
					case 13:
						idnum 			[i] = "13";
						product			[i] = "Converse Ladies Chuck Taylor  Sneakers (White)";
						price			[i] = 2790;
						break;
					case 14:
						idnum 			[i] = "14";
						product			[i] = "Adidas Ladies  Sneakers (White and Metallic Cherry)";
						price			[i] = 3500;
						break;
					case 15:
						idnum 			[i] = "15";
						product			[i] = "FILA Ladies Rubber Shoes (Black)";
						price			[i] = 1699;
						break;
					case 16:
						idnum 			[i] = "16";
						product			[i] = "Vans Ladies Sneakers (Black)";
						price			[i] = 2699;
						break;
					case 17:
						idnum 			[i] = "17";
						product			[i] = "Keds Ladies Sneakers (White)";
						price			[i] = 2635;
						break;
					case 18:
						idnum 			[i] = "18";
						product			[i] = "World Balance Ladies Rubber Shoes (White)";
						price			[i] = 1799;
						break;
					case 19:
						idnum 			[i] = "19";
						product			[i] = "Hush Puppies Ladies Rubber Shoes (Navy Blue)";
						price			[i] = 2880;
						break;
					case 20:
						idnum 			[i] = "20";
						product			[i] = "Skechers Ladies Rubber Shoes (White)";
						price			[i] = 2150;
						break;
				default:
					system("cls");
					goto footware;
				}

				cout<<"\n\t\t\t\t\t\t\tEnter Quantity    : ";
				cin>>qty[i];
				total[i] = price[i] * qty[i];				//compute the price of selected item and multiplying it to inputted quantity

				Sleep(3000);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tPRODUCT ADDED TO CART!"<<endl;

//----------------------------------------------------------KITCHENWARE PAGE----------------------------------------------------------//

	}else if (category == 3){
			kitchenware:
				system("cls");
				cout<<"\n\n\n\t\t\t\t\t\t\t\t    * * * * *  K I T C H E N W A R E  * * * * *"<<endl;
				Sleep(1000);

			    cout<<"\n\n\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| ID |                           NAME                     |  PRICE  |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| 21 | 3-Piece Aluminum Fry Pan Set                       | P 699   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 22 | Asahi Electric Kettle                              | P 1,785 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 23 | Casserole with Lid                                 | P 2,869 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 24 | 3-Tier Aluminum Storage Rack (Silver)              | P 1,299 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 25 | Anti-bacterial Food Keeper 900ml                   | P 349   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 26 | Cast Iron Pan 18cm                                 | P 389   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 27 | Whistling Kettle 3L                                | P 679   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 28 | Stainless Steel Chef's Knife 8inch                 | P 499   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 29 | Eurochef Can Opener                                | P 179   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 30 | Kyowa Rice Cooker 1.0L (White)                     | P 849   |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\n\t\t\t\t\t\t\tEnter item ID     : ";
				cin>>id;

				switch(id){
					case 21:
						idnum 			[i] = "21";
						product			[i] = "3-Piece Aluminum Fry Pan Set";
						price			[i] = 699;
						break;
					case 22:
						idnum 			[i] = "22";
						product			[i] = "Asahi Electric Kettle";
						price			[i] = 1785;
						break;
					case 23:
						idnum 			[i] = "23";
						product			[i] = "Casserole with Lid";
						price			[i] = 2790;
						break;
					case 24:
						idnum 			[i] = "24";
						product			[i] = "3-Tier Aluminum Storage Rack (Silver)";
						price			[i] = 1299;
						break;
					case 25:
						idnum 			[i] = "25";
						product			[i] = "Anti-bacterial Food Keeper 900ml";
						price			[i] = 349;
						break;
					case 26:
						idnum 			[i] = "26";
						product			[i] = "Cast Iron Pan 18cm";
						price			[i] = 389;
						break;
					case 27:
						idnum 			[i] = "27";
						product			[i] = "Whistling Kettle 3L";
						price			[i] = 679;
						break;
					case 28:
						idnum 			[i] = "28";
						product			[i] = "Stainless Steel Chef's Knife 8inch";
						price			[i] = 499;
						break;
					case 29:
						idnum 			[i] = "29";
						product			[i] = "Eurochef Can Opener";
						price			[i] = 179;
						break;
					case 30:
						idnum 			[i] = "30";
						product			[i] = "Kyowa Rice Cooker 1.0L (White)";
						price			[i] = 849;
						break;

				default:
					system("cls");
					goto kitchenware;
				}

				cout<<"\n\t\t\t\t\t\t\tEnter Quantity    : ";
				cin>>qty[i];
				total[i] = price[i] * qty[i];
				Sleep(3000);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tPRODUCT ADDED TO CART!"<<endl;

//----------------------------------------------------------COMPUTER ACCESSORIES PAGE----------------------------------------------------------//

	}else if (category == 4){
			comp_accessories:
				system("cls");
				cout<<"\n\n\n\t\t\t\t\t\t\t  * * * * *  C O M P U T E R    A C C E S S O R I E S  * * * * *"<<endl;
				Sleep(1000);

				cout<<"\n\n\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| ID |                           NAME                     |  PRICE  |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| 31 | Wired Optical Mouse & Keyboard Combo               | P 519   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 32 | Webcam with stand                                  | P 399   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 33 | Wireless Stereo Earbuds (White)                    | P 1,699 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 34 | Adata Flashdrive 32GB (Red)                        | P 369   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 35 | Bluetooth Headphones (Blue)                        | P 599   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 36 | Logitech Wireless Mouse (Rose Pink)                | P 1,295 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 37 | Bluetooth Speaker (Pink)                           | P 299   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 38 | Wireless Colored Keyboard & Mouse Set (Mint)       | P 959   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 39 | HP NB Intel Pentium 14in. (Silver)                 | P 20,990|"<<endl;
				cout<<"\t\t\t\t\t\t\t| 40 | Earphone In Ear S151 (Pink)                        | P 149   |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\n\t\t\t\t\t\t\tEnter item ID     : ";
				cin>>id;

				switch(id){
					case 31:
						idnum 			[i] = "31";
						product			[i] = "Wired Optical Mouse & Keyboard Combo";
						price			[i] = 519;
						break;
					case 32:
						idnum 			[i] = "32";
						product			[i] = "Webcam with stand";
						price			[i] = 399;
						break;
					case 33:
						idnum 			[i] = "33";
						product			[i] = "Wireless Stereo Earbuds (White)";
						price			[i] = 1699;
						break;
					case 34:
						idnum 			[i] = "34";
						product			[i] = "Adata Flashdrive 32GB (Red)";
						price			[i] = 369;
						break;
					case 35:
						idnum 			[i] = "35";
						product			[i] = "Bluetooth Headphones (Blue)";
						price			[i] = 599;
						break;
					case 36:
						idnum 			[i] = "36";
						product			[i] = "Logitech Wireless Mouse (Rose Pink)";
						price			[i] = 1295;
						break;
					case 37:
						idnum 			[i] = "37";
						product			[i] = "Bluetooth Speaker (Pink)";
						price			[i] = 299;
						break;
					case 38:
						idnum 			[i] = "38";
						product			[i] = "Wireless Colored Keyboard & Mouse Set (Mint)";
						price			[i] = 959;
						break;
					case 39:
						idnum 			[i] = "39";
						product			[i] = "HP NB Intel Pentium 14in. (Silver)";
						price			[i] = 20990;
						break;
					case 40:
						idnum 			[i] = "40";
						product			[i] = "Earphone In Ear S151 (Pink)";
						price			[i] = 149;
						break;

				default:
					system("cls");
					goto comp_accessories;
				}

				cout<<"\n\t\t\t\t\t\t\tEnter Quantity    : ";
				cin>>qty[i];
				total[i] = price[i] * qty[i];

				Sleep(3000);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tPRODUCT ADDED TO CART!"<<endl;

//----------------------------------------------------------APPLIANCES PAGE----------------------------------------------------------//

	}else if (category == 5){
			appliances:
				system("cls");
				cout<<"\n\n\n\t\t\t\t\t\t\t\t\t* * * * *  A P P L I A N C E S  * * * * *"<<endl;
				Sleep(1000);

				cout<<"\n\n\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| ID |                           NAME                     |  PRICE  |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t| 41 | Dowell Portable Air Conditioner                    | P 15,679|"<<endl;
				cout<<"\t\t\t\t\t\t\t| 42 | Akari LED Colored Circular Lamp 20W                | P 895   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 43 | Rechargeable Brushless Motor Floor Fan             | P 3,199 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 44 | Ultrasonic Humidifier (White)                      | P 649   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 45 | Hanabishi Pull Out Microwave 20L (White)           | P 2,999 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 46 | Asahi Steam Flat Iron                              | P 699   |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 47 | Dowell Portable Air Conditioner                    | P 17,999|"<<endl;
				cout<<"\t\t\t\t\t\t\t| 48 | Dowell Clothes Steamer                             | P 2,399 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 49 | Hyundai Dry and Steam Iron (Purple)                | P 1,199 |"<<endl;
				cout<<"\t\t\t\t\t\t\t| 50 | Adjustable Desk Lamp (Teal)                        | P 279   |"<<endl;
				cout<<"\t\t\t\t\t\t\t---------------------------------------------------------------------"<<endl;
				cout<<"\n\t\t\t\t\t\t\tEnter item ID     : ";
				cin>>id;

				switch(id){
					case 41:
						idnum 			[i] = "41";
						product			[i] = "Dowell Portable Air Conditioner";
						price			[i] = 15679;
						break;
					case 42:
						idnum 			[i] = "42";
						product			[i] = "Akari LED Colored Circular Lamp 20W";
						price			[i] = 895;
						break;
					case 43:
						idnum 			[i] = "43";
						product			[i] = "Wireless Stereo Earbuds (White)";
						price			[i] = 3199;
						break;
					case 44:
						idnum 			[i] = "44";
						product			[i] = "Ultrasonic Humidifier (White)";
						price			[i] = 649;
						break;
					case 45:
						idnum 			[i] = "45";
						product			[i] = "Hanabishi Pull Out Microwave 20L (White)";
						price			[i] = 2999;
						break;
					case 46:
						idnum 			[i] = "46";
						product			[i] = "Asahi Steam Flat Iron";
						price			[i] = 699;
						break;
					case 47:
						idnum 			[i] = "47";
						product			[i] = "Dowell Portable Air Conditioner";
						price			[i] = 17999;
						break;
					case 48:
						idnum 			[i] = "48";
						product			[i] = "Dowell Clothes Steamer";
						price			[i] = 2399;
						break;
					case 49:
						idnum 			[i] = "49";
						product			[i] = "Hyundai Dry and Steam Iron (Purple)";
						price			[i] = 1199;
						break;
					case 50:
						idnum 			[i] = "50";
						product			[i] = "Adjustable Desk Lamp (Teal)";
						price			[i] = 279;
						break;

				default:
					system("cls");
					goto appliances;
				}

				cout<<"\n\t\t\t\t\t\t\tEnter Quantity    : ";
				cin>>qty[i];
				total[i] = price[i] * qty[i];

				Sleep(3000);
				cout<<"\n\n\t\t\t\t\t\t\t\t\t\tPRODUCT ADDED TO CART!"<<endl;


	}else{					
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid choice! Try again!\n";		//invalid choice
		goto ask;
		break;
	}

	conti:
	cout<<"\n\n\t\t\t\t\t\t\tDo you want to continue shopping? [1] YES    [2] NO"<<endl;
	cout<<"\n\t\t\t\t\t\t\tEnter your choice : ";
	cin>>cont;

} while (cont == 1);

  	if (cont > 2) {
  		cout<<"\n\n\t\t\t\t\t\t\t\t\t\tInvalid choice! Try again!"<<endl;
  		Sleep (2000);
  		goto conti;
	  }else

	proc:
    cout<<"\n\n\t\t\t\t\t\t\tProceed [1] CHECKOUT [2] CANCEL ORDER : ";
	cin>>proceed;

		if (proceed == 1){
			goto checkout;
		}else if(proceed == 2){
			goto cancel;
		}else{
			goto proc;
		}

 //----------------------------------------------------------CHECKOUT PAGE----------------------------------------------------------//

 	checkout:

		system("cls");
		system("COLOR 0B");
		Sleep(3000);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t  CHECKING OUT....."<<endl;

			for(int j=0;j<67500;j++);
    			cout<<"		                                                     \t";	//loading bar
    		for(int j=0;j<30;j++)
    		{
        		Sleep(200);
        		system("COLOR 0B");
        		cout<<bar;
    		}

			system("cls");
			system("COLOR 03");
				cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t     ***CHECKOUT***"<<endl;

				cout<<"\n\n\t\t\t\t\t\t\t\t\t      *****Delivery Address*****"<<endl;
				cout<<"\n\n\t\t\t\tName	: "	<< Fullname <<endl;          				//Display user infos
				cout<<"\t\t\t\tContact	: "	<< Contact  <<endl;
				cout<<"\t\t\t\tAddress	: "	<< Address  <<endl;

				Sleep(3000);

				cout<<"\n\n\n\t\t\t\t\t\t\t\t\t        *****Order Details*****"<<endl; //Display items added to cart
				cout<<"\n\t\t\t\t_____________________________________________________________________________________________________________________"<<endl;
              	cout<<"\t\t\t\t"<<setw(5)<<"ID"<<setw(30)<<"PRODUCT NAME"<<setw(46)<<"UNIT PRICE"<<setw(8)<<"QTY"<<setw(13)<<"AMOUNT"<<endl;
				cout<<"\t\t\t\t_____________________________________________________________________________________________________________________"<<endl;

				for (i = 1; i <=limit; i++)
				{
					cout<<"\t\t\t\t"<<setw(5)<<idnum[i]<<" | "<<left<<setw(60)<<product[i]<<" | "<<right<<setw(10)<<price[i]<<" | "<<setw(5)<<qty[i]<<" | "<<setw(10)<<total[i]<<"\n";
				}
				cout<<"\t\t\t\t_____________________________________________________________________________________________________________________"<<endl;

				cout<<"\n\n\t\t\t\t\t\t\t\t\t        GENERATING YOUR BILL....."<<endl;
				Sleep(2000);

				for (i = 1; i <= limit; i++)
				{
					Gtotal = Gtotal + total[i];										  //After computing the price of item x quantity, this is the formula for grandtotal
				}

				cout<<"\n\t\t\t\t"<<setw(99)<<"TOTAL: "<<Gtotal<<endl;

				courier:
				Sleep(3000);
				cout<<"\n\n\n\t\t\t\t\t\t\t\t\t       *****SHIPPING OPTION*****"<<endl;
				cout<<"\n\t\t\t\tAvailable courier: "<<endl;
				cout<<"\n\t\t\t\t[1] J&T Express		[2] Ninja Van"<<endl;
				cout<<"\n\t\t\t\tChoose courier: ";
				cin>>agent;

				switch(agent){
					case 1:
						courier  = "J&T Express";
					break;
					case 2:
						courier = "Ninja Van";
					break;

				default: 															  //if wrong input, display choices of courier again
					goto courier;
				}

//----------------------------------------------------------PAYMENT METHOD PAGE----------------------------------------------------------//

				Sleep(1000);
				system("cls");
				payment:
				cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   *****Payment Method*****"<<endl;
				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t [1] Card Payment  \t\t\t  [2] Cash On Delivery"<<endl;
				cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter payment method : ";
				cin>>pay;

				switch(pay){

//----------------------------------------------------------CARD PAYMENT PAGE----------------------------------------------------------//

				case 1:
					system("cls");
					cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t     *****CARD PAYMENT*****\n\n"<<endl;
					cardnum:
					cout<<"\n\n\n\n\t\t\t\t\t\t\tEnter your 16 Digit card number : ";
					cin.ignore();
					getline(cin,cardnum);

					if ((cardnum.length() == 15) || (cardnum.size() == 18 )){		//check if input is equal to 16 or 19 (with space)
						goto OTP; 													//proceed to entering OTP
					}else{
						cout<<"\n\t\t\t\t\t\t\tInvalid Card number, try again!"<<endl;
						Sleep(2000);
						goto cardnum; 												//re-enter 16 digit card number
					}
					OTP:
					Sleep(1000);
					cout<<"\n\t\t\t\t\t\t\tNote:	Enter OTP (ONE TIME PASSWORD) sent to your registered mobile number."<<endl;
					cout<<"\t\t\t\t\t\t\t(ASSUME and Enter the same on screen.)"<<endl;
					Sleep(3000);
					cout<<"\n\t\t\t\t\t\t\tYour OTP is 22189"<<endl;
					cout<<"\t\t\t\t\t\t\t(Don't share the OTP with anyone.)"<<endl;

					otpn:
					cout<<"\n\t\t\t\t\t\t\tEnter OTP: "; 							//input same otp
					cin>>otp;

					if(otp == 22189){ 												//check if input otp is valid/same
						system("cls");
						system("COLOR 0B");
						Sleep(3000);
								cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t    PROCESSING PAYMENT....."<<endl;
    						for(int j=0;j<67500;j++);
    							cout<<"		                                                     \t"; //loading bar
    						for(int j=0;j<30;j++)
    						{
        						Sleep(200);
        						system("COLOR 0B");
        						cout<<bar;
    						}
							system("cls");
							system("COLOR 03");

						cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPAYMENT SUCCESSFULL!"<<endl;
						Sleep(3000);
						cout<<"\n\n\t\t\t\t\t\t\t  Your order will be delivered within 3-5 days by "<<courier<<"."<<endl;
						Sleep(2000);
						cout<<"\n\n\t\t\t\t\t\t\t\t\t      THANK YOU FOR SHOPPING!!!\n\n\n\n"<<endl;
						exit (0);
					}else{
						cout<<"\n\t\t\t\t\t\t\tInvalid OTP! Try again."<<endl;
						Sleep(3000);
						goto otpn;
					}

//----------------------------------------------------------CASH ON DELIVERY PAGE----------------------------------------------------------//

			case 2:
				system("cls");
				system("COLOR 0B");
						Sleep(3000);
								cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t       PLACING ORDER....."<<endl;
    						for(int j=0;j<67500;j++);
    							cout<<"		                                                     \t";
    						for(int j=0;j<30;j++)
    						{
        						Sleep(200);
        						system("COLOR 0B");
        						cout<<bar;
    						}

							system("cls");
							system("COLOR 03");

				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tYour order is placed successfully!"<<endl;
				Sleep(1000);
				cout<<"\n\n\t\t\t\t\t\t\t    Parcel will be delivered within 3-5 days by "<<courier<<"."<<endl;

				Sleep(2000);

				cout<<"\n\n\t\t\t\t\t\t\t\t\t    THANK YOU FOR SHOPPING!!!\n\n\n\n"<<endl;
				exit (0);

				default:
					goto payment;
				}

//----------------------------------------------------------CANCEL PAGE----------------------------------------------------------//

		cancel:
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t        *****CANCEL ORDER*****"<<endl;
			cout<<"\t\t\t\t_____________________________________________________________________________________________________________________"<<endl;
			cout<<"\t\t\t\t"<<setw(5)<<"POS"<<setw(7)<<"ID"<<setw(30)<<"PRODUCT NAME"<<setw(45)<<"UNIT PRICE"<<setw(10)<<"QTY"<<setw(10)<<"AMOUNT"<<endl;
			cout<<"\t\t\t\t_____________________________________________________________________________________________________________________"<<endl;
			for (i = 1; i <=limit; i++)
			{
				cout<<"\t\t\t\t"<<setw(5)<<i<<" | "<<setw(5)<<idnum[i]<<" | "<<left<<setw(60)<<product[i]<<" | "<<right<<setw(10)<<price[i]<<" | "<<setw(5)<<qty[i]<<" | "<<setw(10)<<total[i]<<"\n";
			}
			cout<<"\t\t\t\t_____________________________________________________________________________________________________________________"<<endl;

			cout<<"\n\n\t\t\t\t\t\t\tEnter position of item you want to remove: ";
			cin>>cancel;

			for (i = cancel; i <= limit; i++)
			{
				idnum	[i] 	= idnum[i+1];
				product	[i] 	= product[i+1];
				price	[i] 	= price[i+1];
				qty		[i] 	= qty[i+1];
				total	[i]	 	= total[i+1];

			}
				limit = limit-1;
				goto proc;

	}else{
			cout<<"\n\n\t\t\t\t\t\t\t\tInvalid Username/ Password! Try again."<<endl;
			Sleep(3000);
			goto mainpage;
		}
		default:
			break;
            return 0;
	}
	return 0;
}
