#pragma once
#include <iostream>
#include <string>
using namespace std;

class NiceView {
public:
	static void spaces(int& paramiter);
	static void spaces(string& paramiter);
	static void spaces(double& paramiter);
};