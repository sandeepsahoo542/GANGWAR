#include <iostream>

using namespace std;


struct man{
  int num_associated;
  int stage = 0;
  int bullet_count = 0;
  char alive_status;
};

void man_drawing()
{
  man m1;
  char inp;
  int stage;
  cout<<"enter y to start the game :";
  cin>>inp;
  while(inp == 'y')
  { 
    cout<<"enter 1 to increase the stage :";
    cin>>stage;
    system("clear");
    m1.stage++;
    if(m1.stage == 0)
    {}
    else if(m1.stage == 1)
    {
      cout<<" O \n";
    }
    else if(m1.stage == 2)
    {
      cout<<" O \n";
      cout<<" | \n";
      cout<<"/ \\ \n";
    }
    else if(m1.stage == 3)
    {
      cout<<" O \n";
      cout<<" |__= \n";
      cout<<" | \n";
      cout<<"/ \\ \n";
    }
    else if(m1.stage>3)
    {
      cout<<" O \n";
      cout<<" |__= \n";
      cout<<" | \n";
      cout<<"/ \\ \n";
      
      cout<<"do you want to shoot the bullet or store it(y/n) :";
      cin>>inp;
      if(inp == 'y')
      {
        if(m1.bullet_count == 0)
        {
          cout<<"sorry no bullets to fire here is one for storing ";
          m1.bullet_count++;
        }
        else
         m1.bullet_count--;
      }
      else
      {
        m1.bullet_count++;
      }

      cout<<"bullet count is "<<m1.bullet_count<<endl;
    }
    cout<<"do u want to continue :";
    cin>>inp;
  }
}

