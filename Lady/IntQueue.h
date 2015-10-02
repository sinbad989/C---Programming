#ifndef INTQUEUE_H
#define INTQUEUE_H
/**@file IntQueue.h
   @brief implements minimal Queue with std::vector.
   * This program shall be used as the base for activity 10.3.
   * Based on this create a templatized version of this program so that it can be used for any datatype.
 */

/**@class IntQueue
   @brief Implements minimal Queue with std::vector
 */
class IntQueue
{
 private:
  std::vector<int> m_data; ///<declares vector of integers.
 public:
  /**@fn add(int& d)
     @brief adds an int to the end of the m_data.
     This adds an element to the end of the Queue.
     @param d int&
   */
  void add(int& d);

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


void IntQueue :: add(int d)
{
     m_data.push_back(d);
}

void IntQueue::remove()
{
	if(m_data.size() <=0)
	{
		std::cout << "No Element in the Queue" << std::endl;
		return;
	}
      m_data.erase(m_data.begin( ) + 0, m_data.begin( ) + 1);
}

void IntQueue::print()
{
   
  for ( int i = 0 ; i < m_data.size() ; i++ )
    std::cout << " " << m_data[i] << std::endl;

}

#endif //INTQUEUE_H
