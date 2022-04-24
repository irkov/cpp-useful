//header files
#include <iostream>
#include <time.h>
using namespace std;

//main function
int main()
{
  srand(time(0)); //seeding for rand()
  string pass;

  //all data
  string data = "abcdefghijklmnopqrstuvwxyz"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "0123456789"
                "!@#$%^&*()";

  for (int i = 1; i <= 12; i++)
  {
    pass = pass + data[rand() % 72]; //getting generated char
  }

  cout<<"Your password: "<<pass<<endl;

  return 0;
}
