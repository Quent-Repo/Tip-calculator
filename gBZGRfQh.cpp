//Grrkek

#include <iostream>
#include<bits/stdc++.h> // Dependancy for setprecision() and fixed

int main() {
  
  int tip = 0;
  float bill = 0.f;
  
  std::cout << "Enter amout for bill: ";
  std::cin >> bill;
  std::cout << "The percent amout you want to tip: ";
  std::cin >> tip;

  float total = bill + ((bill * .01)*tip);

  
  //setprecision() used to seting the decimal places
  // fixed  
  std::cout << std::fixed << std::setprecision(2) << total << "\n";
  main();
  
  
}