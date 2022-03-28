#include <iostream>
using namespace std;

class Bronze;

class OfferVisitor
{
public:
	virtual void visitBronzeCreditCard(Bronze *bronzeCreditCard) = 0;
	//virtual void visitGoldCreditCard(Gold *goldCreditCard) = 0;
	//virtual void visitSilverCreditCard(Silver *silverCreditCard) = 0;
};

class GasOfferVisitor : public OfferVisitor
{
	void visitBronzeCreditCard(Bronze *bronzeCreditCard)
	{
		cout << "Computing gas offer using bronze credit card" << endl;
	}

};

class CreditCard
{
public:
	virtual void getName() = 0;
	virtual void accept(OfferVisitor *v) = 0;
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
	void accept(OfferVisitor *v)
	{
		v->visitBronzeCreditCard(this);
	}
	~Bronze()
	{
		cout << "destructor";
	}
};
int main()
{
	//CreditCard *cc = new Gold();
	CreditCard *cc = new Bronze();

	OfferVisitor *vGas = new GasOfferVisitor();
	//OfferVisitor *vFood = new FoodOfferVisitor();
	//OfferVisitor *vFlight = new FlightOfferVisitor();
	cc->accept(vGas);

	return 0;
}
