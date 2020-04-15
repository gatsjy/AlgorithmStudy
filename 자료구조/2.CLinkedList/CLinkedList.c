#include <stdlib.h>
#include <stdio.h>
#include "CLinkedList.h"

void ListInit(List* plist) {
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numofData = 0;
}

void LInsertFront(List* plist, Data data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
	}

	(plist->numofData)++;
}

void LInsert(List* plist, Data data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}
	(plist->numofData)++;
}

int LFirst(List* plist, Data* pdata) {
	if (plist->tail == NULL)
		return FALSE;

	plist->before = plist->tail;
	plist->cur = plist->tail->next;

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List* plist, Data* pdata) {
	if (plist->tail == NULL) // 저장된 노드가 없다면
		return FALSE;

	plist->before = plist->cur; // before가 다음 노드를 가리키게 한다.
	plist->cur = plist->cur->next; // cur이 다음 노드를 가리키게 한다.

	*pdata = plist->cur->data;
	return TRUE;
}

Data LRemove(List* plist) {
	Node* rpos = plist->cur;
	Data rdata = plist->cur->data;
	
	// 하지만 2가지 예외사항을 처리해줘야한다.
	// 1. 삭제할 노드를 tail이 가리키는 경우
	// 2. 삭제할 노드가 리스트에 홀로 남은 경우
	if (rpos = plist->tail) {
		if (plist->tail == NULL) {
			plist->tail = NULL;
		}
		else {
			plist->tail = plist->before;
		}
	}
	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numofData)--;
	return rdata;
}

int LCount(List* plist) {
	return plist->numofData;
}

int main(void) {
	// 원형 연결 리스트의 생성 및 초기화
	List list;
	int data, i;
	int nodeNum;
	ListInit(&list);

	// 리스트에 5개의 데이터를 저장
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsertFront(&list, 2);
	LInsertFront(&list, 1);

	// 리스트에 저장된 데이터를 연속 3회 출력
	if (LFirst(&list, &data)) {
		printf("%d ", data);

		for (i = 0; i < LCount(&list) * 3 - 1; i++) {
			if (LNext(&list, &data)) {
				printf("%d ", data);
			}
		}
	}

	printf("\n");

	// 2의 배수를 찾아서 모두 삭제
	nodeNum = LCount(&list);

	if (nodeNum != 0) {
		LFirst(&list, &data);
		if (data % 2 == 0)
			LRemove(&list);

		for (i = 0; i < nodeNum - 1; i++) {
			LNext(&list, &data);
			if (data % 2 == 0)
				LRemove(&list);
		}
	}

	// 전체 데이터 1회 출력
	if (LFirst(&list, &data)) {
		printf("%d ", data);

		for (i = 0; i < LCount(&list) - 1; i++) {
			if (LNext(&list, &data))
				printf("%d ", data);
		}
	}
}

