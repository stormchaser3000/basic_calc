#include <iostream>

using namespace std;

void multiplication()
{
  float multiply1;

  float multiply2;

  float result;

  std::cout<<"\nplease type the first number to multiply:";
  std::cin>>multiply1;
  std::cout<<"\nnow please enter the seccond number:";
  std::cin>>multiply2;

  result = (multiply1 * multiply2);

  std::cout<<"\n"<<result<<"\n";
}

void division()
{
  float divide1;

  float divide2;

  char quit;

  while(quit != 'Y' && quit != 'y') {
    std::cout<<"\nplease type the first number to divide:";
    std::cin>>divide1;
    std::cout<<"\nnow please enter the seccond number:";
    std::cin>>divide2;

    // Siri patch in case of zero/zero
    if(divide1 == 0 && divide2 == 0) {
      std::cout<<"Imagine that you have zero cookies and you split them evenly among zero friends.\nHow many cookies does each person get?\nSee? It doesn't make sense.\nAnd Cookie Monster is sad that there are no cookies,\nand you are sad that you have no friends.";
    } else {
      std::cout<<"\n"<<( divide1 / divide2 )<<"\n";
    }
    std::cout<<"\nwould you like to quit?  (y/n)";
    std::cin>>quit;
  }
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
  int equation_type;
  std::cout<<"please select the type of equasion you want to enter\n";
  std::cout<<"\n1. multiplication";
  std::cout<<"\n2. division";
  std::cout<<"\n3. subtraction";
  std::cout<<"\n4. addition";
  std::cout<<"\n"<<"\n:";
  std::cin>>equation_type;
  switch (equation_type) {
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
