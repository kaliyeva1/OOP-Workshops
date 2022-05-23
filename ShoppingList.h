#pragma once
/*********************************************************
 * Name: Khoshgadam Aliyeva
 * Student ID: 155103195
 * Seneca email: kaliyeva@myseneca.ca
 * Section: OOP 244 NGG
 *
 * I have done all the coding by myself and only copied the code
 * that my professor provided to complete my workshops and assignments.
 **********************************************************/
#ifndef sdds_ShoppingList_H // replace with relevant names
#define sdds_ShoppingList_H
namespace sdds
{
	bool loadList();
	void displayList();
	void removeBoughtItems();
	void removeItem(int index);
	bool saveList();
	void clearList();
	void toggleBought();
	void addItemToList();
	void removeItemfromList();
	bool listIsEmpty();
}
#endif
