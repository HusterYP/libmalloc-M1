//
//  main.m
//  CustomLibMalloc
//
//  Created by Ping on 2024/10/26.
//

#import <Foundation/Foundation.h>
#import <malloc/malloc.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
		void *p = calloc(1, 24);
//		NSLog(@"%@", p);
        // insert code here...
        NSLog(@"Hello, World!");
    }
    return 0;
}
