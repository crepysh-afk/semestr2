#include <gtest/gtest.h>
#include "DoublyLinkedList.h"

TEST(DoublyLinkedListTest, DefaultConstructor)
{
    DoublyLinkedList list;
    EXPECT_TRUE(list.empty());
    EXPECT_EQ(list.getSize(), 0);
}

TEST(DoublyLinkedListTest, PushBack)
{
    DoublyLinkedList list;
    list.push_back(10);
    list.push_back(20);

    EXPECT_FALSE(list.empty());
    EXPECT_EQ(list.getSize(), 2);
    EXPECT_TRUE(list.contains(10));
    EXPECT_TRUE(list.contains(20));
}

TEST(DoublyLinkedListTest, Contains)
{
    DoublyLinkedList list{1,2,3};

    EXPECT_TRUE(list.contains(2));
    EXPECT_FALSE(list.contains(10));
}

TEST(DoublyLinkedListTest, RemoveMiddleElement)
{
    DoublyLinkedList list{1,2,3};

    list.remove(2);

    EXPECT_FALSE(list.contains(2));
    EXPECT_EQ(list.getSize(), 2);
}

TEST(DoublyLinkedListTest, RemoveFirstElement)
{
    DoublyLinkedList list{1,2,3};

    list.remove(1);

    EXPECT_FALSE(list.contains(1));
    EXPECT_EQ(list.getSize(), 2);
}

TEST(DoublyLinkedListTest, RemoveLastElement)
{
    DoublyLinkedList list{1,2,3};

    list.remove(3);

    EXPECT_FALSE(list.contains(3));
    EXPECT_EQ(list.getSize(), 2);
}
TEST(DoublyLinkedListTest, ModifyElement)
{
    DoublyLinkedList list{1,2,3};

    list.modify(2, 20);

    EXPECT_FALSE(list.contains(2));
    EXPECT_TRUE(list.contains(20));
}
TEST(DoublyLinkedListTest, EmptyAfterRemovals)
{
    DoublyLinkedList list{1};

    list.remove(1);

    EXPECT_TRUE(list.empty());
}

TEST(DoublyLinkedListTest, ToString)
{
    DoublyLinkedList list{1,2,3};

    EXPECT_EQ(list.toString(), "1 2 3");
}
TEST(DoublyLinkedListTest, RemoveFromEmpty)
{
    DoublyLinkedList list;

    EXPECT_NO_THROW(list.remove(10));
}

