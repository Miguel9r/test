Switched to branch 'userinput'
[mroja008@hammer firstrepo]$ git branch
  master
* userinput
* [mroja008@hammer firstrepo]$ git status
* # On branch userinput
* nothing to commit, working directory clean
* [mroja008@hammer firstrepo]$ vim main.cpp
*
#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name;
	std::cout << "Hello " << name << "!" << std::endl;

	return 1;
}

