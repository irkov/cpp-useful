//header files
#include <iostream>
#include <time.h>
using namespace std;

//all data
string data = "abcdefghijklmnopqrstuvwxyz"
              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
              "0123456789"
              "!@#$%^&*()";

string sample_random()
{
  string pass;

  for (int i = 1; i <= 12; i++)
  {
    pass = pass + data[rand() % 72]; //getting generated char
  }

  return pass;
}


string advanced_random()
{
  string pass;

  for (int i = 1; i<= 3; i++)
  {
    for (int i = 1; i <= 6; i++)
    {
      pass = pass + data[rand() % 72]; //getting generated char
    }
    if (i < 3)
    {
      pass = pass + "-";
    }
  }


  return pass;
}

//main function
int main()
{
  srand(time(0)); //seeding for rand()
  string result = advanced_random();
  cout<<"Your password: "<<result<<endl;

  return 0;
}
