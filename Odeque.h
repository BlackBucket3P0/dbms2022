#include<string>


/**
* \brief 
*/
struct Odeque
{
	// Значения элемента
	int value; 

	/**
	* \brief Консрукттор с параметрами.
	* \param value .
	*/
	Odeque(const int value) noexcept;

	/**
	* \brief .
	*/
	~Odeque();

	// Указатель на следующий элемент
	Odeque* next;

	std::string ToString() const noexcept;

	bool operator ==(const Odeque& other);
	bool operator !=(const Odeque& other);
};