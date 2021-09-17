/*
Topic:STL Introduction in c++
------------------------------------------
STL:Standard Template Libary
The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and 
functions such as lists, stacks, arrays, etc. 
It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. 

STL has four components
-------------------------
Algorithms(basic inbuilt algo like sorting reversing searching)
Containers(we need this to store the data)
Functions(not imp)
Iterators(we use this for traversing the container)


Template
-----------------
A template is a simple and yet very powerful tool in C++.
The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. 

For example, a software company may need sort() for different data types. 
Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter. 


How do templates work? 
------------------------
Templates are expanded at compiler time. 
This is like macros. 
The difference is, the compiler does type checking before template expansion. 
The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of same function/class. 

-----------------------
Topic : std::array
----------------------
syntax : std::array<datatype,size>arrayname;
note:
------
1.std:array is a container that encapsulates fixed size arrays.
2.arraysize is needed at compile time
3.Assign by value is actually by value
4.Access Elements:
   a.at()-->it will give bound execption
   b.[] --->dosent give that execption
   c.front()-->
   d.back()
   e.data()//give access to underlying array
   */




  /*
  #include<iostream>
  #include<array>
  #include <iterator>
  #include <string>
  using namespace std;
  int main(){
      
      //Declare
     // std::array<int,5> myarray;

      //Initialization
     // std::array<int,5>myarray1={1,2,3,4,5}; //initializer list

     // std::array<int,5>myarray2 {1,2,3,4,5};//uniform initialization

     // std::array<int,5> myarray;
     // myarray ={1,2,3,4,5};
      array<int, 5> ar1{{3, 4, 5, 1, 2}};
      array<int, 5> ar2 = {1, 2, 3, 4, 5};
      array<string, 2> ar3 = {{"a", "b"}};
 
  cout << "Sizes of arrays are" << endl;
  cout << ar1.size() << endl;
  cout << ar2.size() << endl;
  cout << ar3.size() << endl;

  cout << "\nInitial ar1 : ";
  for(auto i:ar1){
      cout<<i<<" ";
  }
  // container operations are supported
  //sort(ar1.begin(),ar1.end());
  ar2.fill(10);

   // ranged for loop is supported
  cout << "\nar3 : ";
  for (auto &s : ar3){
    cout << s << ' '<<endl;
  }
  array <int , 3> arr={'G','f','A'};  // ASCII val of 'G' =71
    cout<<arr.front() <<" "<<arr.back();
    
    array<int ,3>a1={'G','M','G'};
    array<int , 3>a2


  
      return 0;
  }
*/




/*





-----------------------------
topic :std::Vector
-----------------------------
//notes
1.vector is a sequence container and also know as Dynamic Array or ArrayList
2.its size can grow and shrink dynamically and no need to provide sixe at compile time
3.Element Acess
  a.at()
  b.[]
  c.front()
  d.back()
  e.data()

4.Modifiers:
-----------------
  a.insert()
  b.emplace()
  c.push_back()
  d.pop_back()
  e.resize()
  f.swap()
  g.erase()
  h.clear()



begin() – Returns an iterator pointing to the first element in the vector

end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

cbegin() – Returns a constant iterator pointing to the first element in the vector.

cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.

crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

size() – Returns the number of elements in the vector.

max_size() – Returns the maximum number of elements that the vector can hold.

capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.

resize(n) – Resizes the container so that it contains ‘n’ elements.

empty() – Returns whether the container is empty.

shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.

reserve() – Requests that the vector capacity be at least enough to contain n elements.

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector

at(g) – Returns a reference to the element at position ‘g’ in the vector

front() – Returns a reference to the first element in the vector

back() – Returns a reference to the last element in the vector

data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

assign() – It assigns new value to the vector elements by replacing old ones

push_back() – It push the elements into a vector from the back

pop_back() – It is used to pop or remove elements from a vector from the back.

insert() – It inserts new elements before the element at the specified position

erase() – It is used to remove elements from a container from the specified position or range.

swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.

clear() – It is used to remove all the elements of the vector container

emplace() – It extends the container by inserting new element at position

emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector  
  
  */
 /*

 
#include<iostream>
  #include<vector>
  #include <iterator>
  #include <string>
  using namespace std;
  int main(){
      vector<int> g1;
  
    for (int i = 1; i <= 15; i++)
        g1.push_back(i);
  
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

     if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
  
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
    cout << "\nReference operator [g] : g1[2] = " << g1[2];
  
    cout << "\nat : g1.at(4) = " << g1.at(4);
  
    cout << "\nfront() : g1.front() = " << g1.front();
  
    cout << "\nback() : g1.back() = " << g1.back();
  
    // pointer to the first element
    int* pos = g1.data();
  
    cout << "\nThe first element is " << *pos;



    vector<int> v;
  
    // fill the array with 10 five times
    v.assign(5, 10);
  
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
  
    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  
    // removes last element
    v.pop_back();
  
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
  
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
  
    cout << "\nThe first element is: " << v[0];
  
    // removes the first element
    v.erase(v.begin());
  
    cout << "\nThe first element is: " << v[0];
  
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
  
    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
  
    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
  
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
  
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
    // Swaps v1 and v2
    v1.swap(v2);
  
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";



  
  
    return 0;

  }
*/

/*

---------------------
Topic : Forward List
---------------------

1.This is single linked list what we know from c programming language
2.why forward list why not single list? because it moves only forward
3.we should use this list class insted of traditional single linked list because 
  a.well tested
  b.few Available operations
Forward list in STL implements singly linked list. 
Introduced from C++11, forward list are more useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements. 
It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements,
thus increasing the storage space required to store each element. The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly. 

1. assign() :- This function is used to assign values to forward list, its another variant is used to assign repeated elements. 

2. push_front() :- This function is used to insert the element at the first position on forward list. The value from this function is copied to the space before first element in the container. The size of forward list increases by 1.

3. emplace_front() :- This function is similar to the previous function but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward list.

4. pop_front() :- This function is used to delete the first element of list. 

4. insert_after() This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.

5. emplace_after() This function also does the same operation as above function but the elements are directly made without any copy operation.

6. erase_after() This function is used to erase elements from a particular position in the forward list.

7. remove() :- This function removes the particular element from the forward list mentioned in its argument.

8. remove_if() :- This function removes according to the condition in its argument



  #include<iostream>
  #include<forward_list>
  using namespace std;

  int main(){
      forward_list<int>list1={5,6,7,8}
      forward_list<int> flist1;
 
    // Declaring another forward list
    forward_list<int> flist2;
 
    // Assigning values using assign()
    flist1.assign({1, 2, 3});
 
    // Assigning repeating values using assign()
    // 5 elements with value 10
    flist2.assign(5, 10);
    cout << "The elements of first forward list are : ";
    for (int&a : flist1)
        cout << a << " ";
    cout << endl;
     
    cout << "The elements of second forward list are : ";
    for (int&b : flist2)
        cout << b << " ";
    cout << endl;

    forward_list<int> flist = {10, 20, 30, 40, 50};
 
    // Inserting value using push_front()
    // Inserts 60 at front
    flist.push_front(60);
     
    // Displaying the forward list
    cout << "The forward list after push_front operation : ";
    for (int&c : flist)
        cout << c << " ";
    cout << endl;
     
    // Inserting value using emplace_front()
    // Inserts 70 at front
    flist.emplace_front(70);
     
    // Displaying the forward list
    cout << "The forward list after emplace_front operation : ";
    for (int&c : flist)
       cout << c << " ";
    cout << endl;
     
    // Deleting first value using pop_front()
    // Pops 70
    flist.pop_front();
     
    // Displaying the forward list
    cout << "The forward list after pop_front operation : ";
    for (int&c : flist)
        cout << c << " ";
    cout << endl;

    forward_list<int> flist = {10, 20, 30} ;
     
    // Declaring a forward list iterator
    forward_list<int>::iterator ptr;
 
    // Inserting value using insert_after()
    // starts insertion from second position
    ptr =  flist.insert_after(flist.begin(), {1, 2, 3});
     
    // Displaying the forward list
    cout << "The forward list after insert_after operation : ";
    for (int&c : flist)
        cout << c << " ";
    cout << endl;
     
    // Inserting value using emplace_after()
    // inserts 2 after ptr
    ptr = flist.emplace_after(ptr,2);
     
    // Displaying the forward list
    cout << "The forward list after emplace_after operation : ";
    for (int&c : flist)
        cout << c << " ";
    cout << endl;
     
    // Deleting value using erase.after Deleted 2
    // after ptr
    ptr = flist.erase_after(ptr);
     
    // Displaying the forward list
    cout << "The forward list after erase_after operation : ";
    for (int&c : flist)
        cout << c << " ";
    cout << endl;
 
 
    return 0;


  }

  */
 /*


Topic : List
===============
1.This is double linked list what we know from C Programing language
2.List is sequence container that allow non-contigous memory allocation
3.List is faster compared to other sequence container (Vector,forward list,deque) in trems of insertion ,removal , moving elements in any postion provided we have the iterator of postion/
 */



/*
--------------
Topic : Map
---------------
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. 
No two mapped values can have same key values.

1. Syntax: map<int,int>obj;
2. map is associative container that stores elements in key value combination
   where key should be unique ,otherwise it overrides the previous value
3.it is implemented using self-balanced Binary Search tree(avl/Red black tree).
4.its store key value pair in sorted order on basis of key
5.Generally used in Dictionary type problem


begin() – Returns an iterator to the first element in the map

end() – Returns an iterator to the theoretical element that follows last element in the map

size() – Returns the number of elements in the map

max_size() – Returns the maximum number of elements that the map can hold

empty() – Returns whether the map is empty

pair insert(keyvalue, mapvalue) – Adds a new element to the map

erase(iterator position) – Removes the element at the position pointed by the iterator

erase(const g)– Removes the key value ‘g’ from the map

clear() – Removes all the elements from the map


#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{

	// empty map container
	map<int, int> gquiz1;

	// insert elements in random order
	gquiz1.insert(pair<int, int>(1, 40));
	gquiz1.insert(pair<int, int>(2, 30));
	gquiz1.insert(pair<int, int>(3, 60));
	gquiz1.insert(pair<int, int>(4, 20));
	gquiz1.insert(pair<int, int>(5, 50));
	gquiz1.insert(pair<int, int>(6, 50));
	gquiz1.insert(pair<int, int>(7, 10));

	// printing map gquiz1
	map<int, int>::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// assigning the elements from gquiz1 to gquiz2
	map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

	// print all elements of the map gquiz2
	cout << "\nThe map gquiz2 after"
		<< " assign from gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// remove all elements up to
	// element with key=3 in gquiz2
	cout << "\ngquiz2 after removal of"
			" elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	// remove all elements with key = 4
	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	cout << endl;

	// lower bound and upper bound for map gquiz1 key = 5
	cout << "gquiz1.lower_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = "
		<< gquiz1.lower_bound(5)->second << endl;
	cout << "gquiz1.upper_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = "
		<< gquiz1.upper_bound(5)->second << endl;

	return 0;
}
List of all functions of Map:

map insert() in C++ STL– Insert elements with a particular key in the map container. .

map count() function in C++ STL– Returns the number of matches to element with key value ‘g’ in the map.

map equal_range() in C++ STL– Returns an iterator of pairs. The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to k.

map erase() function in C++ STL– Used to erase element from the container.

map rend() function in C++ STL– Returns a reverse iterator pointing to the theoretical element right before the first key-value pair in the map(which is considered its reverse end).

map rbegin() function in C++ STL– Returns a reverse iterator which points to the last element of the map.

map find() function in C++ STL– Returns an iterator to the element with key value ‘g’ in the map if found, else returns the iterator to end.

map crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator referring to the last element in the map container. crend() returns a constant reverse iterator pointing to the theoretical element before the first element in the map.

map cbegin() and cend() function in C++ STL– cbegin() returns a constant iterator referring to the first element in the map container. cend() returns a constant iterator pointing to the theoretical element that follows last element in the multimap.

map emplace() in C++ STL– Inserts the key and its element in the map container.

map max_size() in C++ STL– Returns the maximum number of elements a map container can hold.

map upper_bound() function in C++ STL– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will go after the element with key value ‘g’ in the map

map operator= in C++ STL– Assigns contents of a container to a different container, replacing its current content.

map lower_bound() function in C++ STL– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will not go before the element with key value ‘g’ in the map.

map emplace_hint() function in C++ STL– Inserts the key and its element in the map container with a given hint.

map value_comp() in C++ STL– Returns the object that determines how the elements in the map are ordered (‘<' by default).

map key_comp() function in C++ STL– Returns the object that determines how the elements in the map are ordered (‘<' by default).

map::size() in C++ STL– Returns the number of elements in the map.

map::empty() in C++ STL– Returns whether the map is empty.

map::begin() and end() in C++ STL– begin() returns an iterator to the first element in the map. end() returns an iterator to the theoretical element that follows last element in the map

map::operator[] in C++ STL– This operator is used to reference the element present at position given inside the operator.

map::clear() in C++ STL– Removes all the elements from the map.

map::at() and map::swap() in C++ STL– at() function is used to return the reference to the element associated with the key k. swap() function is used to exchange the contents of two maps but the maps must be of same type, although sizes may differ.


*/
/*
Multimap is similar to map with an addition that multiple elements can have same keys. Also, it is NOT required that the key value and mapped value pair has to be unique in this case.
One important thing to note about multimap is that multimap keeps all the keys in sorted order always. These properties of multimap makes it very much useful in competitive programming.

#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
	multimap <int, int> gquiz1; // empty multimap container

	// insert elements in random order
	gquiz1.insert(pair <int, int> (1, 40));
	gquiz1.insert(pair <int, int> (2, 30));
	gquiz1.insert(pair <int, int> (3, 60));
	gquiz1.insert(pair <int, int> (6, 50));
	gquiz1.insert(pair <int, int> (6, 10));

	// printing multimap gquiz1
	multimap <int, int> :: iterator itr;
	cout << "\nThe multimap gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	//adding elements randomly,
	// to check the sorted keys property
	gquiz1.insert(pair <int, int> (4, 50));
	gquiz1.insert(pair <int, int> (5, 10));
	
	// printing multimap gquiz1 again
	
	cout << "\nThe multimap gquiz1 after adding extra elements is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;



	// assigning the elements from gquiz1 to gquiz2
	multimap <int, int> gquiz2(gquiz1.begin(),
								gquiz1.end());

	// print all elements of the multimap gquiz2
	cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// remove all elements up to
	// key with value 3 in gquiz2
	cout << "\ngquiz2 after removal of elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	// remove all elements with key = 4
	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n" ;
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	cout << endl;

	//lower bound and upper bound for multimap gquiz1 key = 5
	cout << "gquiz1.lower_bound(5) : " << "\tKEY = ";
	cout << gquiz1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second << endl;
	cout << "gquiz1.upper_bound(5) : " << "\tKEY = ";
	cout << gquiz1.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second << endl;

	return 0;


    The multimap gquiz1 is : 
    KEY    ELEMENT
    1    40
    2    30
    3    60
    6    50
    6    10


The multimap gquiz1 after adding extra elements is : 
    KEY    ELEMENT
    1    40
    2    30
    3    60
    4    50
    5    10
    6    50
    6    10


The multimap gquiz2 after assign from gquiz1 is : 
    KEY    ELEMENT
    1    40
    2    30
    3    60
    4    50
    5    10
    6    50
    6    10


gquiz2 after removal of elements less than key=3 : 
    KEY    ELEMENT
    3    60
    4    50
    5    10
    6    50
    6    10

gquiz2.erase(4) : 1 removed 
    KEY    ELEMENT
    3    60
    5    10
    6    50
    6    10

gquiz1.lower_bound(5) :     KEY = 5        ELEMENT = 10
gquiz1.upper_bound(5) :     KEY = 6        ELEMENT = 50


*/