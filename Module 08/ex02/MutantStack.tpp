template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
    MutantStack<T, Container> tmpStack = *this;
    return iterator(tmpStack);
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
    MutantStack<T, Container> tmpStack = *this;
    return iterator(tmpStack, tmpStack.size());
}

template <class T, class Container>
MutantStack<T, Container>::iterator::iterator(MutantStack &stack, long position): position(position) {
    for (; !stack.empty(); stack.pop())
        content.push_back(stack.top());

    std::reverse(content.begin(), content.end());
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
