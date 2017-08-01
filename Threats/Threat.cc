#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string

class Threat
{
private:
	string m_szName;
	int m_id;
	
public:
	Threat(string szName, int id)
	{
		m_szName = szName;
		m_id = id;
	}
  
  void toString()
	{
		cout << "Last name: " << szLastName << endl;
		cout << "Year of birth: " << iYearOfBirth << endl;
	}
};
