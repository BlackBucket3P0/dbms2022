#include <sstream>
#include "deque.h"
 
Deque::Deque() noexcept
	: tail(nullptr), head(nullptr), size(0)
{
}
 
Deque::Deque(const std::initializer_list<int> Odeques) noexcept
	: Deque()
{
	for (auto it = Odeques.begin(); it != Odeques.end(); it++)
	{
		Odeque *el = new Odeque(*it);
		this->PushFront(el);
	}
}
 
Deque::~Deque()
{
	this->Clear();
}
 
bool Deque::PushFront(Odeque* Odeque) noexcept
{
	if (this->IsEmpty())
	{
		this->tail = this->head = Odeque;
		this->size++;
		return true;
	}
 
	this->tail->next = Odeque;
	this->tail = this->tail->next;
	this->size++;
	return true;
}
 
bool Deque::PushBack(Odeque* Odeque) noexcept
{
	if (this->IsEmpty())
	{
		this->tail = this->head = Odeque;
		this->size++;
		return true;
	}
 
	this->head->next = Odeque;
	this->head = this->head->next;
	this->size++;
	return true;
}
 
Odeque* Deque::RemoveFront() noexcept
{
	auto temp = this->head;
	this->head = this->head->next;
	this->size--;
	return temp;
}
 
Odeque* Deque::RemoveBack() noexcept
{
	auto temp = this->tail;
	this->tail = this->tail->next;
	this->size--;
	return temp;
}
 
bool Deque::IsEmpty() const noexcept
{
	return this->head == nullptr;
}
 
void Deque::Clear() noexcept
{
	while (!this->IsEmpty())
	{
		this->RemoveFront();
	}
}
 
size_t Deque::GetSize() const noexcept
{
	return this->size;
}
 
std::string Deque::ToString() const noexcept
{
	std::stringstream buffer;
	buffer << "{ ";
	auto temp = this->head;
	while (temp->next != nullptr)
	{
		buffer << temp->ToString() << ", ";
		temp = temp->next;
	}
	buffer << temp->ToString() << " }";
 
	return buffer.str();
}