#include <iostream>
#include "class.h"

using namespace std;

int main()
{
    Deque<int> deq;
    int l=0;
    while (l==0)
    {
        cout<<"What would you like to do:\n 1. show\n 2. add\n 3. delete\n 4. exit"<<endl;
        int ch;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"What would you like to see:\n  1. all\n  2. size\n  3. element"<<endl;
            int ch_sh;
            cin>>ch_sh;
            switch (ch_sh)
            {
                case 1:
                    deq.Print();
                    cout<<endl;
                    break;
                case 2:
                    deq._size();
                    break;
                case 3:
                    cout<<" What element would you like to see:\n  1. first\n  2. last"<<endl;
                    int ch_sh_el;
                    cin>>ch_sh_el;
                    switch(ch_sh_el)
                    {
                    case 1:
                        cout<<deq.topFront()<<endl;
                        break;
                    case 2:
                        cout<<deq.topBack()<<endl;
                        break;
                    default:
                        break;
                    }
                    break;
                default:
                    break;
            }
            continue;
        case 2:
                    cout<<" What element would you like to add:\n  1. first\n  2. last"<<endl;
                    int ch_add;
                    cin>>ch_add;
                    switch (ch_add)
                    {
                    case 1:
                        cout<<"  Input element:"<<endl;
                        int elf_add;
                        cin>>elf_add;
                        deq.pushFront(elf_add);
                        break;
                    case 2:
                        cout<<"  Input element:"<<endl;
                        int elb_add;
                        cin>>elb_add;
                        deq.pushBack(elb_add);
                        break;
                    default:
                        break;
                    }
                    break;
            continue;
        case 3:
            cout<<" What would you like to delete?\n  1. element\n  2. all"<<endl;
            int ch_del;
            cin>>ch_del;
            switch(ch_del)
            {
            case 1:
                cout<<"   What element would you like to delete:\n   1. first\n   2. last"<<endl;
                int ch_del_el;
                cin>>ch_del_el;
                switch(ch_del_el)
                {
                case 1:
                    deq.popFront();
                    break;
                case 2:
                    deq.popBack();
                    break;
                default:
                    break;
                }
                break;
            case 2:
                deq._clear();
                break;
            default:
                break;
            }
            continue;
        case 4:
            l=1;
            break;
        default:
            continue;
        }
        continue;
    }

    return 0;
}
