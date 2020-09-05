//
//  main.c
//  c tutorial
//
//  Created by Christopher Gradwohl on 9/5/20.
//  Copyright © 2020 Christopher Gradwohl. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for (int i; i < argc; i++) {
        printf("arg %d : %s\n", i,  argv[i]);
        printf("Hello, World!\n");
    }
    return 0;
}
