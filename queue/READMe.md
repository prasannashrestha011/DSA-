# Single Queue

## Insert Algorithm:

- Start
- Check if head pointer is null
- If head is null, create a new node , assign the data , and make the head and rear pointer points ot it .
- if head pointer is not null, create a new node, link it using rear's next pointer and assign the new node as rear.
- End 

## Delete Algorithm 

- Start
- Check if rear and head pointer is null
- If condition is true, print queue is empty.
- If condition is false, assign the head to a temporary pointer and make the subsequent node as head.
- free the temporary pointer from the memory
- End 