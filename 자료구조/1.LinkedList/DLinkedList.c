#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInt(List* plist) {
	plist->head = (Node*)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}

void LInsert(List* plist, LData data) {
	if (plist->comp == NULL) {
		FInsert(plist, data);
	}
	else {
		SInsert(plist, data);
	}
}

void FInsert(List* plist, LData data) {
	Node* newNode = (Node*)malloc(sizeof(Node)); // 새 노드 생성
	newNode->data = data;

	newNode->next = plist->head->next; // 새 노드가 다른 노드를 가리키게함
	plist->head->next = newNode; // 더미노드가 새 노드를 가리키게 함
	(plist->numOfData)++;
}

int LFirst(List* plist, LData* pdata) {
	if (plist->head->next == NULL)
		return FALSE;

	plist->before = plist->head; // before은 더미를 가리키게함
	plist->cur = plist->head->next; //cur은 첫번째 노드를 가리키게함

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List* plist, LData* pdata) {
	if (plist->cur->next == NULL)
		return FALSE;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

LData LRemove(List* plist) {
	Node* rpos = plist->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2)) {
	plist->comp = comp;
}

void SInsert(List* plist, LData data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* pred = plist->head;
	newNode->data = data;

	// 새 노드가 들어갈 위치를 찾기 위한 반복문
	while (pred->next != NULL && plist->comp(data, pred->next->data) != 0) {
		pred = pred->next;
	}

	newNode->next = pred->next;
	pred->next = newNode;
}