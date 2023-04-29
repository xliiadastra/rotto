#ifndef ROTTO_HPP
# define ROTTO_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

class Rotto {
private:
	std::ifstream ifs;
	std::map<std::string, std::string> database;
public:
	Rotto();
	
	void run();
	void output();
};

#endif
