| Ryan LaCombe |
|:---       |
| s198023 |
| Introduction to C++ |
| Linked Lists Documentation |

## I. Requirements

1. Description of problem:
    - **Name:** Linked Lists Demonstration

    - **Problem Statement:** Creation of a program that sufficiently displays a finished Linked List.

    - **Problem Specifications:** The program must be console based and execute without crashing.

2. Output Information
    - The program displays a list of nodes that were input through the coder.

## II. Design

1. _System Architecture_

|
|:--------------- |
Main Loop:

The program takes in information through the coder and outputs the list of nodes the console.

2. ### Object Information

    **File:** Iterator.h

        Description: Used to hcreate functions that iterate through the entire list.

        **Attributes:**

            Name: Iterator(Node<T>* ptr)
                Description: A constructor that passes in a Node pointer.
                Type: public constructor
            
            Name: T*
                Description: Creates a pointer operator for the iterator.
                Type: public operator

            Name: Iterator<T>++
                Description: Creates an operator that increments the iterator by 1.
                Type: public operator

            Name: Iterator<T>--
                Description: Creates an operator that decrements the Iterator by 1.
                Type: public operator

            Name: Iterator<T>==
                Description: Creates an operator that checks if one side is fully equal to the other.
                Type: Bool operator const
            
            Name: Iterator<T>!=
                Description: Creators an operator that checks if one side doesn not equal the other side.
                Type: Bool operator const

            Name: current
                Description: Node used exclusively for the Iterator.
                Type: private Node<T>*

    **File:** File.h

        Description: Used to hold all the basic functions for the Linked Lists.

        **Attributes:**

            Name: List(List<T>& ListToCopy)
                Description: A constructor that copies the passed in list.
                Type: public constructor

            Name: initializeList
                Description: Function that empties the list and sets the count to 0.
                Type: public void

            Name: isEmptyList
                Description: Function that checks if the Linked List is empty.
                Type: public bool

            Name: Length
                Description: Variable that keeps track of the length of the list.
                Type: public int

            Name: front
                Description: A template for the front of the Linked List.
                Type: public <T>

            Name: back
                Description: A template for the back of the Linked List.
                Type: public <T>

            Name: search
                Description: Searches for the node with the passed in data.
                Type: public virtual bool

            Name: insertFirst
                Description: Inserts a node of the passed in data to the first of the List.
                Type: public virtual void

            Name: insertLast
                Description: Inserts a node of the passed in data to the last of the List.
                Type: public virual void

            Name: deleteNode
                Description: Deletes a node of the passed in data from the List.
                Type: public virtual void

            Name: Begin
                Description: Function that starts the Iterator for the List.
                Type: public Iterator<T>

            Name: End
                Description: Function that stops the Iterator for the List.
                Type: public Iterator<T>

            Name: mCount
                Description: Keeps the number of nodes within the List.
                Type: protected int

            Name: m_first
                Description: Keeps track of the first node in the List.
                Type: protected Node<T>*

            Name: m_last
                Description: Keeps track of the last node in the List.
                Type: protected Node<T>*

            Name: copyList
                Description: Copies the passed in List.
                Type: private void

    **File:** Node.h

        Description: Used to create the Nodes for the Linked Lists.

        **Attributes:**

            Name: Node
                Description: Creator for the node of a passed in data.
                Type: public constructor

            Name: data
                Description: Variable of the data within a node.
                Type: public T

            Name: next
                Description: Keeps track of a node's next in the List.
                Type: public Node<T>*

            Name: previous
                Description: Keeps track of a node's previous in the List.
                Type: public Node<T>*

    **File:** UnorderedList.h

        Description: Used to hold the override functions for the Linked Lists.

        **Attributes:**

            Name: search
                Description: Searches for the node with the passed in data.
                Type: public override bool

             Name: insertFirst
                Description: Inserts a node of the passed in data to the first of the List.
                Type: public override void

            Name: insertLast
                Description: Inserts a node of the passed in data to the last of the List.
                Type: public override void

            Name: deleteNode
                Description: Deletes a node of the passed in data from the List.
                Type: public override void

            Name: printList
                Description: Function that outputs the List to the console.
                Type: public void