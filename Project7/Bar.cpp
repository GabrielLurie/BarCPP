#include "Bar.h"


Bar::Bar(void)
{
	stock[0]=new CarmelEmeraldRiesling(1986);
	stock[1]=new GolanSmadar(1989);
	stock[2]=new YardenChardonnay(1997);
	stock[3]=new Chianti(1997);
	stock[4]=new YardenMHR(1994);
	stock[5]=new ChadeauMargot(1997);
	stock[6]=new YardenCS(1997);
	stock[7]=new Beer("Carlsberg");
	stock[8]=new Beer("Heiniken");
	stock[9]=new Beer("Goldstar");
	int n;
	
	do 
	{

		std::cout << "What can I get you, sir? (tap '0' to list all the options)\n";
	std::cin >> n; 
	if(n==100){std::cout<<"The bar is closed.Good night.";break;}

	if(n==0){
			
		for(int i=0;i<SHELF_SIZE;i++){

			Drink* ptr=stock[i];
			printf("\n(%d)",i+1);(*ptr).getName();
		}
		printf("\n(99)How did you prepare my last drink?");
		printf("\n(100)leave the bar.\n");
	std::cin>>n;
	if(n==100){std::cout<<"The bar is closed.Good night.";break;}
	if(n==99 && lastSelected>=1 && lastSelected<SHELF_SIZE){
		Drink* ptr=stock[lastSelected];
		(*ptr).prepare();

	}

	 }
	if(n==99 && lastSelected>=0 && lastSelected<SHELF_SIZE){
		Drink* ptr=stock[lastSelected];
		(*ptr).prepare();

	}

	else
	{
		Drink* ptr=stock[n-1];
		lastSelected=n-1;
		
		std::cout <<"One ";(*ptr).getName();std::cout <<"is coming up,sir.\n";
		//std::cout << "One"(*ptr).getName()<<"coming up sir\n";

	}
	
	}while(n!=100);
	

		

	
}


Bar::~Bar(void)
{
}


