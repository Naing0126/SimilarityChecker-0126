#include <string>
using namespace std;

class LengthChecker {
public:
	int GetLengthPoint(string str1, string str2) {
		if (str1.length() == str2.length()) return MAX_POINT;
	}
private:
	const int MAX_POINT = 60;
};