/*********************************************************
 * Name: Khoshgadam Aliyeva
 * Student ID: 155103195
 * Seneca email: kaliyeva@myseneca.ca
 * Section: OOP 244 NGG
 *
 * I have done all the coding by myself and only copied the code
 * that my professor provided to complete my workshops and assignments.
 **********************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include "File.h"
#include "ShoppingRec.h"
FILE* sfptr = nullptr;
const char* const SHOPPING_DATA_FILE = "shoppinglist.csv";
namespace sdds
{
	bool openFileForRead()
	{
		sfptr = fopen(SHOPPING_DATA_FILE, "r");
		return sfptr != NULL;
	}
	bool openFileForOverwrite()
	{
		sfptr = fopen(SHOPPING_DATA_FILE, "w");
		return sfptr != NULL;
	}
	void closeFile()
	{
		if (sfptr) fclose(sfptr);
	}
	bool freadShoppingRec(ShoppingRec* rec)
	{
		int flag = 0;
		bool success = fscanf(sfptr, "%[^,],%d,%d\n",
			rec->m_title, &rec->m_quantity, &flag) == 3;
		rec->m_bought = !!flag;
		return success;
	}
	void fwriteShoppintRec(const ShoppingRec* rec)
	{
		fprintf(sfptr, "%s,%d,%d\n", rec->m_title, rec->m_quantity, rec -> m_bought);
	}
}
