// LinearList.cpp: 定义控制台应用程序的入口点。
//

#include "SinglyLinkedList.h"

#define TEST_SEQUENTIAL_LIST 0
#define TEST_SINGLY_LINKED_LIST 1


int main(){

//测试单链表
#if TEST_SINGLY_LINKED_LIST

	LinkList list = NULL;
	int n = 20;

	printf("==========================================\n");
	printf("              测试单链表操作\n");
	printf("==========================================\n");
	init_slink(&list);

	printf("\n------------- 建立正向单链表 -------------\n");
	if(!create_positive_slink(&list, n)) print_slink(list);

	printf("\n---------------- 插入元素 ----------------\n");
	int inpos = 11;
	int ine = 12;
	printf("插入元素位置：%d   插入元素：%d\n", inpos, ine);
	if (!insert_ele_slink(list, inpos, ine)) 
		print_slink(list);
	else {
		printf("插入元素错误\n");
		return -1;
	}

	printf("\n---------------- 删除元素 ----------------\n");
	int depos = 1;
	int dee;
	if (!delete_ele_slink(list, depos, &dee)) {
		printf("删除元素位置：%d   删除元素：%d\n", depos, dee);
		print_slink(list);
	}
	else {
		printf("删除元素错误\n");
		return -1;
	}
		
#endif

    return 0;
}

