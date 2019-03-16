#pragma once
#include<string>
#include<cstring>
class Ckey
{
public:
	
	Ckey();
	~Ckey();
	std::string Check();
	void reSet(const std::string);
private:
	std::string a;
	bool Fir();
	bool Sec();
	bool Thr();
};

