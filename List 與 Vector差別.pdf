vector和数组类似，它拥有一段连续的内存空间，并且起始地址不变，因此它能非常好的支持随机存取（即使用[]操作符访问其中的元素），但由于它的内存空间是连续的，所以在中间进行插入和删除会造成内存块的拷贝（复杂度是O(n)），另外，当该数组后的内存空间不够时，需要重新申请一块足够大的内存并进行内存的拷贝。这些都大大影响了vector的效率。
list是由数据结构中的双向链表实现的，因此它的内存空间可以是不连续的。因此只能通过指针来进行数据的访问，这个特点使得它的随机存取变的非常没有效率，需要遍历中间的元素，搜索复杂度O(n)，因此它没有提供[]操作符的重载。但由于链表的特点，它可以以很好的效率支持任意地方的删除和插入。
由于list和vector上面的这些区别，因此list::iterator与vector::iterator也有一些不同。请看下面的例子：
        #include <iostream>
        #include <vector>
        #include <list>
        using namespace std;
        
        int main( void )
        {
                vector<int> v; 
                list<int> l;
                
                for (int i=0; i<8; i++)     //往v和l中分别添加元素
                {
                        v.push_back(i);
                        l.push_back(i);
                }
                
                cout << "v[2] = " << v[2] << endl;
                //cout << "l[2] = " << l[2] << endl;       //编译错误,list没有重载[]
                cout << (v.begin() < v.end()) << endl;
                //cout << (l.begin() < l.end()) << endl;   //编译错误,list::iterator没有重载<或>
                cout << *(v.begin() + 1) << endl;
                
                vector<int>::iterator itv = v.begin();
                list<int>::iterator itl = l.begin();
                itv = itv + 2;
                //itl = itl + 2;                  //编译错误,list::iterator没有重载+
                itl++;itl++;                    //list::iterator中重载了++，只能使用++进行迭代访问。
                cout << *itv << endl;
                cout << *itl << endl;
        
                return 0;
        }
由于vector拥有一段连续的内存空间，能非常好的支持随机存取，因此vector<int>::iterator支持“+”、“+=”、“<”等操作符。
而list的内存空间可以是不连续，它不支持随机访问，因此list<int>::iterator则不支持“+”、“+=”、“<”等操作符运算，因此代码20、26行会有编译错误。只能使用“++”进行迭代，例如代码27行，使用两次itl++来移动itl。还有list也不支持[]运算符，因此代码18行出现编译错误。
总之，如果需要高效的随即存取，而不在乎插入和删除的效率，使用vector；如果需要大量的插入和删除，而不关心随即存取，则应使用list。
答案：
vector拥有一段连续的内存空间，因此支持随机存取，如果需要高效的随即存取，而不在乎插入和删除的效率，使用vector。
list拥有一段不连续的内存空间，因此支持随机存取，如果需要大量的插入和删除，而不关心随即存取，则应使用list。
