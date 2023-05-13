#include <iostream>

int main()
{
	using namespace std;
	const char x[2][20] = { "Jason ","at your service\n" };
	const char* y = "Quillstone ";

	for (int i = 0; i < 3; i++)
	{
		const char* change = !i ? x[i] : y;
		//cout << ((i < 2) ? !i ? x[i] : y : x[1]);//Jason Quillstone at your service
		cout << ((i < 2) ?change : x[1]);
	}
}

//?:   !i?x[i]:y为一次三目运算被嵌套于((i < 2) ?change : x[1])中
//     ((i < 2) ? !i ? x[i] : y : x[1])
//
//
//