#pragma once
#include <string>
#include <vector>

using namespace std;

namespace terminal {
	class History
	{
	private:
		vector<string> v;
		int historyPointer;
	public:
		void put(string item);
		vector<string> getList();
		string up();
		string down();
	};
}