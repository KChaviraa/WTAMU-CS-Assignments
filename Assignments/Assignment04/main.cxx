// CS 2337
// 2023 Fall
// Assignment 4
// Do not modify this file

#include "sequence1.h"
#include <string>
#include <iostream>


void show_sequence(sequence& s)
{
    std::string str = "";
    for (s.start(); s.is_item(); s.advance())
        str += (std::to_string((int)s.current()) + ",");
    str.pop_back();
    std::cout << str << std::endl;
}

// test1:
//  i. items added using insert into data array:
//      3,23,11
//  ii. current item is 3
//  iii. items added using insert into data array:
//      13,87,5,19,3,23,11
//  iv. current item is 13
//  v. final output:
//      29,13,87,5,19,3,23,11
//
void test1()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test1:" << std::endl;
    sequence s;
    s.insert(11);
    s.insert(23);
    s.insert(3);
    std::cout << "current = " << s.current() << std::endl;
    s.insert(19);
    s.insert(5);
    s.insert(87);
    s.insert(13);
    std::cout << "current = " << s.current() << std::endl;
    s.insert(29);
    show_sequence(s);
}

// test2:
//  i. items added using attach into data array:
//      11,23,3,19
//  ii. current item is 19
//  iii. items added using insert into data array:
//      11,23,3,19,5,87,13,29
//  iv. current item is 29
//  v. final output:
//      11,23,3,19,5,87,13,29
//
void test2()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test2:" << std::endl;
    sequence s;
    s.attach(11);
    s.attach(23);
    s.attach(3);
    s.attach(19);
    std::cout << "current = " << s.current() << std::endl;
    s.attach(5);
    s.attach(87);
    s.attach(13);
    s.attach(29);
    std::cout << "current = " << s.current() << std::endl;
    show_sequence(s);
}

// test3:
//  i. items added using attach into data array:
//      11,23,3,19,5
//  ii. current item is 5
//  iii. move to the start
//  iv. current item is 11
//  v. attach item 123 and 234
//  vi. current item is 234
//  vii. final output:
//      11,123,234,23,3,19,5
//
void test3()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test3:" << std::endl;
    sequence s;
    s.attach(11);
    s.attach(23);
    s.attach(3);
    s.attach(19);
    s.attach(5);
    std::cout << "current = " << s.current() << std::endl;
    s.start();
    std::cout << "current = " << s.current() << std::endl;
    s.attach(123);
    s.attach(234);
    std::cout << "current = " << s.current() << std::endl;
    show_sequence(s);
}

// test4:
//  i. items added using attach into data array:
//      11,23,3,19,5
//  ii. move to the start and advance once
//  iii. current item is 23
//  iv. attach item 123
//  v. advance once
//  vi. current item is 3
//  vii. attached item 234
//  vii. final output:
//      11,23,123,3,234,19,5
//
void test4()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test4:" << std::endl;
    sequence s;
    s.attach(11);
    s.attach(23);
    s.attach(3);
    s.attach(19);
    s.attach(5);
    s.start();
    s.advance();
    std::cout << "current = " << s.current() << std::endl;
    s.attach(123);
    s.advance();
    std::cout << "current = " << s.current() << std::endl;
    s.attach(234);
    show_sequence(s);
}

// test5:
//  i. insert item 11
//      11
//  ii. current item = 11
//  iii. attach item 23
//      11,23
//  iv. current item = 23
//  v. insert item 3
//      11,3,23
//  vi. current item = 3
//  vii. attach item 19
//      11,3,19,23
//  viii. current item = 19
//  ix. insert item 5
//      11,3,5,19,23
//  x. current item = 5
//  xi. attach item 87
//      11,3,5,87,19,23
//  xii. current item = 87
//  xiii. insert item 13
//      11,3,5,13,87,19,23
//  xiv. current item = 13
//  xv. attach item 29
//      11,3,5,13,29,87,19,23
//  xvi. current item = 29
//  xvii. final output:
//      11,3,5,13,29,87,19,23
//
void test5()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test5:" << std::endl;
    sequence s;
    s.insert(11);
    std::cout << "current = " << s.current() << std::endl;
    s.attach(23);
    std::cout << "current = " << s.current() << std::endl;
    s.insert(3);
    std::cout << "current = " << s.current() << std::endl;
    s.attach(19);
    std::cout << "current = " << s.current() << std::endl;
    s.insert(5);
    std::cout << "current = " << s.current() << std::endl;
    s.attach(87);
    std::cout << "current = " << s.current() << std::endl;
    s.insert(13);
    std::cout << "current = " << s.current() << std::endl;
    s.attach(29);
    std::cout << "current = " << s.current() << std::endl;
    show_sequence(s);
}

// test6:
//  i. items added using attach into data array:
//      11,23,3,19,5
//  ii. current item = 5
//  iii. remove current item; resulting data array:
//          11,23,3,19
//  iv. move to the start of the data array
//  v. current item = 11
//  vi. remove current item; resulting data array:
//          23,3,19
//  vii. current item = 23
//  viii. remove current item; resulting data array:
//          3,19
//  ix. current item = 3
//  x. final output:
//      3,19
//
void test6()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test6:" << std::endl;
    sequence s;
    s.attach(11);
    s.attach(23);
    s.attach(3);
    s.attach(19);
    s.attach(5);
    std::cout << "current = " << s.current() << std::endl;
    s.remove_current();
    s.start();
    std::cout << "current = " << s.current() << std::endl;
    s.remove_current();
    std::cout << "current = " << s.current() << std::endl;
    s.remove_current();
    std::cout << "current = " << s.current() << std::endl;
    show_sequence(s);
}

// test7:
//  i. items added using insert into data array:
//      5,19,3,23,11
//  ii. remove items 5,19,3,23
//  ix. final output:
//      11
//
void test7()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test7:" << std::endl;
    sequence s;
    s.insert(11);
    s.insert(23);
    s.insert(3);
    s.insert(19);
    s.insert(5);
    s.remove_current();
    s.remove_current();
    s.remove_current();
    s.remove_current();
    show_sequence(s);
}

// test8:
//  i. insert item 11
//  ii. attach item 23
//  iii. insert item 3
//      resulting data array after i.,ii.,iii.:
//          11,3,23
//  iv. remove current item of 3
//  v. attach item 19, insert item 5, attach item 87, insert item 13
//      resulting data array after iv. and v.:
//          11,23,5,13,87,19
//  vi. remove current item of 13
//  vii. move to the start
//  viii. remove current item of 11 (23 is new current item after remove)
//  ix. advance to item 5
//  x. remove current item of 5
//  xi. final output:
//      23,87,19
//
void test8()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "test8:" << std::endl;
    sequence s;
    s.insert(11);
    s.attach(23);
    s.insert(3);
    s.remove_current();
    s.attach(19);
    s.insert(5);
    s.attach(87);
    s.insert(13);
    s.remove_current();
    s.start();
    s.remove_current();
    s.advance();
    s.remove_current();
    show_sequence(s);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();

    return 0;
}
