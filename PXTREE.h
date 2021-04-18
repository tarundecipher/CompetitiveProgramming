#ifndef PXTREE_H_
#define PXTREE_H_

#include <string>
using std::string;

class Pxtree
{
public:
    // Constructor. Constructs an empty Pxtree. Root node should contain
    // the special character '\0'
    Pxtree();

    // Destructor
    ~Pxtree();

    // Copy constructor
    Pxtree(const Pxtree &other);

    // Copy assignment
    Pxtree &operator=(const Pxtree &other);

    // Return the count associated with the string s. If the string is
    // not in the tree, return 0.
    int count(string s) const;

    // Add the string s to the tree if it is not already represented in
    // the tree, and assign a count of 1. If it is already in the tree,
    // increment the count by 1.
    void add(string s);

    // Reduce the count of the string s by 1, if s is represented in
    // the tree. For simplicity, leaves with count 0 are kept in the
    // tree (they are dealt with separately in the compact function).
    // If s is not in the tree at all or already has count 0, do nothing.
    void remove(string s);

    // print the tree in the way described in the assignment page.
    // The root node is not printed.
    // If the tree is empty (i.e. only has the root), return an empty
    // string.
    // Note that your returned string should not contain an extra newline
    // at the end.
    string print() const;

    // return the string with the highest count that ends in the subtree
    // rooted at s, including s itself. If there are strings with equal
    // maximum counts, return anyone.
    // If there are no such strings, return s itself.
    // This is meant to be difficult.
    string autoComplete(string s) const;

    // This "compacts" the tree by removing any leaves with a count of 0.
    // Note that removing a leaf may expose a new leaf with count 0,
    // and this has to be removed as well.
    // (Ideally you should do it in-place, without simply constructing
    // another tree.)
    // This is meant to be very difficult.
    void compact();

    void dfs(int &ma, string temp, string &ans);
    void dfsprint(int level, string &ans);
    Pxtree *compacthelper(Pxtree *root);

private:
    // You should not change any of these variables
    char c_;                // character associated with this node
    int count_;             // count associated with this node
    Pxtree *leftmostChild_; // pointer to leftmost child
    Pxtree *nextSibling_;   // pointer to sibling immediately to the right
};

#endif
