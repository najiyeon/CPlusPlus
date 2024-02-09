#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node<T>* next;
};

template <class T>
class List {
private:
    Node<T> *head;
public:
    List() : head(NULL) {};
    ~List(){
        Node<T> *tmp = head;
        while (tmp != NULL) {
            Node<T> *next = tmp->next;
            delete tmp;
            tmp = next;
        }
    }
    List(T* arr, int n_nodes){
        head = new Node<T>;
        head->data = arr[0];
        Node<T> *tmp = head;
        for (int i = 1; i < n_nodes; i++) {
            tmp->next = new Node<T>;
            tmp = tmp->next;
            tmp->data = arr[i];
        }
    }
    void insert_at(int idx, const T& data){
        Node<T> *tmp = head;
        for (int i = 0; i < idx - 1; i++) {
            tmp = tmp->next;
        }
        Node<T> *new_node = new Node<T>;
        new_node->data = data;
        new_node->next = tmp->next;
        tmp->next = new_node;
    }
    void remove_at(int idx){
        Node<T> *tmp = head;
        for (int i = 0; i < idx - 1; i++) {
            tmp = tmp->next;
        }
        Node<T> *del_node = tmp->next;
        tmp->next = del_node->next;
        delete del_node;
    }
    void pop_back(){
        Node<T> *tmp = head;
        while (tmp->next->next != NULL) {
            tmp = tmp->next;
        }
        delete tmp->next;
        tmp->next = NULL;
    }
    void push_back(const T& val){
        Node<T> *tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new Node<T>;
        tmp->next->data = val;
        tmp->next->next = NULL;
    }
    void pop_front(){
        Node<T> *tmp = head;
        head = head->next;
        delete tmp;
    }
    void push_front(const T& val){
        Node<T> *new_node = new Node<T>;
        new_node->data = val;
        new_node->next = head;
        head = new_node;
    }
    friend ostream& operator<<(ostream& out, List& rhs);//print out nodes
};

ostream& operator<<(ostream& out, List<int>& rhs){
    Node<int> *tmp = rhs.head;
    out << tmp->data;
    tmp = tmp->next;

    while (tmp != NULL) {
        out << ", "<< tmp->data;
        tmp = tmp->next;
    }
    return out;
}
