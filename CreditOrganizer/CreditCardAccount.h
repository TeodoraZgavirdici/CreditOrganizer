#include "pch.h"
#pragma once
#include "stdafx.h"
#include "LoyaltyScheme.h"

using namespace System;
/*ref class CreditCardAccount
{
public:
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
private:
	long accountNumber;
	double currentBalance;
	double creditLimit;
};*/

/*ref class CreditCardAccount
{
public:
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
private:
	long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
};*/
/*ref class CreditCardAccout
{
private:
	static int numberOfAccounts = 0;
};*/
ref class CreditCardAccount
{
public:
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	static CreditCardAccount();
	literal String^ name = "Super Platinum Card";
	void RedeemLoyaltyPoints();
private:
	initonly long accountNumber;
	LoyaltyScheme^ scheme;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	static double interestRate;

};


