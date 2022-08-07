
//यो न हृष्यति न द्वेष्टि न शोचति न काङ्क्षति। शुभाशुभपरित्यागी भक्तिमान्यः स मे प्रियः॥
template<typename T_container, typename T = typename 

enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
istream& operator >> (istream &is, T_container &v) { 
   for(T &x : v) is >> x; return is;
}
 
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) { 
   return os << '(' << p.first << ", " << p.second << ')'; 
}
 
template<typename T_container, typename T = typename 

enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
ostream& operator << (ostream &os, const T_container &v) { 
   os << '{'; string sep; 
   for (const T &x : v) os << sep << x, sep = ", "; 
   return os << '}'; 
}

template<class P, class Q = vector<P>, class R = less<P>> 
ostream& operator << (ostream& out, priority_queue<P, Q, R> const& M){
    static priority_queue<P, Q, R> U;
    U = M;
    out << "{ ";
    while(!U.empty())
        out << U.top() << " ", U.pop();
    return (out << "}");
}

template<class P> ostream& operator << (ostream& out, queue<P> const& M){
    static queue<P> U;
    U = M;
    out << "{"; string sep;
    while(!U.empty()){
        out << sep << U.front(); sep = ", "; U.pop();
    }
    return (out << "}");
}

template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << endl;
}

template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
        int count_open = 0, len = 1;
        for(int k = 1; ; ++k){
        char cur = *(names + k);
        count_open += (cur == '(' ? 1 : (cur == ')' ? -1: 0));

        if (cur == ',' && count_open == 0){
            const char* comma = names + k;
            cerr.write(names, len) << " : " << arg1 << " | ";
            __f(comma + 1, args...);
            return;
        }
        
        len = (cur == ' ' ? len : k + 1);
    }
}

#ifdef ABHIJAY_DEBUG
#define deb(...) __f(#__VA_ARGS__, __VA_ARGS__);
#else
#define deb(...) 
#endif
