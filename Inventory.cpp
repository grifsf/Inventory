#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
/*
 * Constructor for inventory
 * @param name: string that is name of item
 * @param price: float that is the price of said item
 * @param count: how many of item is in stock
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}
/*
 *Void function that sells stock
 */
void Inventory::sell()
{
  if(m_in_stock==0)
  {
    std::cout << "Sorry, that item is out of stock" << endl;
  }
  else
  {
    m_in_stock--;
  }
}
/*
 *Creates and ostream with values taken from the item
 *@param stream: ostream passes by reference
 *@param item: Inventory item passed by reference
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
