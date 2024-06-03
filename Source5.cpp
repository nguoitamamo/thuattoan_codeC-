#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct Date
{
    std::string day, moth, year;
};
struct Mon
{
    std::string toan, li, hoa;
};

struct SV
{
    std::string ht;
    char ma[25];
    Date da;
    Mon m;
    float dtb;
};

class Node
{
public:
    SV data;
    Node* left;
    Node* right;

    Node(SV value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int compare(char* x, char* y)
{ 
    return strcmp(x, y);
}


class BinarySearchTree
{
private:
    Node* root;

    // Helper function to insert a value into the BST
    Node* InsertNode(Node* node, SV& a)
    {
        if (node == nullptr)
        {
            return new Node(a);
        }

        if (compare(root->data.ma, a.ma) > 0)
        {
            root->left = InsertNode(root->left, a);
        }
        else if (compare(root->data.ma, a.ma) < 0)
        {
            root->right = InsertNode(root->right, a);
        }

        return node;
    }
    void IN_SinhVien(SV& a)
    {

        std::cout << "Ho ten: " << a.ht << "\n";
        std::cout << "MSSV: " << a.ma << "\n";
        std::cout << "Date: " << a.da.day << "-" << a.da.moth << "-" << a.da.year << "\n";
        std::cout << "Diem mon: " << a.m.toan << "-" << a.m.li << "-" << a.m.hoa << "\n";
        std::cout << "Trung binh: " << std::fixed << std::setprecision(1) << std::setiosflags(ios::showpoint) << a.dtb << "\n" << "\n";
    }

    void IN_DS_SinhVien(Node* root)
    {
        if (root != nullptr)
        {

            IN_SinhVien(root->data);

            IN_DS_SinhVien(root->left);


            IN_DS_SinhVien(root->right);
        }
    }

  

public:
    BinarySearchTree()
    {
        root = nullptr;
    }

    void insert(SV a) {
        root = InsertNode(root, a);
    }
    void IN_DS() {
        IN_DS_SinhVien(root);

    }
    void Read_DS_SinhVien( std::ifstream& file);
};



void Read_Date(std::string& s, Date& date)
{

    std::stringstream ss(s);
    getline(ss, date.day, '/');
    getline(ss, date.moth, '/');
    ss >> date.year;
}

void BinarySearchTree::Read_DS_SinhVien( std::ifstream& file)
{

    std::string line;
    while (getline(file, line))
    {
        SV a;
        std::stringstream ss(line);
        getline(ss, a.ht, '#');

        ss.getline(a.ma, 25, '#');
        std::string ns;
        getline(ss, ns, '#');
        Read_Date(ns, a.da);
        // file.seekg(1, 1);
        /*ss.ignore();*/

        getline(ss, a.m.toan, '#');
        getline(ss, a.m.li, '#');
        ss >> a.m.hoa;

        a.dtb = (stof(a.m.toan) + stof(a.m.li) + stof(a.m.hoa)) / 3;

        insert(a);
    }

    file.close();
}

int main()
{
    BinarySearchTree bst;

    Node* root = nullptr;

    ifstream file("SINHVIEN1.txt");
    if (!file.is_open())
    {
        std::cout << "FAIL\n";
        return 1;
    }


    bst.Read_DS_SinhVien(file);

    bst.IN_DS();

    


    return 0;
}
