std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int* ptr = &vec[0];
for (int i = 0; i < 10; ++i) {
  ptr[i] = i * 2; 
}
// accessing vec[i] after modifying ptr will result in unexpected behavior