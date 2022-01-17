
#ifndef STACK_H
#define STACK_H

// this is the node class used to build up the LIFO stack
template <class Data>
class Node {

private:

	Data holdMe;
	Node *next;
	
public:

	/*****************************************/
	/** WHATEVER CODE YOU NEED TO ADD HERE!! */
	/*****************************************/
    Data getHoldMe() const {
        return holdMe;
    }

    void setHoldMe(Data holdMeData) {
        Node::holdMe = holdMeData;
    }

    Node *getNext() const {
        return next;
    }

    void setNext(Node *nextData) {
        Node::next = nextData;
    }

};

// a simple LIFO stack
template <class Data> 
class Stack {

	Node <Data> *head;

public:

	// destroys the stack
	~Stack () { /* your code here */
        while(head != NULL){
            Node<Data>* oldHead = head;
            head = head->getNext();
            delete oldHead;
        }
    }

	// creates an empty stack
	Stack () {/* your code here */
        head = NULL;
    }

	// adds pushMe to the top of the stack
	void push (Data pushMe) { /* your code here */
        auto* newHead = new Node<Data>;
        newHead->setHoldMe(pushMe);
        newHead->setNext(head);
        head = newHead;
    }

	// return true if there are not any items in the stack
	bool isEmpty () { /* replace with your code */
        if (head == NULL) return true;
        else return false;
    }

	// pops the item on the top of the stack off, returning it...
	// if the stack is empty, the behavior is undefined
	Data pop () { /* replace with your code */
        Data result = head->getHoldMe();
        Node<Data>* oldHead = head;
        head = head->getNext();
        delete oldHead;
        return result;
    }
};

#endif
