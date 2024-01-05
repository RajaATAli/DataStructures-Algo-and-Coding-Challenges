/*

Problem: Design a File System

You are tasked to design a basic file system. This file system should allow the following operations:

Create a file: Given a string path (like "/a/b/c") and an integer value, create a new file at the specified path. If any directories in the path do not exist, they should be created. Each file stores a single integer value.

Get the value of a file: Given a string path to a file, return the value stored in that file. If the file does not exist, return -1.

Consider the following points:

The root directory is represented as "/".
The file system should support nested paths (directories within directories).
You can assume that the file paths will always be valid and will include only letters, numbers, and slashes.
You need to optimize for efficient file creation and retrieval. 

Think about the data structures that would be best suited for this problem, and outline how you would implement the create and get methods. What are the time and space complexities of your solution?
*/

#include <iostream>

class FileSystem{
  // Each directory can be thought as a "node" in a tree-like structure



  // This method will take a path and a value
  void createFile(){
    // Split plath based on slashes

    // If a part of the path does not exist, 

  }

  // Navigates through the file system using the path
  int valueFile(){

    return -1;
  }
};

