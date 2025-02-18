#define DOCTEST_CONFIG_IMPLEMENTATION_ONLY
#include "./include/doctest.h"
#include "linkedlist.h"

TEST_CASE("testing build_linked_list") {
    LinkedList test;
    test.build_linked_list(5);
    test.build_linked_list(10);
    test.build_linked_list(15);

    CHECK(test.get_linked_list_data_item_value(0) == 5);
    CHECK(test.get_linked_list_data_item_value(1) == 10);
    CHECK(test.get_linked_list_data_item_value(2) == 15);
}

TEST_CASE("testing print_linked_list") {
    LinkedList test2;
    test2.build_linked_list(1);
    test2.build_linked_list(2);
    test2.build_linked_list(3);
    test2.build_linked_list(4);
    test2.build_linked_list(5);

    test2.print_linked_list(); // expect output of [1] [2] [3] [4] [5]
}

TEST_CASE("testing delete_linked_list") {
    LinkedList test3;
    test3.build_linked_list(3);
    test3.build_linked_list(6);
    test3.build_linked_list(9);

    test3.delete_entire_linked_list();

    CHECK(test3.get_linked_list_data_item_value(0) == -1); 
    // because it's empty should return -1
}

TEST_CASE("testing get_linked_list_data_item_value") {
    LinkedList test4;
    test4.build_linked_list(343);
    test4.build_linked_list(58);
    test4.build_linked_list(1);
    test4.build_linked_list(2020);

    CHECK(test4.get_linked_list_data_item_value(0) == 343);
    CHECK(test4.get_linked_list_data_item_value(1) == 58);
    CHECK(test4.get_linked_list_data_item_value(2) == 1);
    CHECK(test4.get_linked_list_data_item_value(3) == 2020);
}

TEST_CASE("testing delete_list_item") {
    LinkedList test5;
    test5.build_linked_list(101);
    test5.build_linked_list(202);
    test5.build_linked_list(303);

    CHECK(test5.delete_list_element(1) == true); // should remove successfully
    CHECK(test5.get_linked_list_data_item_value(1) == 303); // moved up
    CHECK(test5.delete_list_element(10) == false); // unable to delete because it doesn't exist
}