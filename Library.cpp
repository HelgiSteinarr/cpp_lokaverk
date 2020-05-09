#include "Library.h"
#include "LibraryBook.h"
#include "LibraryMagazine.h"
#include "LibraryVideo.h"

Library::Library()
{
    head = nullptr; 
}

Library::~Library()
{
    LibraryNode* newHead;
    while(this->head)
    {
        newHead = this->head->next;
        delete this->head;
        this->head = newHead;
    }

}

void Library::add(LibraryBase *libraryItem)
{
    LibraryNode* newNode = new LibraryNode(libraryItem);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    LibraryNode* current = head;
    while (current->next != nullptr) {
        if (libraryCastOrderIndex(current->next->data) > libraryCastOrderIndex(libraryItem)) {
            newNode->next = current->next;
            break;
        }
        current = current->next;
    }
    
    current->next = newNode;
}

LibraryBase *Library::retrieve(int id)
{
    LibraryNode *current = this->head;
    if(current == nullptr)
        return nullptr;
    while(current->next != nullptr && current->data->getId() != id)
    {
        current = current->next;
    }
    if(current->data->getId() != id)
        return nullptr;
    return current->data;
}

void Library::remove(int id)
{
    LibraryNode *current = this->head;
    LibraryNode *prev = current;
    if(current == nullptr)
        return;
    while(current->next != nullptr && current->data->getId() != id)
    {
        prev = current;
        current = current->next;
    }
    if(current->data->getId() != id)
        return;
    prev->next = current->next;
    delete current;

}
void Library::update(int id, LibraryBase *newData)
{
    LibraryNode *current = this->head;
    if(current == nullptr)
        return;
    while(current->next != nullptr && current->data->getId() != id)
    {
        current = current->next;
    }
    if(current->data->getId() != id)
        return;
    current->data = newData;
}

int Library::libraryCastOrderIndex(LibraryBase *libraryItem) {
    int res;
    if (dynamic_cast<LibraryBook*>(libraryItem))
        res = 0;
    else if (dynamic_cast<LibraryMagazine*>(libraryItem))
        res = 1;
    else if (dynamic_cast<LibraryVideo*>(libraryItem))
        res = 2;
    return res;
}

void Library::printAll()
{
    LibraryNode *current = this->head;
    if(current == nullptr)
        return;
    while(current->next != nullptr)
    {   
		current->data->print();
        current = current->next;
    }
	current->data->print();
}