#include <iostream>
#include <iomanip>
#include <assert.h>
#include <string>

using namespace std;

const int num_C = 10;
const int user1_Rows = 10;

class set_Board
{
  public:
  
  int x, y;
  char choice, D_ch;
  int Carrier = 5, battleShip = 4, Cruiser = 3, Submarine = 2, Destroyer = 1;

  int table1[user1_Rows][num_C] = 
     {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    
  int playONE[10][10];               //Transfered Arrays to players
  int playTWO[10][10];

    void SHOW_ONE()
      {
        cout << "*********************************************************************\n\n"; 
        cout <<"\t\t  Player One Game Board: \n" << endl;
          for (int row = 0; row < num_C; row++)
        	{
        		cout << "\t";
        		for (int col = 0; col < num_C; col++)
        		{
        			cout << setw(3) << table1[row][col] << " ";
        		}
        		cout << endl;
        	}
        cout << "\n\n*********************************************************************"; 
        cout << "\n\n";
      }

    void Carrier_H()
      {
        table1[x][y] = Carrier;
  			table1[x][y+1] = Carrier;
  			table1[x][y+2] = Carrier;
  			table1[x][y+3] = Carrier;
  			table1[x][y+4] = Carrier;
       
      }
      
    void Carrier_V()
      {
        table1[x][y] = Carrier;
  			table1[x+1][y] = Carrier;
  			table1[x+2][y] = Carrier;
  			table1[x+3][y] = Carrier;
  			table1[x+4][y] = Carrier;
      }
    void Carrier_D()
    {
      cout << "Would you prefer a positive slope diagonal or a negative slope? \n";
      cout << "Enter a 'p' for positive or a 'n' for negative: \n";
      cin >> D_ch;
      cin.get();
      
      
      if (D_ch == 'p')
      {
        table1[x][y] = Carrier;
  			table1[x+1][y-1] = Carrier;
  			table1[x+2][y-2] = Carrier;
  			table1[x+3][y-3] = Carrier;
  			table1[x+4][y-4] = Carrier;
        
      }
      else
      {
        table1[x][y] = Carrier;
  			table1[x+1][y+1] = Carrier;
  			table1[x+2][y+2] = Carrier;
  			table1[x+3][y+3] = Carrier;
  			table1[x+4][y+4] = Carrier;
      }
      
      
    }
      
    void Battle_H()
      {
        table1[x][y] = battleShip;
  			table1[x][y+1] = battleShip;
  			table1[x][y+2] = battleShip;
  			table1[x][y+3] = battleShip;
      }
      
    void Battle_V()
      {
        table1[x][y] = battleShip;
  			table1[x+1][y] = battleShip;
  			table1[x+2][y] = battleShip;
  			table1[x+3][y] = battleShip;
      }
      
    void Battle_D()
    {
      cout << "Would you like a positive slope diagonal or a negative slope? \n";
      cout << "Enter a 'p' for positive or a 'n' for negative: \n";
      cin >> D_ch;
      cin.get();
      
      if (D_ch == 'p')
      {
        table1[x][y] = battleShip;
  			table1[x+1][y-1] = battleShip;
  			table1[x+2][y-2] = battleShip;
  			table1[x+3][y-3] = battleShip;
        
      }
      else
      {
        table1[x][y] = battleShip;
  			table1[x+1][y+1] = battleShip;
  			table1[x+2][y+2] = battleShip;
  			table1[x+3][y+3] = battleShip;
        
      }
      
    }
      
    void Cruiser_H()
      {
       	table1[x][y] = Cruiser;
  			table1[x][y+1] = Cruiser;
  			table1[x][y+2] = Cruiser;
      }
      
    void Cruiser_V()
      {
       	table1[x][y] = Cruiser;
  			table1[x+1][y] = Cruiser;
  			table1[x+2][y] = Cruiser;
      }
    void Cruiser_D()
    {
      cout << "Would you like a positive slope diagonal or a negative slope? \n";
      cout << "Enter a 'p' for positive or a 'n' for negative: \n";
      cin >> D_ch;
      cin.get();
      
      if (D_ch == 'p')
      {
        table1[x][y] = Cruiser;
  			table1[x+1][y-1] = Cruiser;
  			table1[x+2][y-2] = Cruiser;
        
      }
      else
      {
        table1[x][y] = Cruiser;
  			table1[x+1][y+1] = Cruiser;
  			table1[x+2][y+2] = Cruiser;
        
      }
      
      
    }
      
    void Submarine_H()
      {
        table1[x][y] = Submarine;
  			table1[x][y+1] = Submarine;
  			table1[x][y+2] = Submarine;
      }
 
    void Submarine_V()
      {
        table1[x][y] = Submarine;
  			table1[x+1][y] = Submarine;
  			table1[x+2][y] = Submarine;
      }
      
    void Submarine_D()
      {
        
      cout << "Would you like a positive slope diagonal or a negative slope? \n";
      cout << "Enter a 'p' for positive or a 'n' for negative: \n";
      cin >> D_ch;
      cin.get();
      
        if (D_ch == 'p')
          {
          table1[x][y] = Submarine;
    			table1[x+1][y-1] = Submarine;
    			table1[x+2][y-2] = Submarine;
          
          }
        else
          {
          table1[x][y] = Submarine;
    			table1[x+1][y+1] = Submarine;
    			table1[x+2][y+2] = Submarine;
            
          }
      }
    void Destroyer_H()
      {
        table1[x][y+1] = Destroyer;
  			table1[x][y+2] = Destroyer;
        
      }
      
    void Destroyer_V()
      {
        table1[x+1][y] = Destroyer;
  			table1[x+2][y+1] = Destroyer;
        
      }
    void Destroyer_D()
      {
      cout << "Would you like a positive slope diagonal or a negative slope? \n";
      cout << "Enter a 'p' for positive or a 'n' for negative: \n";
      cin >> D_ch;
      cin.get();
      
        if (D_ch == 'p')
          {
            table1[x+1][y] = Destroyer;
  			    table1[x+2][y-1] = Destroyer;
          }
        else
        {
        table1[x+1][y] = Destroyer;
  			table1[x+2][y+1] = Destroyer;
        }
      
      
      }
    
   void Selection()  
    {
     
      			cout << "Enter y axis location: \n";
      			cin >> x;
      			cout << "Enter x axis location: \n";
      			cin >> y;
    }
    
  void Clear()              //Clear array
    {
      for (int i = 0; i < 10; i++)
        {
          for (int k = 0; k < 10; k++)
          {
            table1[i][k] = 0;
          }
        }
         
    }
    
  void Copy_PlayerOne()         //Copy (Arrays)
    {
      for (int i = 0; i < 10; i++)
        {
          for (int k = 0; k < 10; k++)
          {
           playONE[i][k] = table1[i][k];
          }
        }
         
    }
   void Copy_PlayerTwo()         //Copy (Arrays)
    {
      for (int i = 0; i < 10; i++)
        {
          for (int k = 0; k < 10; k++)
          {
           playTWO[i][k] = table1[i][k];
          }
        }
         
    }
    
   void Player_one_Transfer()
      {
        cout << "*********************************************************************\n\n"; 
        cout <<"\t\t  Player One Game Board: \n" << endl;
          for (int c = 0; c < 10; c++)
        	{
        		cout << "\t";
        		for (int z = 0; z < 10; z++)
        		{
        			cout << setw(3) << playONE[c][z] << " ";
        		}
        		cout << endl;
        	}
        cout << "\n\n*********************************************************************"; 
        cout << "\n\n";
      }
      
     void Player_two_Transfer()
      {
        cout << "*********************************************************************\n\n"; 
        cout <<"\t\t  Player Two Game Board: \n" << endl;
          for (int g = 0; g < 10; g++)
        	{
        		cout << "\t";
        		for (int h = 0; h < 10; h++)
        		{
        			cout << setw(3) << playTWO[g][h] << " ";
        		}
        		cout << endl;
        	}
        cout << "\n\n*********************************************************************"; 
        cout << "\n\n";
      }
    
    
};

class Battle_Sequence : public set_Board
{
  
  public:
  
  char map1[10][10];
  char map2[10][10];
  
  void POP1()
    {
  
         for (int i = 0; i < 10; i++)
            {
              for (int k = 0; k < 10; k++)
           
              {
              map1[i][k] = 'O';
              }
            }
    }
  
  void SHOW_Map1()
    {
        {
        cout << "**********************************************************************\n\n"; 
        cout <<"\t\t     Player TWO Hit/Miss Map \n" << endl;
          for (int row = 0; row < 10; row++)
        	{
        		cout << "\t";
        		for (int col = 0; col < 10; col++)
        		{
        			cout << setw(3) << map1[row][col] << " ";
        		}
        		cout << endl;
        	}
        cout << "\n\n*******************************************************************" << endl;
        
      }
   }
   
   void POP2()
    {
  
         for (int i = 0; i < 10; i++)
            {
              for (int k = 0; k < 10; k++)
           
              {
              map2[i][k] = 'O';
              }
            }
    }
  
  void SHOW_Map2()
    {
        {
        cout << "**********************************************************************\n\n"; 
        cout <<"\t\t     Player TWO Hit/Miss Map \n" << endl;
          for (int row = 0; row < 10; row++)
        	{
        		cout << "\t";
        		for (int col = 0; col < 10; col++)
        		{
        			cout << setw(3) << map2[row][col] << " ";
        		}
        		cout << endl;
        	}
        cout << "\n\n**********************************************************************"<< endl; 
        
      }
   }

  
};


void Select_One_Menu();         //Function menu designation
void Select_Two_Menu();

string Welcome(string);
string fireONE(string fire1);
string fireTWO(string fire2);

string HIT(string);
string MISS(string);

int main() {
  
      int user;
      int fireX, fireY, firex, firey;
      int inc = 0, inc2 = 0;
      char choice, gameChoice, mapChoice;
      
  string Begin;      
	Begin = "BATTLESHIP!!!!!! ";
	//Begin = "X";
	
	string coordONE;
	coordONE = "Player One enter TORPEDO COORDINATES ";
	
	string coordTWO;
	coordTWO = "Player Two enter TORPEDO COORDINATES ";
	
	string H;
	H = "HIT!";
	
	string M;
	M = "O";
	
	set_Board set;
  Battle_Sequence battle;
      
      do
      {
        
      cout << Welcome(Begin) << endl; // Colored output
      Select_One_Menu();
      
      cout << "\n\n";

      		cout << "Enter a Menu choice: \n";
      		cin >> user;
      		cin.get();
      
      		cout << "\n\n";
      
      		while ((user < 1) || (user > 8))
      		{
      			cout << "Please enter a valid menu choice. \n";
      			cin >> user;
      
      		}
      
      		switch (user)
      		{
      		case 1:
      		
      		 	cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
            cin >> choice;
      		
      		      if (choice == 'h')
              		{
              		  set.Selection();
              			set.Carrier_H();
              			set.SHOW_ONE();
                  }
            
            		if (choice == 'v')
              		{
              			set.Selection();
              			set.Carrier_V();
              			set.SHOW_ONE();
                	}
                	
                if (choice == 'd')
                {
                  set.Selection();
                  set.Carrier_D();
                  set.SHOW_ONE();
                }
      
      			break;
      
      		case 2:	
      		
      		  cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
            cin >> choice;
      		
      		      if (choice == 'h')
              		{
              		  set.Selection();
              			set.Battle_H();
              			set.SHOW_ONE();
                  }
            
            		if (choice == 'v')
              		{
              			set.Selection();
              			set.Battle_V();
              			set.SHOW_ONE();
                	}
                if (choice == 'd')
                  {
                    set.Selection();
                    set.Battle_D();
                    set.SHOW_ONE();
                  }
      			break;
      
      		case 3:
      	 	  cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
            cin >> choice;
      		
      		      if (choice == 'h')
              		{
              		  set.Selection();
              			set.Cruiser_H();
              			set.SHOW_ONE();
                  }
            
            		if (choice == 'v')
              		{
              	    set.Selection();
              			set.Cruiser_V();
              			set.SHOW_ONE();
                	}
                if (choice == 'd')
                  {
                    set.Selection();
                    set.Cruiser_D();
                    set.SHOW_ONE();
                  }
      			break;
      
      		case 4:	
      			cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
            cin >> choice;
      		
      		      if (choice == 'h')
              		{
              		  set.Selection();
              			set.Submarine_H();
              			set.SHOW_ONE();
                  }
            
            		if (choice == 'v')
              		{
              		  set.Selection();
              			set.Submarine_V();
              			set.SHOW_ONE();
                	}
                if (choice == 'd')
                  {
                    set.Selection();
                    set.Submarine_D();
                    set.SHOW_ONE();
                  }
      			break;
      
      		case 5:		
      			cout << "(Enter: v for vertical || h for horizontal || d for diagonal) \n";
            cin >> choice;
      		
      		      if (choice == 'h')
              		{
              		  set.Selection();
              			set.Destroyer_H();
              			set.SHOW_ONE();
                  }
            
            		if (choice == 'v')
              		{
              		  set.Selection();
              			set.Destroyer_V();
              			set.SHOW_ONE();
                	}
                if (choice == 'd')
                  {
                    set.Selection();
                    set.Destroyer_D();
                    set.SHOW_ONE();
                  }
      			break;
      			
      		case 6:
      			set.SHOW_ONE();
      			break;
      
      		case 7:
      
      			set.Clear();
      			set.SHOW_ONE();
      			break;
      			
      		case 8:
      		  
            set.Copy_PlayerOne();
      	    set.Player_one_Transfer();
      		  cout << "Exit chosen! \n";
      		  set.Clear();
      		  cout << string(100, '\n');
      		}
      
      	} while (user != 8);
      
      do
            {
              
            cout << Welcome(Begin) << endl; // Colored output
            Select_Two_Menu();
            
            cout << "\n\n";
      
            		cout << "Enter a Menu choice: \n";
            		cin >> user;
            		cin.get();
            
            		cout << "\n\n";
            
            		while ((user < 1) || (user > 8))
            		{
            			cout << "Please enter a valid menu choice. \n";
            			cin >> user;
            
            		}
            
            		switch (user)
            		{
            		case 1:
            		
            		 	cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
                  cin >> choice;
            		
            		      if (choice == 'h')
                    		{
                    		  set.Selection();
                    			set.Carrier_H();
                    			set.SHOW_ONE();
                        }
                  
                  		if (choice == 'v')
                    		{
                    			set.Selection();
                    			set.Carrier_V();
                    			set.SHOW_ONE();
                      	}
                      	
                      if (choice == 'd')
                      {
                        set.Selection();
                        set.Carrier_D();
                        set.SHOW_ONE();
                      }
            
            			break;
            
            		case 2:	
            		
            		  cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
                  cin >> choice;
            		
            		      if (choice == 'h')
                    		{
                    		  set.Selection();
                    			set.Battle_H();
                    			set.SHOW_ONE();
                        }
                  
                  		if (choice == 'v')
                    		{
                    			set.Selection();
                    			set.Battle_V();
                    			set.SHOW_ONE();
                      	}
                      if (choice == 'd')
                        {
                          set.Selection();
                          set.Battle_D();
                          set.SHOW_ONE();
                        }
            			break;
            
            		case 3:
            	 	  cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
                  cin >> choice;
            		
            		      if (choice == 'h')
                    		{
                    		  set.Selection();
                    			set.Cruiser_H();
                    			set.SHOW_ONE();
                        }
                  
                  		if (choice == 'v')
                    		{
                    	    set.Selection();
                    			set.Cruiser_V();
                    			set.SHOW_ONE();
                      	}
                      if (choice == 'd')
                        {
                          set.Selection();
                          set.Cruiser_D();
                          set.SHOW_ONE();
                        }
            			break;
            
            		case 4:	
            			cout << "(Enter: 'v' for vertical || 'h' for horizontal || 'd' for diagonal) \n";
                  cin >> choice;
            		
            		      if (choice == 'h')
                    		{
                    		  set.Selection();
                    			set.Submarine_H();
                    			set.SHOW_ONE();
                        }
                  
                  		if (choice == 'v')
                    		{
                    		  set.Selection();
                    			set.Submarine_V();
                    			set.SHOW_ONE();
                      	}
                      if (choice == 'd')
                        {
                          set.Selection();
                          set.Submarine_D();
                          set.SHOW_ONE();
                        }
            			break;
            
            		case 5:		
            			cout << "(Enter: v for vertical || h for horizontal || d for diagonal) \n";
                  cin >> choice;
            		
            		      if (choice == 'h')
                    		{
                    		  set.Selection();
                    			set.Destroyer_H();
                    			set.SHOW_ONE();
                        }
                  
                  		if (choice == 'v')
                    		{
                    		  set.Selection();
                    			set.Destroyer_V();
                    			set.SHOW_ONE();
                      	}
                      if (choice == 'd')
                        {
                          set.Selection();
                          set.Destroyer_D();
                          set.SHOW_ONE();
                        }
            			break;
            			
            		case 6:
            			set.SHOW_ONE();
            			break;
            
            		case 7:
            
            			set.Clear();
            			set.SHOW_ONE();
            			break;
            			
            		case 8:
            		  
                  set.Copy_PlayerTwo();
            	    set.Player_two_Transfer();
            		  cout << "Exit chosen! \n";
            		  cout << string(100, '\n');
            		  
            		}
      
      	} while (user != 8);
      	
      	battle.POP1();
      	battle.POP2();
      	
 	//************************************************************** GAMEPLAY
    do
    
    {
      cout << Welcome(Begin) << endl; // Colored output
      cout << "\n\n";
      cout << "Would player ONE like to view the HIT/MISS map? \n";
      cout << "Enter a 'm' for map or a 'q' to enter coordinates \n";
      cin >> mapChoice;
      cout << "\n";
      
        if(mapChoice == 'm' )
            {
              battle.SHOW_Map1();
            }
      cout << fireONE(coordONE) << endl; // Colored output
      cout << "Player 1 enter firing X location \n";
    	cin >> fireX;
    	cout << "Player 1 enter firing Y location \n";
    	cin >> fireY;
    	
    	if (set.playTWO[fireY][fireX] > 0)
    	  {
    	  	cout << HIT(H) << endl;
	      	battle.map1[fireX][fireY] = 'H';
	      	inc++;
    	  }
    	else
      	{
      	cout << "MISS! \n";
      	battle.map1[fireX][fireY] = 'X';
      	
      	}
      	
      	battle.SHOW_Map1();
      	
       if (inc >= 20)
  	    {
  		    cout << "Player 1 WINS!\n";
  	    }
    
      cout << "\n\n";
      cout << "Would player TWO like to view the HIT/MISS map? \n";
      cout << "Enter a 'm' for map or a 'q' to enter coordinates \n";
      cin >> mapChoice;
      cout << "\n";
      
        if(mapChoice == 'm' )
            {
              battle.SHOW_Map2();
            }
            
      cout <<"\n\n";
      cout << fireTWO(coordTWO) << endl; // Colored output
      cout << "Player 2 enter firing X location \n";
    	cin >> firex;
    	cout << "Player 2 enter firing Y location \n";
    	cin >> firey;
    	
    	if (set.playONE[firey][firex] > 0)
    	  {
    	  	cout << HIT(H) << endl;
	      	battle.map2[firey][firex] = 'X';
	      	inc2++;
    	  }
    	else
      	{
      	cout << "MISS! \n";
      	battle.map2[firey][firex] = 'M';
      	
      	}
      	battle.SHOW_Map2();
      	
      if (inc >= 20)
  	    {
  		    cout << "Player 2 WINS!\n";
  	    }
  	    
    }while (inc <= 20);

      return 0;
  }

void Select_One_Menu()
{
  cout << "Player ONE gameboard Menu: \n";
  cout << "\n";
  cout << "Enter a 1 for Carrier \n";
  cout << "Enter a 2 for Battleship \n";
  cout << "Enter a 3 for Cruiser \n";
  cout << "Enter a 4 for Submarine \n";
  cout << "Enter a 5 for Destroyter \n";
  cout << "Enter a 6 to display gameboard \n";
  cout << "Enter a 7 to clear the gameboard \n";
  cout << "Enter a 8 to Exit \n";
  
}

void Select_Two_Menu()
{
  cout << "Player TWO gameboard Menu: \n";
  cout << "\n";
  cout << "Enter a 1 for Carrier \n";
  cout << "Enter a 2 for Battleship \n";
  cout << "Enter a 3 for Cruiser \n";
  cout << "Enter a 4 for Submarine \n";
  cout << "Enter a 5 for Destroyter \n";
  cout << "Enter a 6 to display gameboard \n";
  cout << "Enter a 7 to clear the gameboard \n";
  cout << "Enter a 8 to Exit \n";
  
}

string Welcome(string Begin) // Bonus: Colored Players output
{
	ostringstream outStr;

	outStr << "\033[5;34m";		 //5-34
	outStr << Begin;
	outStr << "\033[0m\n";		

	return outStr.str();
}

string fireONE(string fire1) // Bonus: Colored Players output
{
	ostringstream outStr;

	outStr << "\033[1;33m";		 
	outStr << fire1;
	outStr << "\033[0m\n";		

	return outStr.str();
}

string fireTWO(string fire2) // Bonus: Colored Players output
{
	ostringstream outStr;

	outStr << "\033[1;36m";		 
	outStr << fire2;
	outStr << "\033[0m\n";		

	return outStr.str();
}
string HIT(string H)
{
  	ostringstream outStr;

	outStr << "\033[4;31m";		 
	outStr << H;
	outStr << "\033[0m\n";		

	return outStr.str();
}

string MISS(string M)
{
  	ostringstream outStr;

	outStr << "\033[4;34m";		 
	outStr << M;
	outStr << "\033[0m\n";		

	return outStr.str();
}



