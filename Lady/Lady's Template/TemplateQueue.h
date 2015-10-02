#ifndef TEMPLATEQUEUE_H
#define TEMPLATEQUEUE_H
/**@file TemplateQueue.h
  *@brief Activity 10.3 implements minimal Temlatized Queue with std::vector.
  * <PRE>
  * Activity 10.3 
  * 1. This program implements the templatized version of IntQueue.
  * 2. Covert the IntQueue.h and IntQueue.cpp files in a way so that they can be used for any datatypes.
  * </PRE>
 */

/**@class TemplateQueue
   @brief Implements minimal Templatized Queue with std::vector
 */

#include <vector>
#include <iostream>
using namespace std;

//Declare TemplateQueue here.
template <class Q>

class IntQueue

{
 private:
	vector<Q> m_data; ///<declares vector of type Q.
	Q d;
 public:
  /**@fn add(int& d)
     @brief adds an int to the end of the m_data.
     This adds an element to the end of the Queue.
     @param d int&
   */
 void add(Q d);

  /**@fn remove()
     @brief removes an element from the begining of m_data.
     This removes an element from the beginning of the Queue.
  */
 void remove();

  /**@fn print()
     @brief prints the contents of the Queue.
   */
  void print();
};


//Define TemplateQueue here.
template <class Q>
void IntQueue<Q>::add(Q d)
{
     m_data.push_back(d);
}
template <class Q>
void IntQueue<Q>::remove()
{
	if(m_data.size() <=0)
	{
		std::cout << "No Element in the Queue" << std::endl;
		return;
	}
      m_data.erase(m_data.begin( ) + 0, m_data.begin( ) + 1);
}
template <class Q>
void IntQueue<Q>::print()
{
   
  for ( int i = 0 ; i < m_data.size() ; i++ )
    std::cout << " " << m_data[i] << std::endl;

};



#endif //TEMPLATEQUEUE_H
