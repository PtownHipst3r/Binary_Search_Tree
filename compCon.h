// This will hold all of the classes and prototypes 
// for the BST

#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
#include <cmath>

using namespace std;


class bst{

  public:
    bst();
    ~bst();
    char * name;
    char * descrip;
    char * relation;

    int key = 0;

    bst * left;
    bst * right;

  private: 

};
class compCon{

  public:
    compCon(bst to_add,bst to_find);
    ~compCon();
    int insert(bst * to_add); // used to insert info into bst
    int getKey(bst * to_add); // used to get numerical value for name
    int remove(bst * to_find); // used to find concept and remove
    int get_height(); // returns height of tree
    int display(); // displays entire tree
    int display_range(); // displays range of letters

    bool efficient(); // check for efficiency

    void addNew(bst * to_add); // allows grader to manually add info 
    



  private:

    int insert_p(bst *& root,bst * to_add); // recurses to end of bst and inserts new data
    int remove_p(bst *& root,bst * to_find); // recurses to desired data and deletes
    int get_height_p(bst * root,int & sum); // recursively counts height
    int display_all(bst * root);
    int count_nodes(bst * root);
    int display_range_p(bst * root,char var1, char var2);
    int file_in(bst to_add); // reads data from file
    int delete_all(bst *& root); // deletes everything 

    bool is_efficient(bst * root); // tests bst for efficiency


    bst * to_add = NULL;
    bst * to_find = NULL;
    bst * root;
    int count = 0;
    int sum = 0;

};
