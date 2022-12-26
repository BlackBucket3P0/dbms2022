#include <initializer_list>
#include <string>

#include <Odeque.cpp>
 
/**
* \brief .
*/
class Deque 
{
public:
 
	/**
	* \brief Хвост дека.
	*/
	Odeque* tail;
 
	/**
	* \brief Начало дека.
	*/
	Odeque* head;
 
	/**
	* \brief Размер массива.
	*/
	size_t size;
 
	/**
	* \brief Убирает элемент начиная с переднего фронта .
	* \return .
	*/
	Odeque* RemoveFront() noexcept;
 
	// Убирате элемент начиная с заднего фронта 
    Odeque* RemoveBack() noexcept;
 
	/**
	* \brief .
	*/
	Deque() noexcept;
 
	/**
	* \brief .
	* \param Odeques .
	*/
	Deque(const std::initializer_list<int> odeques) noexcept;
 
	/**
	* \brief .
	*/
	~Deque();
 
	/**
	* \brief .
	* \return .
	*/
	bool PushFront(Odeque* odeque) noexcept;
    bool PushBack(Odeque* odeque) noexcept;
 
	/**
	* \brief .
	* \return .
	*/
	bool IsEmpty() const noexcept;
 
	/**
	* \brief .
	*/
	void Clear() noexcept;
 
	size_t GetSize() const noexcept;
 
	std::string ToString() const noexcept;
};