#include <string>
using namespace std;

class LengthChecker {
public:
	int GetLengthPoint(string str1, string str2) {
		if (str1.length() == str2.length()) return MAX_POINT;
		if (IsBiggerThanTwice(str1, str2)) return ZERO_POINT;
		return GetPartialPoints(str1, str2);
	}
private:
	bool IsBiggerThanTwice(string& str1, string& str2) {
		if (str1.length() >= str2.length() * 2) return true;
		if (str2.length() >= str1.length() * 2) return true;
		return false;
	}

	int GetPartialPoints(string& str1, string& str2) {
		int gap = 0;
		int smallerLength = 0;
		if (str1.length() > str2.length()) {
			gap = str1.length() - str2.length();
			smallerLength = str2.length();
		}
		else {
			gap = str2.length() - str1.length();
			smallerLength = str1.length();
		}
		return (1 - (static_cast<double>(gap) / smallerLength)) * 60;
	}

	const int MAX_POINT = 60;
	const int ZERO_POINT = 0;
	
};