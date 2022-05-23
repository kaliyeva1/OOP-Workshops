/*********************************************************
 * Name: Khoshgadam Aliyeva
 * Student ID: 155103195
 * Seneca email: kaliyeva@myseneca.ca
 * Section: OOP 244 NGG
 *
 * I have done all the coding by myself and only copied the code
 * that my professor provided to complete my workshops and assignments.
 **********************************************************/
#pragma once
#ifndef sdds_Utils_H // replace with relevant names
#define sdds_Utils_H
namespace sdds
{
	void flushkeys();
	bool ValidYesResponse(char ch);
	bool yes();
	void readCstr(char cstr[], int len);
	int readInt(int min, int max);
}
#endif
