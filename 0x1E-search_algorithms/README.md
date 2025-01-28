## SEARCH ALGORITHM
	A search algorithm is a step-by-step procedure or method used to locate a specific item or set of items within a data structure, such as an array, list, or database. Search algorithms aim to efficiently find the target item (called the "key") based on specific criteria.

# LINEAR SEARCH
	Traverses each element in the data structure sequentially until the target element is found or the end is reached.
	Efficiency: Works for unsorted data; time complexity is O(n).
	Example: Searching for the number 5 in the list [1, 2, 3, 5, 6].

# BINARY SEARCH
	Recursively or iteratively divides a sorted array into halves and checks which half contains the target value
	Efficiency: Works only for sorted data; time complexity is O(logn).
	Example: Searching for 5 in [1, 2, 3, 5, 6] by comparing with the middle element.

# HASH_BASED SEARCH
	Uses a hash function to map keys to indices in a hash table for direct lookup.
	Efficiency: Time complexity is O(1) for average cases.
	Example: Searching for "key" in a dictionary.

# DEPTH FIRST SEARCH (DFS) AND BREADTH FIRST SEARCH (BFS)
	Used for traversing graphs or trees.
	DFS explores as far as possible along one branch before backtracking.
	BFS explores all nodes at the current depth before moving to the next level.
	Efficiency: Depends on the graph's structure; time complexity is O(V+E) (vertices + edges).

# INTERPOLATION SEARCH
	Like binary search but estimates the position of the target based on the value and range.
	Efficiency: Works well for uniformly distributed sorted data; time complexity is O(loglogn) in the best case
