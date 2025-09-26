#include<iostream>
#include<cstdlib>
#include<string>

int main() {
  const chat* secret = std::getenv("PASSWORD");
  std::string s(secret)
  if(s = "qwerty") {
    std::cout<<"Пароль верный!!!"<<std::endl;
  }else{
    std::cout<<"Пароль неверный!!!"<<std::endl;}
  return 0;
}
