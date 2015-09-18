#include <iostream>

using namespace std;

void multiplication()
{
  float multiply1;

  float multiply2;

  std::cout<<"\nplease type the first number to multiply:";
  std::cin>>multiply1;
  std::cout<<"\nnow please enter the seccond number:";
  std::cin>>multiply2;
  std::cout<<"\n"<<( multiply1 * multiply2 )<<"\n";
}

void division()
{
  float divide1;

  float divide2;

  std::cout<<"\nplease type the first number to divide:";
  std::cin>>divide1;
  std::cout<<"\nnow please enter the seccond number:";
  std::cin>>divide2;
  std::cout<<"\n"<<( divide1 / divide2 )<<"\n";
}

void subtraction()
{
  float subtract1;

  float subtract2;

  std::cout<<"\nplease type the first number to subtract:";
  std::cin>>subtract1;
  std::cout<<"\nnow please enter the seccond number:";
  std::cin>>subtract2;
  std::cout<<"\n"<<( subtract1 - subtract2 )<<"\n";
}

void addition()
{
  float add1;

  float add2;

  std::cout<<"\nplease type the first number to add:";
  std::cin>>add1;
  std::cout<<"\nnow please enter the seccond number:";
  std::cin>>add2;
  std::cout<<"\n"<<( add1 + add2 )<<"\n";
}

int main()
{
  int equasion_type;
  std::cout<<"please select the type of equasion you want to enter\n";
  std::cout<<"\n1. multiplication";
  std::cout<<"\n2. division";
  std::cout<<"\n3. subtraction";
  std::cout<<"\n4. addition";
  std::cout<<"\n"<<"\n:";
  std::cin>>equasion_type;
  switch (equasion_type) {
    case 1:
    multiplication();
    break;
    case 2:
    division();
    break;
    case 3:
    subtraction();
    break;
    case 4:
    addition();
  }
  return 1;
}
