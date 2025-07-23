#include <string>
using namespace std;

class LengthChecker {
public:
	int GetLengthPoint(string str1, string str2) {
		if (str1.length() == str2.length()) return MAX_POINT;
		
		if (IsBiggerThanTwice(str1, str2)) return ZERO_POINT;

		int gap = 0;
		if (str1.length() > str2.length())
			gap = str1.length() - str2.length();
		else
			gap = str2.length() - str1.length();
		double partial = (1 - (static_cast<double>(gap) / 3)) * 60;
		return partial;
	}
private:
	bool IsBiggerThanTwice(std::string& str1, std::string& str2)
	{
		if (str1.length() >= str2.length() * 2) return true;
		if (str2.length() >= str1.length() * 2) return true;
		return false;
	}

	const int MAX_POINT = 60;
	const int ZERO_POINT = 0;
	
};