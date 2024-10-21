//
// Created by Софья Фролова  on 21.10.2024.
//
#include "list.h"
#include <gtest.h>
TEST(List, can_create_empty_list)
{
ASSERT_NO_THROW(List<int> L1());
}

TEST(List, can_create_copy_list)
{
    List<int> L1(1);
    ASSERT_NO_THROW (List<int> L2(L1));

}

TEST(List, can_create_list_with_paranetrs)
{
    ASSERT_NO_THROW (List<int> L2(2,6));
}
TEST(List, cant_create_with_negative_size)
{
    ASSERT_ANY_THROW(List<int> L1(-1));
}
TEST(List, can_create_with_equals_operator)
{
    List<int> L1(1);
    ASSERT_NO_THROW (List<int> L2=L1);
}
TEST(List, can_get_size)
{
    List<int> L1(1);
    ASSERT_EQ(1, L1.size());
}
TEST(List, cant_found_element_with_negative_index)
{
    List<int> L1(5, 6);
    ASSERT_ANY_THROW(L1[-7]);
}
TEST(List, cant_found_element_with_too_large_index)
{
    List<int> L1(5, 6);
    ASSERT_ANY_THROW(L1[10]);
}
TEST(List, can_insert_element)
{
    List<int> L1(5, 6);
    ASSERT_NO_THROW(L1.insert(5, 3));
}
TEST(List, cant_insert_element_with_negative_index)
{
    List<int> L1(5, 6);
    ASSERT_ANY_THROW(L1.insert(7,-8));
}
TEST(List, cant_insert_element_with_too_large_index)
{
    List<int> L1(5, 6);
    ASSERT_ANY_THROW(L1.insert(8, 12));
}
TEST(List, can_isert_first_element)
{
    List<int> L1(5, 6);
    ASSERT_NO_THROW(L1.insert_front(3));
}
TEST(List, can_erase_element)
{
    List<int> L1(5, 6);
    ASSERT_NO_THROW(L1.erase(3));
}

TEST(List, cant_erase_element_with_negative_index)
{
    List<int> L1(5, 6);
    ASSERT_ANY_THROW(L1.erase(-8));
}
TEST(List, cant_erase_element_with_too_large_index)
{
    List<int> L1(5, 6);
    ASSERT_ANY_THROW(L1.erase(12));
}
TEST(List, can_etase_first_element)
{
    List<int> L1(5, 6);
    ASSERT_NO_THROW(L1.erase_front());
}
TEST(List, can_find_element)
{
    List<int> L1(5, 6);
    ASSERT_NO_THROW(L1.find(6));
}
TEST(List, cant_find_element_not_in_list)
{
    List<int> L1(5, 6);
    ASSERT_EQ(L1.find(12), nullptr);
}
TEST(List, can_get_first)
{
    List<int> L1(5, 6);
    ASSERT_EQ(L1.get_first()->data, 6);
}
