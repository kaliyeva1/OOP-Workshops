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
#ifndef sdds_File_H // replace with relevant names
#define sdds_File_H
#include "ShoppingRec.h"
namespace sdds
{
	bool openFileForRead();
	bool openFileForOverwrite();
	void closeFile();
	bool freadShoppingRec(ShoppingRec* rec);
	void fwriteShoppintRec(const ShoppingRec* rec);
}
#endif