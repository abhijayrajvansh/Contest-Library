
bool is_perfect_square(int64_t n){
    int64_t s = int64_t(round(sqrt(n)));
    return s * s == n;
}
