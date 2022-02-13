template<typename T>
void Span::addNumber(T start, T end) {
    if (std::distance(start, end) + set.size() > max)
        throw Span::TooManyNumber();
    set.insert(start, end);
}
