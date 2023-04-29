#include "Rotto.hpp"

Rotto::Rotto()
{
	this->ifs.open("./rotto.csv");
}

void	Rotto::run()
{
	std::string buf;

	while (std::getline(ifs, buf))
	{
		int cnt = 6;
		std::string count;
		std::string number = "";

		std::stringstream ss;

		ss.str(buf);
		std::getline(ss, count, ',');
		
		std::string num;
		while (std::getline(ss, num, ',') && cnt--)
		{
			if (cnt == 0)
				number += num;
			else
				number += num + ",";
		}
		this->database[count] = number;
	}
	ifs.close();
}

void	Rotto::output()
{
//	for (std::map<std::string, std::string>::iterator it = this->database.begin();
//			it != database.end(); ++it) {
//		std::cout << it->first << " " << it->second << std::endl;
//	}
	for (int cnt = 1; cnt < 1065; ++cnt)
	{
		std::string tt = std::to_string(cnt);	
		std::cout << cnt << "," << database[tt] << std::endl;
	}
}
