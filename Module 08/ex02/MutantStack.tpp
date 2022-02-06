template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() const {
    return iterator(*this);
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() const {
    return iterator(*this, this->size());
}

template <class T, class Container>
MutantStack<T, Container>::iterator::iterator(const MutantStack &stack, long position): position(position) {
    MutantStack<T, Container> clone = MutantStack(stack);
    for (; !clone.empty(); clone.pop())
        content.push_back(clone.top());

    std::reverse(content.begin(), content.end());
}

template<class T, class Container>
MutantStack<T, Container>::iterator::~iterator() {
    content.clear();
}

template <class T, class Container>
void MutantStack<T, Container>::iterator::operator++() {
    //if (position > content.size())
        position++;
}

template <class T, class Container>
void MutantStack<T, Container>::iterator::operator--() {
    if (position >= 1)
        position--;
}

template <class T, class Container>
bool MutantStack<T, Container>::iterator::operator!=(const iterator &other) const {
    return other.content != content || other.position != position;
}

template <class T, class Container>
T MutantStack<T, Container>::iterator::operator*() const {
    return content.at(position);
}
