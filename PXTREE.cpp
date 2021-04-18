#include <iostream>

#include "Pxtree.h"
using namespace std;

void Pxtree::dfs(int &ma, string temp, string &ans)
{

    if (ma != -1)
    {
        temp += c_;
    }

    if (ma < count_)
    {
        ma = count_;
        ans = temp;
    }

    if (leftmostChild_ != nullptr)
    {
        leftmostChild_->dfs(ma, temp, ans);
    }
    if (nextSibling_ != nullptr)
    {
        if (temp.size() >= 1)
        {
            temp.pop_back();
        }
        nextSibling_->dfs(ma, temp, ans);
    }
}

void Pxtree::dfsprint(int level, string &ans)
{
    for (int i = 0; i < 2 * level; i++)
    {
        ans += ' ';
    }
    ans += c_;
    ans += ' ';
    ans += to_string(count_);
    ans += '\n';
    if (leftmostChild_ != nullptr)
    {
        leftmostChild_->dfsprint(level + 1, ans);
    }
    if (nextSibling_ != nullptr)
    {
        nextSibling_->dfsprint(level, ans);
    }
}

Pxtree::Pxtree()
{
    c_ = '\0';
    count_ = 0;
    leftmostChild_ = nullptr;
    nextSibling_ = nullptr;
}

Pxtree::~Pxtree()
{
    delete leftmostChild_;
    delete nextSibling_;
}

Pxtree::Pxtree(const Pxtree &other)
{
    c_ = other.c_;
    count_ = other.count_;
    leftmostChild_ = other.leftmostChild_;
    nextSibling_ = other.nextSibling_;
}

Pxtree &Pxtree::operator=(const Pxtree &other)
{
    c_ = other.c_;
    count_ = other.count_;
    leftmostChild_ = other.leftmostChild_;
    nextSibling_ = other.nextSibling_;
    return *this;
}

int Pxtree::count(string s) const
{

    if (c_ == '\0')
    {
        if (leftmostChild_ == nullptr)
            return 0;
        else
            return leftmostChild_->count(s);
    }
    else if (c_ == s[0])
    {
        if (s.length() == 1)
            return count_;

        else if (leftmostChild_ == nullptr)
            return 0;

        else
            return leftmostChild_->count(s.erase(0, 1));
    }
    else
    {
        if (nextSibling_ == nullptr)
            return 0;
        else
            return nextSibling_->count(s);
    }
}

void Pxtree::add(string s)
{

    if (c_ == '\0')
    {

        if (leftmostChild_ == nullptr)
        {

            leftmostChild_ = new Pxtree();
            leftmostChild_->c_ = s[0];
            leftmostChild_->add(s);
        }
        else
        {
            leftmostChild_->add(s);
        }
    }
    else if (c_ == s[0])
    {
        if (s.length() == 1)
        {
            count_++;
            return;
        }

        else if (leftmostChild_ == nullptr)
        {
            leftmostChild_ = new Pxtree();
            leftmostChild_->c_ = s[1];
            leftmostChild_->add(s.erase(0, 1));
        }

        else
        {
            leftmostChild_->add(s.erase(0, 1));
        }
    }
    else
    {
        if (nextSibling_ == nullptr)
        {
            nextSibling_ = new Pxtree();
            nextSibling_->c_ = s[0];
            nextSibling_->add(s);
        }

        else
        {
            nextSibling_->add(s);
        }
    }
}

void Pxtree::remove(string s)
{

    if (c_ == '\0')
    {

        if (leftmostChild_ == nullptr)
        {

            return;
        }
        else
        {
            leftmostChild_->remove(s);
        }
    }
    else if (c_ == s[0])
    {
        if (s.length() == 1)
        {
            count_--;
            return;
        }

        else if (leftmostChild_ == nullptr)
        {
            return;
        }

        else
        {
            leftmostChild_->remove(s.erase(0, 1));
        }
    }
    else
    {
        if (nextSibling_ == nullptr)
        {
            return;
        }

        else
        {
            nextSibling_->remove(s);
        }
    }
}

string Pxtree::print() const
{

    if (c_ == '\0')
    {
        string temp;
        if (leftmostChild_ != nullptr)
        {
            leftmostChild_->dfsprint(0, temp);
            temp.pop_back();
        }
        return temp;
    }
    return "";
}

string Pxtree::autoComplete(string s) const
{

    if (c_ == '\0')
    {

        if (leftmostChild_ == nullptr)
        {

            return s;
        }
        else
        {

            return s[0] + leftmostChild_->autoComplete(s); // just pass it down
        }
    }
    else if (c_ == s[0])
    {
        if (s.length() == 1)
        {
            if (leftmostChild_ == nullptr)
            {
                return s;
            }
            else
            {
                string temp = "";
                string ans = "";
                int ma = -1;
                Pxtree *node = new Pxtree();
                node->c_ = c_;

                node->leftmostChild_ = leftmostChild_;

                node->count_ = count_;
                node->nextSibling_ = nextSibling_;
                node->dfs(ma, temp, ans);
                free(node);
                return ans;
            }
        }

        else if (leftmostChild_ == nullptr)
        {
            return s;
        }

        else
        {

            return s[0] + leftmostChild_->autoComplete(s.erase(0, 1));
        }
    }
    else
    {
        if (nextSibling_ == nullptr)
        {
            if (s.length() > 1)
            {
                return s.substr(1, s.length());
            }
            return "";
        }

        else
        {
            return nextSibling_->autoComplete(s);
        }
    }
}

Pxtree *Pxtree::compacthelper(Pxtree *root)

{
    if (root == nullptr)
    {
        return nullptr;
    }
    if (root->nextSibling_ != nullptr)
    {
        root->nextSibling_ = compacthelper(root->nextSibling_);
    }
    if (root->leftmostChild_ != nullptr)
    {
        root->leftmostChild_ = compacthelper(root->leftmostChild_);
    }

    if (root->leftmostChild_ == nullptr && root->count_ == 0)
    {
        if (root->nextSibling_ != nullptr)
        {
            Pxtree *node = root->nextSibling_;
            free(root);
            return node;
        }
        return nullptr;
    }

    return root;
}

void Pxtree::compact()
{

    Pxtree *node = new Pxtree();
    node->leftmostChild_ = leftmostChild_;
    node->nextSibling_ = nextSibling_;
    node->c_ = c_;
    node->count_ = count_;
    compacthelper(node);
}

int main()
{

    Pxtree t;
    cout << "--- Some adds ---\n";
    t.add("baby");
    t.add("ban");
    t.add("bank");
    t.add("bad");
    t.add("dad");
    cout << t.print() << endl;

    cout << "--- add and remove ---\n";
    t.add("ban");
    t.add("c");
    t.remove("baby");
    cout << t.print() << endl;

    cout << "--- count ---\n";
    cout << t.count("ban") << endl;
    cout << t.count("bank") << endl;
    cout << t.count("ba") << endl;

    cout << "--- copy con, copy asg ---" << endl;
    Pxtree u(t);
    cout << u.print() << endl;
    Pxtree v;
    v = t;
    cout << v.print() << endl;

    cout << "--- autoComplete ---\n";
    cout << t.autoComplete("ba") << endl;
    cout << t.autoComplete("d") << endl;
    cout << t.autoComplete("z") << endl;

    cout << "--- compact ---\n";
    t.compact();
    cout << t.print() << endl;
}
