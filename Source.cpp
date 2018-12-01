//#include <string>
#include <iostream>
#include "map.h"

int main() {
	map m_map;
	int k1 = 1, k2 = 2, k3 = 42;
	std::string str1 = "cucumber", str2 = "elephant", str3 = "human";
	m_map.put(k1, str1);
	m_map.put(k2, str2);

	std::cout << m_map.get(k1);

	return 0;
}

