// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <gtest/gtest.h>

struct BankAccount {
	int balance = 0;

	BankAccount() {

	}

	explicit BankAccount(const int balance) : balance{ balance } {

	}

	void deposit(int amount) {
		balance += amount;
	}
};

struct BankAccountTest : testing::Test {
	BankAccount* account;

	BankAccountTest() {
		account = new BankAccount;
	}

	virtual ~BankAccountTest() {
		delete account;
	}
};

struct account_state {
	int initial_balance;
	int withdraw_amount;
	int final_balance;
	bool success;
};

TEST(AccountTest, BankAccountStartsEmpty) {
	BankAccount account;
	EXPECT_EQ(0, account.balance);
}

TEST_F(BankAccountTest, BankAccountStartsEmpty) {
	EXPECT_EQ(0, account->balance);
}

TEST_F(BankAccountTest, CanDepositMoney) {
	account->deposit(100);
	EXPECT_EQ(100, account->balance);
}


TEST(GTTest, AssertTrue) {
	ASSERT_TRUE(true);
}

int main(int argc, char* argv[]) {

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}