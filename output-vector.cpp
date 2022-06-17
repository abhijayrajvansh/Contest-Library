
template <class T>
void output_vector(vector<T>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << nl;
}
