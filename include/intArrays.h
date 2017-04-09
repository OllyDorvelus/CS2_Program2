#ifndef INTARRAYS_H
#define INTARRAYS_H


class intArrays
{
    public:
        intArrays();
        virtual ~intArrays();
        void createArray(int intlist[], const int MAX);
        void printList();
        bool isEmpty();
        bool isFull();
        void printCurrentItem();


    private:
    const int MAX;
    int intlist[];
    int currentItem;


};

#endif // INTARRAYS_H
