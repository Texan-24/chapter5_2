#include <iostream>

int main()

{
  float radius, area, height, volume;

  std::cout<< "Enter the radius:";
  std::cin >> radius;

  std::cout<< "Enter the height:";
  std::cin>>  height ;

  area=3.1416 *radius *radius;
  volume=area*height;

  std::cout <<"Volume of a circle with radius "
  << radius << " is " << volume;
}
