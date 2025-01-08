std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
for (int i = 0; i < vec.size(); ++i) {
  vec[i] = i * 2; 
}
// Or using iterators
for (auto it = vec.begin(); it != vec.end(); ++it) {
  *it *= 2; 
}