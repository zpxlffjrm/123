#include <cstdint>
#include <iostream>
#include <string.h>
#include <sstream>
#include <cstdint>
#include <vector>

#include "myAES.h"

using namespace std;

class Block{
public:
	string sPrevHash;

	Block();
	Block(uint32_t nIndexIn, vector<string> sDataIn, int transection_num);
	void BlockGen();
	string GetHash();
	string GetMerkle();
	string CMerkle();
	vector<string> get_Data();
	void cData(vector<string> str);
	void writeData(string path,string to, string key, string iv);
	void CoutString();
	void reset();
	//void reorganize(string key, string iv);
	void push_back(string str);
	void reHashing();
	//string GetreHash();
	string returntTime();
	void setTime(string time);

private:

	 uint32_t _nIndex;
	 vector<string> _sData;
	 string _sHash;
	 string _merkleHash;
	 string tTime;
	 uint32_t transnum;
	 string CalMerkle(int init, int end);
};
