/** customer.h
 * Defines a Customer class that describes a customer. Includes functions for
 * tracking the Customer's transaction history, name, and ID.
 *
 * Written by Zachary Clow
 *
 */

#ifndef ASSIGNMENT4_CUSTOMER_H
#define ASSIGNMENT4_CUSTOMER_H

#include <string>
#include "Movie.h"

class Customer:public Movie {
public:
   //The max number of history items the customer can have.
   static int const MAXHISTORY = 99999;

   //Adds a new transaction to the Customer. First string is the movie's
   //identifier, second string is the transaction type, either "return"
   // or "check-out"
   void addHistory(Movie movie, std::string type);

   //Output the Customer's history to cout in chronological order
   void outputHistory();

   //Default constructor. Sets ID to 0000, firstName "Default", lastName "Default"
   Customer();

   ~Customer();

   //Creates a Customer with an input ID, firstname, and lastname
   Customer(int ID, std::string firstName, std::string lastName);

private:
   //The customer's unique ID
   int ID;

   //The customer's last name
   std::string lastName;

   //The customer's first name
   std::string firstname;

   //The customer's transaction history. historyMovies stores the movies
   //checked out or returned by the customer, and historyTypes stores
   //whether the movie was checked out or returned.
   Movie historyMovies[MAXHISTORY];
   std::string historyTypes[MAXHISTORY];

   //The number of transactions (returns or check-outs) made by
   //the Customer.
   int numberTransactions;
};

#endif //ASSIGNMENT4_CUSTOMER_H
