#include "BitcoinExchange.hpp"
#include "btc.hpp"

BitcoinExchange::BitcoinExchange(void)
	: _db_path("input/data.csv")
{
	this->_constructDatabase();
}

BitcoinExchange::BitcoinExchange(std::string db_path)
	: _db_path(db_path)
{
	this->_constructDatabase();
}

// BitcoinExchange(const BitcoinExchange &src);
// BitcoinExchange	&operator =(const BitcoinExchange &src);

BitcoinExchange::~BitcoinExchange(void)
{

}

bool BitcoinExchange::_constructDatabase()
{
	// Open file
	std::string line;
	std::ifstream dbfile(this->_db_path.c_str());

	if (!dbfile.is_open())
	{
		std::cerr << "Error: could not open file (" << this->_db_path << ")" << std::endl;
		return (false);
	}

	this->_db.clear();
	// Read line by line
	int ctr = -1;
	while (getline(dbfile,line))
	{
		ctr++;
		if (ctr == 0)
			continue;

		bool ignore = false;

		// Split on ,
		char *ptr;
		ptr = strtok((char *)line.c_str(), ",");
		std::string date;
		std::string value;
		while (ptr != NULL)
		{
			if (date.empty())
				date = ptr;
			else if (value.empty())
				value = ptr;
			else
				ignore = true;
			// std::cout << ptr  << std::endl;
			ptr = strtok (NULL, ",");
		}

		// Check date format
		if (!checkDateFormat(date) && !ignore)
		{
			std::cerr << "Error: Incorrect date format (" << date << ")" << std::endl;
			ignore = true;
		}
		// Check value format
		if (!checkValue(value) && !ignore)
		{
			std::cerr << "Error: Incorrect value format (" << value << ")" << std::endl;
			ignore = true;
		}

		if (!ignore) {
			this->_db[date] = strToFloat(value);
			//std::cout << "db[\"" << date << "\"] = " << this->_db[date] << std::endl;
		}
	}
	dbfile.close();
	return (true);
}

float BitcoinExchange::getRate(std::string date)
{
	if (this->_db.size() == 0)
		return 0;

	if (this->_db.find(date) == this->_db.end()) {
		std::map<std::string, float>::iterator it;

		std::string best_date;

		for (it = this->_db.begin(); it != this->_db.end(); ++it) {
			int comp = date.compare(it->first);

			// Date can be alphabetically sorted
			// ATM the comp is -1, the current date can be inserted

			if (comp == -1)
			{
				if (it != this->_db.begin())
					it--;

				best_date = it->first;
				break;
			}
		}
		if (best_date.empty())
		{
			it--;
			best_date = it->first;
		}

		return this->_db[best_date];
	}
	return this->_db[date];
}
