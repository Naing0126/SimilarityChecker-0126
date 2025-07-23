#include <string>
using namespace std;

class LengthChecker {
public:
	int GetLengthPoint(string str1, string str2) {
		if (str1.length() == str2.length()) return MAX_POINT;
		
		if (str1.length() >= str2.length() * 2) return 0;
		if (str1.length() * 2 <= str2.length()) return 0;
	}
private:
	const int MAX_POINT = 60;
};