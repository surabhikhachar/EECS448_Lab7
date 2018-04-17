#include "Tester.h"
using namespace std;

//runs all the tests
void Tester::run()
{
  cout << "Test 1: Ensuring that isEmpty is true for a new list with nothing in the list: ";
  testStatus(test1());
  cout << "Test 2: A non-empty list has isEmpty return false: ";
  testStatus(test2());
  cout << "Test 3: Removing all the items in a list will result in isEmpty being true: ";
  testStatus(test3());
  cout << "Test 4: A list that is empty will have a size of 0: ";
  testStatus(test4());
  cout << "Test 5: A list with one added integer will have a size of 1: ";
  testStatus(test5());
  cout << "Test 6: List with one int added and one int removed has a size of zero: ";
  testStatus(test6());
  cout << "Test 7: The search method will find items that truly do exist in the list: ";
  testStatus(test7());
  cout << "Test 8: Items that are not in the list will not be found by the search method: ";
  testStatus(test8());
  cout << "Test 9: Ensures that addBack() method correctly adds an element at the right position in the list: ";
  testStatus(test9());
  cout << "Test 10: Ensures that addBack() method adds the right amount of elements to a list: ";
  testStatus(test10());
  cout << "Test 11: Ensures that addFront() method correctly adds an element at the right position in the list: ";
  testStatus(test11());
  cout << "Test 12: Ensures that addFront() method adds the right amount of elements to a list: ";
  testStatus(test12());
  cout << "Test 13: Ensures that removeBack() method removes the correct number of elements from the list: ";
  testStatus(test13());
  cout << "Test 14: Ensures that removeBack() method removes the correct elements from the list: ";
  testStatus(test14());
  cout << "Test 15: Ensures that removeFront() method removes the correct number of elements from the list: ";
  testStatus(test15());
  cout << "Test 16: Ensures that removeFront() method removes the correct elements from the list: ";
  testStatus(test16());
}

//returns the status of the test
void Tester::testStatus(bool ts)
{
  if(ts == true)
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FAILED" << endl;
  }
}

//ensuring that isEmpty is true for a new list with nothing in the list
bool Tester::test1()
{
  LinkedListOfInts testList;
  if(testList.isEmpty() == true)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//a non-empty list has isEmpty return false
bool Tester::test2()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  if(testList.isEmpty() == true)
  {
    return false;
  }
  else
  {
    return true;
  }
}

//Removing all the items in a list will result in isEmpty being true
bool Tester::test3()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.removeFront();
  if(testList.isEmpty() == false)
  {
    return false;
  }
  else
  {
    return true;
  }
}

//A list that is empty will have a size of 0.
bool Tester::test4()
{
  LinkedListOfInts testList;
  if(testList.size() == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//A list with one added integer will have a size of 1
bool Tester::test5()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  if(testList.size() == 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//List with one int added and one int removed has a size of zero
bool Tester::test6()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.removeFront();
  if(testList.size() == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//The search method will find items that truly do exist in the list
bool Tester::test7()
{
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addFront(2);
  testList.addBack(3);
  if(testList.search(1) == false)
  {
    return false;
  }
  if(testList.search(2) == false)
  {
    return false;
  }
  if(testList.search(3) == false)
  {
    return false;
  }
  return true;
}

//Items that are not in the list will not be found by the search method
bool Tester::test8()
{
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addFront(2);
  testList.addBack(3);
  if(testList.search(7) == true)
  {
    return false;
  }
  if(testList.search(8) == true)
  {
    return false;
  }
  if(testList.search(9) == true)
  {
    return false;
  }
  return true;
}

//Ensures that addBack method correctly adds an element at the right position in the list (in the back of the list)
bool Tester::test9()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.addFront(2);
  testList.addBack(3);
  if(testList.toVector()[2] == 3)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Ensures that addBack method adds the right amount of elements to a list
bool Tester::test10()
{
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.addBack(4);
  if(testList.toVector().size() == 4)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Ensures that addFront method correctly adds an element at the right position in the list (at the front of the list)
bool Tester::test11()
{
  LinkedListOfInts testList;
  testList.addBack(2);
  testList.addBack(3);
  testList.addFront(1);
  if(testList.toVector()[0] == 1)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Ensures that addFront method adds the right amount of elements to a list
bool Tester::test12()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.addFront(2);
  testList.addFront(3);
  testList.addFront(4);
  if(testList.toVector().size() == 4)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Ensures that removeBack method removes the correct number of elements from the list
bool Tester::test13()
{
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.addBack(4);
  testList.removeBack();
  testList.removeBack();
  testList.removeBack();
  testList.removeBack();
  if(testList.toVector().size() == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Ensures that removeBack method removes the correct elements from the list
bool Tester::test14()
{
  LinkedListOfInts testList;
  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.removeBack();
  if(testList.toVector().back() == 2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Ensures that removeFront method removes the correct number of elements from the list
bool Tester::test15()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.addFront(2);
  testList.addFront(3);
  testList.removeFront();
  testList.removeFront();
  testList.removeFront();
  if(testList.toVector().size() == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//Ensures that removeFront method removes the correct elements from the list
bool Tester::test16()
{
  LinkedListOfInts testList;
  testList.addFront(1);
  testList.addFront(2);
  testList.addFront(3);
  testList.removeFront();
  testList.removeFront();
  if(testList.toVector().front() == 1)
  {
    return true;
  }
  else
  {
    return false;
  }
