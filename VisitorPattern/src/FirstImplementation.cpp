/*
 * FirstImplementation.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Sudhanya
 */
/*
 * FirstImplementation.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Sudhanya
 */
/*
#include <iostream>
using namespace std;

class CreditCard
{
public:
	virtual void getName() = 0;
	virtual void ComputeGasOffer() = 0;
	virtual ~CreditCard() = 0;
};

CreditCard::~CreditCard()
{
	cout << "destructor";
}

class Bronze : public CreditCard
{
public :
	void getName()
	{
		cout << "Bronze credit card" << endl;
	}
	void ComputeGasOffer()
	{
		cout << "Computing gas offer with bronze credit card" << endl;
	}
	~Bronze()
	{
		cout << "destructor";
	}
};
class Gold : public CreditCard
{
public :
	void getName()
	{
		cout << "Gold credit card" << endl;
	}
	void ComputeGasOffer()
	{
		cout << "Computing gas offer with Gold credit card" << endl;
	}
	~Gold(){
		cout << "destructor";
	}
};

int main()
{
	CreditCard *cc = new Bronze();
	cc->ComputeGasOffer();
	return 0;
}
*/







