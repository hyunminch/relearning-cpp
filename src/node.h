#include <iostream>
#include <memory>
#include <vector>

namespace nitrogenice {
  template<class T>
  class Node {
  public:
    Node(T value, std::shared_ptr<Node<T>> left, std::shared_ptr<Node<T>> right);

    explicit Node(T value);

    T& get_value();

    void set_left(std::shared_ptr<Node<T>> left);

    void set_right(std::shared_ptr<Node<T>> right);

    std::vector<T> traverse();
  private:
    T value;

    std::shared_ptr<Node<T>> left;

    std::shared_ptr<Node<T>> right;

    void TraverseAux(std::shared_ptr<std::vector<T>> acc);
  };

  template<class T>
  Node<T>::Node(T value): value { value }, left { nullptr }, right { nullptr } {}

  template<class T>
  Node<T>::Node(T value, std::shared_ptr<Node<T>> left, std::shared_ptr<Node<T>> right): value { value }, left { left }, right { right } {}

  template<class T>
  T& Node<T>::get_value() { return this->value; }

  template<class T>
  std::vector<T> Node<T>::traverse() {
    auto acc = std::make_shared<std::vector<int>>();
    this->TraverseAux(acc);
    return *acc;
  }

  template<class T>
  void Node<T>::TraverseAux(std::shared_ptr<std::vector<T>> acc) {
    acc->push_back(this->get_value());

    if (this->left)
      this->left->TraverseAux(acc);

    if (this->right)
      this->right->TraverseAux(acc);
  }

  template<class T>
  void Node<T>::set_right(std::shared_ptr<Node<T>> right) { this->right = right; }

  template<class T>
  void Node<T>::set_left(std::shared_ptr<Node<T>> left) { this->left = left; }
}