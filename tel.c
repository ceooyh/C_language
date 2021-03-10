#include <stdio.h>

struct tel{
	char name[30];
	int tel;
}
struct tel arr[10];
int tindex = 0;

void insert_tel(){
	if(tindex>=10){
		printf("전화번호부가 꽉찼습니다.\n");
		return;
	}
	printf("이름을 입력하세요 : ");
	scanf("%s",arr[tindex].name);
	printf("전화번호를 입력하세요 : ");
	scanf("%d",arr[tindex].tel);
	tindex++;
}

void search_tel(){
	char name[30];
	printf("검색할 이름을 입력하세요 : ");
	scanf("%s",name);

	int i;
	for(i=0;i<tindex;i++){
		if(strcmp(arr[i].name,name)==0){
			printf("찾는이 : %s\n",arr[i].name);
			printf("찾는 전화번호 : %d\n",arr[i].tel);
			return;
		}
	}
	printf("찾는이가 없습니다.\n");
}
void delete_tel(){
	char name[30];
	printf("검색할 이름을 입력하세요 : ");
	scanf("%s",name);

	int i;
	for(i=0;i<tindex;i++){
		if(strcmp(arr[i].name,name)==0){
			int j;
			for(j=i;j<tindex-1;j++){
				arr[j] = arr[j+1];
				tindex--;
				printf("검색한 데이터가 삭제되었습니다.");
				return;
			}
		}
	}
	printf("삭제할 데이터가 없습니다.\n")
}
void update_tel(){
	char name[30];
	char name2[30];
	int tel;
	printf("검색할 이름을 입력하세요 : ");
	scanf("%s",name);
	printf("수정할 이름을 입력하세요 : ");
	scanf("%s",name2);
	printf("수정할 전화번호를 입력하세요 : ");
	scanf("%d",tel);

	int i;
	for(i=0;i<tindex;i++){
		if(strcmp(arr[i].name,name)==0){
			strcopy(arr[i].name,name);
			arr[i].tel = tel; 
			printf("수정이 완료되었습니다.\n");
			return;
		}
	}
	printf("찾는이가 없습니다.\n");
}

int main(void){
	insert_tel();
	insert_tel();
	insert_tel();
	insert_tel();
	return 0;
}
