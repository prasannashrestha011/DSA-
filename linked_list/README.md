# Linked List algorithms:

## Insert at the beginning:

- Start
- Create a new node and add a data to it.
- Check if linked list is empty.
- If linked list is empty then set head pointer point to new node.
- If linked list is not empty then make the new node points to current head. Subsequently make the head pointer points to new node.
- End.

## Insert at the end:

- Start
- Create a new node and add a data.
- Check if linked list is empty.
- If linked list is empty then set head pointer point to new node.
- If linked list is not empty then triverse through the linked list till the last node
- Once the last node is reached, make the last node points to the new node
- End

## Remove at the beginning:

- Start
- Check if list is empty
- return immediately if its empty
- store the current head to temporarily variable
- make the head points to linked node of current head
- free the temporary variable
- End

## Remove at the end:

- Start
- Check if list is empty, terminate the process if its empty
- If list only has one node, remove the node
- If list has multiple nodes, triverse from the first node till it reaches the second last node
- free the last node by disconnecting it from second last node
- End
