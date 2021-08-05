
template <class type>
struct Node{
    type info; 
    Node<type> *link; 
};



template <class type>
class unorderLinkedList{
protected: 
        Node<type> *first = nullptr; 
        Node<type> *last = nullptr ;

public:

    void insertFirst(const type& newItem){
        Node<type> *newNode; 
        newNode = new Node<type>; 
        newNode->info = newItem;
        newNode->link = first; 
        first = newNode; 

        if(last == nullptr)
            last = newNode; 
    }
    void insertLast(const type& newItem){
        Node<type> *newNode; 
     
        newNode = new Node<type>; 
        newNode->info = newItem; 
        newNode->link = nullptr; 

        if(first == nullptr){
            first = newNode; 
            last = newNode; 
        }else{
            last->link = newNode; 
            last = newNode; 
        }
    }

};