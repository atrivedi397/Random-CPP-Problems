#include "iostream"

class array
{
public:

    short Size;
    int* picking_array;

    array():
            Size(0), picking_array(nullptr){}

    ~array()
    {
        delete[] picking_array;
    }

    void taking_size()
    {
        std::cout<<"\nWhat is the size of the array ?\n";
        std::cin>>Size;
        picking_array = new int[Size];
    }

    void take_input_in_array()
    {
        std::cout<<"\nEnter the values of the array :\n";

        for (int i = 0; i < Size; ++i)
            std::cin>>picking_array[i];
    }

    void display(array &object)
    {
        std::cout<<"\nYour array is as follows :\n";
        for (int i = 0; i < Size; ++i)
            std::cout<<picking_array[i]<<std::endl;
    }

};


struct s_l_l
{
    int data = 0;
    s_l_l* next = nullptr;
};

class nodes_of_s_l_l
{
    s_l_l* start , *rear;
public:
    nodes_of_s_l_l(): start(nullptr), rear(nullptr){}
    ~nodes_of_s_l_l() = default;

    void add_node(int value)
    {
        auto temp = new s_l_l;
        temp->data = value;

        if(start == nullptr)
        {
            start = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }

        /// delete temp;   Why does it break the code ?
    }

    void display(nodes_of_s_l_l &object)
    {
        std::cout<<"\nYour linked list from an array is as follows:\n";
        auto temp = start;
        while(temp != nullptr)
        {
            std::cout<<temp->data<<" -> ";
            temp = temp->next;
        }

        delete temp;
    }
};


int main()
{
    array a_object;
    nodes_of_s_l_l s_object;
    a_object.taking_size();
    a_object.take_input_in_array();
    a_object.display(a_object);
    for (int i = 0; i < a_object.Size; ++i)
        s_object.add_node(a_object.picking_array[i]);
    s_object.display(s_object);
}
//
// Created by atrivedi on 6/15/18.
//