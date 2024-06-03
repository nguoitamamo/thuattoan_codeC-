#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
#include <iomanip>

class Giat
{
private:
    int kg;
    int gia1;
    long long tien_giat;
    int giam1;
    friend class BST;

public:
    Giat()
    {
        kg = gia1 = giam1 = 0;
        tien_giat = 0;
    }
    Giat(int kh, int gia1, long long tien_giat, int giam1)
    {
        this->kg = kg;
        this->gia1 = gia1;
        this->tien_giat = tien_giat;
        this->giam1 = giam1;
    }
};

class Thue_xe : public Giat
{
private:
    int h;
    int gia2;
    long long tien_thue;
    int giam2;
    friend class BST;

public:
    Thue_xe() : Giat()
    {
        h = gia2 = giam2 = 0;
        tien_thue = 0;
    }
    Thue_xe(int h, int gia2, long long tien_thue, int giam2, int kg, int gia1, long long tien_giat, int giam1) : Giat(kg, gia1, tien_giat, giam1)
    {
        this->h = h;
        this->gia2 = gia2;
        this->tien_thue = tien_thue;
        this->giam2 = giam2;
    }
};

class ThongTin : public Thue_xe
{

private:
    std::string ht;
    std::string sex;
    std::string ma_hd, ma_kh;
    int tong_tien;
    friend class BST;

public:
    ThongTin() : Thue_xe()
    {
        ht = "0";
        sex = ma_hd = ma_kh = "0";
    }
    ThongTin(std::string ht, std::string sex, std::string ma_hd, std::string ma_kh, int tong_tien, int h, int gia2, long long tien_thue, int giam2, int kg, int gia1, long long tien_giat, int giam1) : Thue_xe(h, gia2, tien_thue, giam2, kg, gia1, tien_giat, giam1)
    {
        this->ht = ht;
        this->sex = sex;
        this->ma_hd = ma_hd;
        this->ma_kh = ma_kh;
        this->tong_tien = tong_tien;
    }

    std::string getMa_kh()
    {
        return ma_kh;
    }
};

class Node
{

public:
    ThongTin data;
    Node* left;
    Node* right;

    Node(ThongTin value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

bool compare(std::string s1, std::string s2)
{
    return s1.length() > s2.length();
}

class BST
{

private:
    Node* root;

    Node* InsertNode(Node* node, ThongTin& a)
    {
        if (node == nullptr)
        {
            return new Node(a);
        }
        if (node != nullptr)
        {

            if (compare(root->data.getMa_kh(), a.getMa_kh()))
            {
                root->left = InsertNode(root->left, a);
            }
            else
            {
                root->right = InsertNode(root->right, a);
            }
        }
        return node;
    }

    void IN_ThongTin(ThongTin& a);
    void IN_DS_ThongTin(Node* root)
    {
        if (root != nullptr)
        {

            IN_ThongTin(root->data);
            IN_DS_ThongTin(root->left);
            IN_DS_ThongTin(root->right);
        }
    }

public:
    BST()
    {
        root = nullptr;
    }
    void Insert(ThongTin a)
    {
        root = InsertNode(root, a);
    }
    void Read_Thong_Tin(std::ifstream& file)
    {

        std::string line;
        while (getline(file, line))
        {

            std::stringstream ss(line);
            ThongTin x;
            getline(ss, x.ht, '#');
            getline(ss, x.sex, '#');
            getline(ss, x.ma_hd, '#');
            getline(ss, x.ma_kh, '#');
            std::cout << "Nhap so kg: ";
            std::cin >> x.kg;
            std::cin.ignore();
            std::cout << "Nhap so tien/ kg : ";
            std::cin >> x.gia1;
            std::cin.ignore();
            x.tien_giat = x.kg * x.gia1;
            x.giam1 = 0;
            if (x.kg > 5)
            {
                x.giam1 = x.tien_giat * 0.05;
            }

            std::cout << "Nhap so gio : ";
            std::cin >> x.h;
            std::cin.ignore();
            std::cout << "Nhap so gio/tieng : ";
            std::cin >> x.gia2;
            std::cin.ignore();
            x.tien_thue = x.h * x.gia2;
            x.giam2 = 0;
            if (x.h >= 10)
            {
                x.giam2 = x.tien_thue * 0.1;
            }
            x.tong_tien = x.tien_thue + x.tien_giat;
            std::cout << "hnt1\n";
            Insert(x);
            std::cout << "HNT2\n";
        }
    }

    void IN()
    {
        IN_DS_ThongTin(root);
    }
};

std::string boder = std::string(63, '-');

void BST::IN_ThongTin(ThongTin& a)
{
    std::cout << boder << "\n";
    std::cout << std::setw(43) << "HOA DON SU DUNG DICH VU" << std::setw(20) << " "
        << "\n";
    std::cout << std::setw(39) << "Ma hoa don: " << a.ma_hd << std::setw(24) << " "
        << "\n";
    std::cout << "Ten Khach Hang: " << a.ht << "       "
        << "Gioi Tinh: " << a.sex << "\n";
    std::cout << "Ma Hhach Hang: " << a.ma_kh << "\n";
    std::cout << std::left << std::setw(24) << "Cac Dich Vu Su Dung: ";
    std::cout << "    " << std::left << std::setw(15) << "So tien" << std::left << std::setw(15) << "Giam gia"
        << "\n";

    std::cout << std::setw(24) << std::left << "Giat la ";
    std::cout << "    " << std::left << std::setw(15) << a.tien_giat << std::left << std::setw(15) << a.giam1 << "\n";
    std::cout << std::left << std::setw(24) << "Thue xe";
    std::cout << "    " << std::left << std::setw(15) << a.tien_thue << std::left << std::setw(15) << a.giam2 << "\n";
    std::cout << std::left << std::setw(24) << "Tong";
    std::cout << "    " << std::left << std::setw(15) << a.tong_tien << std::left << std::setw(15) << a.giam1 + a.giam2 << "\n";
    std::cout << std::left << std::setw(24) << "Tong tien khach phai tra";
    std::cout << "    " << a.tong_tien - (a.giam1 + a.giam2) << "\n";
}

int main()
{

    BST tree;
    Node* root = nullptr;
    std::ifstream file("SINHVIEN1.txt");
    if (!file.is_open())
    {
        std::cout << "FAIL\n";
        exit(1);
    }

    tree.Read_Thong_Tin(file);
    tree.IN();
    return 0;
}