#include <iostream>
int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */;		
		//������һ�������⣬ǰ������ž�ע�͵��ˡ�
	std::cout << /* "*/" /* "/*" */;
}