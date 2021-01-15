#include <iostream>
#include <stdlib.h> //for using clear function 
#include <unistd.h> // for using usleep function 
#include <iomanip>  
#include <ctime> 
/* 
 Abstract
 
 In this program we will display a firework of type " SWIRLING SILVER DRAGON ". This code consist of 2 2D arrays of char data type. The array consists of 7 rows and 9 coloumns. In specific locations * is set to make a firework like pattren 1 array consists stars on left side of the line while other carry on the right side.These both arrays are printed alternativly. Moreover Animation effect is added to give a real life look. It is made by using usleep from unistd.h and clear screen. After the swirl, a blast is shown. This blast consist of 2 diffrent things. First a diamond blast. Then using random and setw a  full screen random starts are printed.
 */
using namespace std;

void typea(int cycle=1 ,int hor=1)  // this is the type A in which stars are on left side of center line
{
  int a=0,b=0; // these would be used in loops to print horizontal and vertical cycles
  char array[7][9]; //Fist 2D array 
  char array2[7][9]; //second 2D array
  for (int i=0;i<7;i++) //to remove all garbage values and 'space' to all elements of both arrays 
  {for (int j=0;j<9;j++)
    { array[i][j]=' '; array2[i][j]=' ';} }
    
     //  stars are alocated to diffrent locations of array to make a patern that will look like fireworks 
    array[0][3]='*';  
    array[0][4]='*';
    array[1][4]='*';   
    array[2][4]='*';
    array[3][4]='*';
    array[4][4]='*';
    array[5][4]='*';
    array[6][4]='*';
    array[6][3]='*';
    array[5][2]='*';
    array[1][2]='*';
    array[2][1]='*';
    array[3][0]='*';
    array[4][1]='*';
    
    array2[0][4]='*';
    array2[1][4]='*';
    array2[2][4]='*';
    array2[3][4]='*';
    array2[4][4]='*';
    array2[5][4]='*';
    array2[6][4]='*';
    array2[0][5]='*';
    array2[1][6]='*';
    array2[2][7]='*';
    array2[3][8]='*';
    array2[4][7]='*';
    array2[5][6]='*';
    array2[6][5]='*';
   
         //this while is responsible for printing number of cycle. A cycle as same as of sine wave. changeing 5 will print less cycles
   
   while (a<cycle)       //this while is responsible for printing number of cycle. A cycle as same as of sine wave. changeing 5 will print less cycles
      { for (int i=0;i<7;i++) //this for loop is for printting rows of the 2d array  
             { b=0;            // setting b to 0 so next wile works for every row
               cout<<"\t \t \t \t \t \t \t ";   // to give indendation from left 
               while (b<hor)    // this while is to print same patren multiple times in horizontal way changing hor will change number of patrens 
                    {for(int j=0;j<9;j++)   //this for loop will actually print the arrays elements 
                       {cout<<"\033[1;33m"<<array[i][j];}  
                     cout<<" \t  "; b++; }  //space will mantain gap between 2 consective fireworks
               cout<<endl;}               // moving to next line 
        for (int i=0;i<7;i++)             // same process is being repetered as above but for array2
            { b=0;
              cout<<"\t \t \t \t \t \t \t ";
              while (b<hor)
                   {for (int j=0;j<9;j++)
                       {cout<<"\033[1;33m"<<array2[i][j] <<"\033[0;0m" ;}  
                    cout<<" \t  ";b++;}     
              cout<<endl;}
        ++a;}   //while incrementation 
        }
void typeb(int cycle=1, int hor=1)        /*This is type B of Array in which stars are on the left side of centeral line  
                      same proccess as above is followed here  */ 
{
   int a=0,b=0 ;
   char array[7][9];
   char array2[7][9];
   for (int i=0;i<7;i++)
       {for (int j=0;j<9;j++)
             {array[i][j]=' '; array2[i][j]=' ';}}

     
    array[0][3]='*';  
    array[0][4]='*';
    array[1][4]='*';   
    array[2][4]='*';
    array[3][4]='*';
    array[4][4]='*';
    array[5][4]='*';
    array[6][4]='*';
    array[6][3]='*';
    array[5][2]='*';
    array[1][2]='*';
    array[2][1]='*';
    array[3][0]='*';
    array[4][1]='*';
    
    array2[0][4]='*';
    array2[1][4]='*';
    array2[2][4]='*';
    array2[3][4]='*';
    array2[4][4]='*';
    array2[5][4]='*';
    array2[6][4]='*';
    array2[0][5]='*';
    array2[1][6]='*';
    array2[2][7]='*';
    array2[3][8]='*';
    array2[4][7]='*';
    array2[5][6]='*';
    array2[6][5]='*';
   
    while (a<cycle)
          {for (int i=0;i<7;i++)
               { b=0;
                 cout<<"\t \t \t \t \t \t \t ";
                 
                 while (b<hor)
                   {  for (int j=0;j<9;j++)
                           {cout<<"\033[1;33m"<<array2[i][j];}  
                      cout<<" \t  "; b++; } 
                 cout<<endl;}
           for (int i=0;i<7;i++)
               { b=0;
               
               cout<<"\t \t \t \t \t \t \t ";
                 while (b<hor)
                       { for (int j=0;j<9;j++)
                             {cout<<"\033[1;33m"<<array[i][j];}  
                         cout<<" \t  "; 
                         b++;}     
                 cout<<endl;}
           ++a;}
}
void end_blast()
{  // this function does the end blast
  cout<<endl; 
  system("clear");
  cout<<endl; // to bring coursur down 
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"\t \t \t \t \t \t ";// to move courser to right 
   for (int i=0 ; i<32;i++)
   { cout<<setw(32-i)<<"* * * *"<<setw(i+9+i)<<"* * * *"<<endl;cout<<"\t \t \t \t \t \t ";// to print upper portion of diamond
        if(i==12)
     break; 
      }
    for (int i=0 ; i<12;i++) // to print lower porstion of diamond
  { cout<<setw(20+i)<<"* * * *"<<setw(32-i-i)<<"* * * *"<<endl;cout<<"\t \t \t \t \t \t ";}
  
  cout<<endl;
  
  usleep(300000);
  for (int i=0 ; i<42;i++) // to print upper portion of big diamond 
   { cout<<"\t \t \t \t \t "<<setw(42-i)<<"* * * * * *"<<setw(i+9+i)<<"* * * * * *"<<endl;
        if(i==22)
     break; 
      }
    for (int i=0 ; i<22;i++) // to print lower portion of big diamond 
  { cout<<"\t \t \t \t \t "<<setw(20+i)<<"* * * * * *"<<setw(53-i-i)<<"* * * * * *"<<endl;}
 
  cout<<endl;
  usleep(300000);
  system("clear");
   for (int i=0 ; i<62;i++) // to bring upper portion of last daimond 
   { cout<<"\t \t \t "<<setw(62-i)<<"* * * * * * * * * "<<setw(i+18+i)<<"* * * * * * * * * "<<endl;
        if(i==32)
     break; 
      }
    for (int i=0 ; i<32;i++) // to print lower portion of last diamond
  { cout<<"\t \t \t "<<setw(30+i)<<"* * * * * * * * * "<<setw(82-i-i)<<"* * * * * * * * * "<<endl;}
  
  // to print last exploding effect 
   srand(time(0));
  int a=0;
  for (int b=0 ; b<5;b++)
  {  usleep(300000);
  system("clear");
  
  
  while(a<5)
  {for (int i=1 ; i<10;i++)
      { 
      cout<<setw(rand()%50)<<" * "<<setw(rand()%50)<<" * "; //set w and random will print stars at random position
      cout<<setw(rand()%50)<<" * "<<setw(rand()%50)<<" * ";
       for (int i=1 ; i<2;i++)
      {  
      cout<<setw(rand()%20)<<" * "<<setw(rand()%20)<<" * "<<endl; }}
a++;}
a=0;}

}

void restart()
{
system("clear");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t \t \t \t \t \t ";
    cout<<"*****************************RESTARTING*****************************"<<endl;   
    usleep(900000);

}

int main()

{   
    int a=0;            //a is to show animated picture of fireworks
    int x=0 ;
    cout<<endl;
    char enter[1];
    cout<<"\033[0m"<<"-----------------------------------------------------------------------------------------------"<<endl
        << "\033[4m" <<"\t\tWELCOME TO THE FINAL PROGRAMMING FUNDAMENTAL PROJECT"<<endl
         <<"\t\t\t\t\tBY" <<endl
         << "\033[1m\t\033[1;36mHARRIS AAMIR (20I-0943),\033[1;35mTIMUR HUSSAIN KHAN (20I-1785) AND\033[1;32m ASHISH JUMANI (20I-0494)" <<endl;
    cout<<"\033[0m"<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;  
    cout<<"The following program will display the firework of type"<<endl;
    cout<<"\t \t \t ============================"<<endl;
     {cout<<"\033[0m"<<"\t \t \t |                          |"<<endl;} 
     {cout<<"\033[1;33m"<<"\t \t \t"<<"\033[0m"<<" |  "<<"\033[1;33m"<<"SWIRLING SILVER DRAGON"<<"\033[0m"<<"  |"<<endl;}
        {cout<<"\033[0m"<<"\t \t \t |                          |"<<endl;}  
        cout<<"\t \t \t ============================"<<endl;
       cout<<"\033[0m"<<"Make sure you terminal is in full screen"<<endl;
    cout<<"\033[0m"<<"PRESS ENTER TO CONTINUE "<<endl;
    
    
  
    cin.getline(enter,1);
    
    do {
    a=0;  
    while (a<10)                  // loop to continuesly change content on screen  
    { 
    system("clear");     // clear screen will remove all previous content on screen and print new one  
    typea(4,3);           // finction typea being called
    usleep(200000-a);      // time delay
    system("clear");   // screen cleared 
    typeb(4,3);
    usleep(200000-a);      //time delay
    a++;    //incrementation 
    }    // 10 times to show visible animation 
    system("clear");
    usleep(300000);
    end_blast(); 
    restart();
    system("clear");       
    x++; } while ( x<3 );
     
    return 0;
}

