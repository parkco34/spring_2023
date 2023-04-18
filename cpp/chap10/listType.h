class listType
{
    public:
        bool isEmptyList() const;
        bool isFullList() const;
        int search(int searchItem) const;
        void insert(int newElement);
        void remove(int removeElement);
        void destroyList();
        void printList() const;
        listType(); // Constructor
    
    private:
        int list[1000];
        int length;
};
