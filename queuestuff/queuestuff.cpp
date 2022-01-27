#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <ostream>
#include <istream>

int main ()
{
    //queue type
  std::queue<std::string> q;

  // Pushing example numbers for the queue
  q.push ("1");
  q.push ("2");
  q.push ("3");

  // Making a variable for user input
  std::string input;

  // Prompt
  std::cout << "- Please input a number: " << std::endl;

  // Storing user input
  std::cin >> input;

  // pushes user input value
  q.push(input);
  std::cout << q.front() << std::endl;
  q.pop();
  // This is a bit weird, but I couldn't really get peek to work for this string, so 
  // this is my alternative, it displays what is at the front before it is immediately deleted
  // by pop, so it seems to almost serve no purpose except demonstration
  while (not q.empty ())
    {
      // Output front of the queue
      std::cout << q.front () << std::endl;
      // Pop the queue, delete item
      q.pop ();
    }

  std::cout << std::endl;

  return 0;
}