#include <iostream>

int * increase_capacity(int * data, int &capacity, int size){
    capacity = capacity + 10;
    int* new_array = new int[capacity];
    for (int i=0; i<size; i++)
        new_array[i] = data[i]
    return new_array;
} 

int * push_back(int *data, int &capacity, int &size, int value){
if (size==capacity){
data = increase_capacity(data, capacity, size); data[size++]=value;
return data;
}
}

int main(){
int *data, size=0, capacity=10,x; data = new int[capacity];
while (std::cin >> x, x!=-1){
data = push_back(data, capacity, size, x);
}
/* ... */ 
delete [] data; 
return 0;
}









int * increase_capacity(int * data, int &capacity, int size){
int* new_array = new int[capacity+10];
for (int i=0 ; i<size ; ++i)
new_array[i] = data[i];
int* old_array = data;
delete [] old_array;
capacity = capacity+10;
return new_array;
