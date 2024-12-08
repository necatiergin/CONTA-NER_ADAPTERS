#include <stack>
#include <iostream>

int main()
{
	std::stack<int> mystack;

	for (int i = 0; i < 5; ++i) {
		mystack.push(i);
	}

	while (!mystack.empty()) {
		std::cout << mystack.top() << ' ';
		mystack.pop();
	}

}
