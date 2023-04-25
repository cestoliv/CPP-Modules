#ifndef BITCOINEXCHANGE_CLASS_H
# define BITCOINEXCHANGE_CLASS_H

# include <iostream>
# include <fstream>
# include <string>
# include <cstring>
# include <map>
# include <ctime>
# include <sstream>
# include <utility>

class BitcoinExchange {
private:
	std::string _db_path;
	std::map<std::string, float> _db;

	bool _constructDatabase();
public:
	BitcoinExchange(void);
	BitcoinExchange(const std::string db_path);
	BitcoinExchange(const BitcoinExchange &src);
	~BitcoinExchange(void);
	BitcoinExchange	&operator =(const BitcoinExchange &src);

	float getRate(std::string date);
};

#endif
