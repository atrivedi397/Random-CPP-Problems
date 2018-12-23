#include <iostream>

struct node
{
    int data;
    node* next;
};

class operations
{
public:
    node* start , *rear;
    operations()
            :start{nullptr} ,rear{nullptr} {};
    ~operations() = default;

    void create_node(int value);
    void insert_node(int position , int value);
    void delete_node(int position);
    int count_nodes();
    void display();
    void cut_and_paste(int cut_position);
};

void operations::create_node(int value)
{
    auto new_node = new node;
    new_node->data = value;
    if(start == nullptr)
    {
        start = new_node;
        rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }

    display();
}

void operations::insert_node(int position, int value)
{
    node* traverse = start;
    short count = 1;
    if(traverse == nullptr)
        create_node(value);
    else
    {
        while(count < position-1)
        {
            traverse = traverse->next;
            count+=1;
            if(traverse == nullptr)
            {
                std::cout<<"\nPosition does not exist.\n";
                exit(0);
            }
        }

        auto temp = new node;
        temp->data = value;
        temp->next = traverse->next;
        traverse->next = temp;
    }

    display();
}

void operations::delete_node(int position)
{
    auto traverse = start;
    if(traverse == nullptr)
    {
        std::cout<<"\nNothing to delete empty list.\n";
        return;
    }
    else
    {
        for(int i = 0; i < position-2; i++)
            traverse = traverse->next;

        node* temp2 = traverse->next;
        traverse->next = traverse->next->next;
        delete temp2;
    }

    display();
}

void operations::display()
{
    std::cout<<"\n\n";
    auto traverse = start;
    while(traverse != nullptr)
    {
        std::cout<<traverse->data<<"  ";
        traverse = traverse->next;
    }
}

int operations::count_nodes()
{
    int total_nodes = 0;
    node* traverse = start;
    if(traverse == nullptr)
        return 0;
    else
        while(traverse != nullptr)
        {
            traverse = traverse->next;
            total_nodes+=1;
        }
    return total_nodes;
}

void operations::cut_and_paste(int cut_position)
{
    int count = 1;
    auto traverse  = start;
    while(count < cut_position)
    {
        traverse = traverse->next;
        count++;
    }

    if (traverse == nullptr)
        std::cout<<"\nList Finished. Please give input under the "<<count_nodes();
    else
    {
        rear->next = start->next;
        start->next = traverse->next;
    }

    this->display();
}



int main()
{
    operations object;
    int ans, position = 0 , value;
    do
    {
        std::cout<<"\nInput\n1. Create\n2. Insert\n3. Delete\n4. Total Nodes\n5. Cut And Paste\n6. Exit\n";
        std::cin>>ans;
        switch (ans)
        {
            case 1 : std::cout<<"\nEnter value\n";
                std::cin>>value;
                object.create_node(value);
                break;

            case 2 : std::cout<<"\nEnter value and position\n";
                std::cin>>value>>position;
                object.insert_node(position ,  value);
                break;

            case 3 : std::cout<<"\nEnter position\n";
                std::cin>>position;
                object.delete_node(position);
                break;

            case 4 : std::cout<<"\nTotal nodes are "<<object.count_nodes();
                break;

            case 5: std::cout<<"\nCut and Paste\n";
                    std::cin>>position;
                    object.cut_and_paste(position);
                    break;

            case 6 : exit(0);


            default : std::cout<<"\nTry again\n";
        }
    }while(true);
}