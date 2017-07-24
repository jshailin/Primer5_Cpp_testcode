#include <iostream>
int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */;		
		//上面这一行有问题，前面的引号就注释掉了。
	std::cout << /* "*/" /* "/*" */;
}