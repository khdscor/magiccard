#include<stdio.h>
#include<math.h>
#include<Windows.h>

int main() {


	int save[20];
	int card1[17000];
	int card2[17000];
	int card3[17000];
	int card4[17000];
	int card5[17000];
	int card6[17000];
	int card7[17000];
	int card8[17000];
	int card9[17000];
	int card10[17000];
	int card11[17000];
	int card12[17000];
	int card13[17000];
	int card14[17000];




	save[0] = -1;
	save[1] = -1;
	save[2] = -1;
	save[3] = -1;
	save[4] = -1;
	save[5] = -1;
	save[6] = -1;
	save[7] = -1;
	save[8] = -1;
	save[9] = -1;
	save[10] = -1;
	save[11] = -1;
	save[12] = -1;
	save[13] = -1;
	save[14] = -1;
	save[15] = -1;
	save[16] = -1;

	int res = 0, k = 0, n, max = 0;
	int cardmod[17];
	for (int k = 0; k < 17; k++) {
		cardmod[k] = 0;
	}
	printf("카드를 몇장 하시겠습니까?\n\n");
	scanf_s("%d", &n);
	max = n;
	for (int x = 0, i = 1; i < pow(2, max); i++) {
		n = max;
		for (int u = i, k = 0; k < max; k++) {
			if (i == 0)
				save[k] = 0;
			else
				save[k] = u % 2;
			if (u != 0)
				u = u / 2;

		}

		if (save[x] != -1)
		{
			if (save[x] == 1)
				card1[i] = i;
			else
				card1[i] = 0;
		}
		if (save[x + 1] != -1)
		{
			if (save[x + 1] == 1)
				card2[i] = i;
			else
				card2[i] = 0;
		}
		if (save[x + 2] != -1)
		{
			if (save[x + 2] == 1)
				card3[i] = i;
			else
				card3[i] = 0;
		}
		if (save[x + 3] != -1)
		{
			if (save[x + 3] == 1)
				card4[i] = i;
			else
				card4[i] = 0;
		}
		if (save[x + 4] != -1)
		{
			if (save[x + 4] == 1)
				card5[i] = i;
			else
				card5[i] = 0;
		}
		if (save[x + 5] != -1)
		{
			if (save[x + 5] == 1)
				card6[i] = i;
			else
				card6[i] = 0;
		}
		if (save[x + 6] != -1)
		{
			if (save[x + 6] == 1)
				card7[i] = i;
			else
				card7[i] = 0;
		}
		if (save[x + 7] != -1)
		{
			if (save[x + 7] == 1)
				card8[i] = i;
			else
				card8[i] = 0;
		}
		if (save[x + 8] != -1)
		{
			if (save[x + 8] == 1)
				card9[i] = i;
			else
				card9[i] = 0;
		}
		if (save[x + 9] != -1)
		{
			if (save[x + 9] == 1)
				card10[i] = i;
			else
				card10[i] = 0;
		}
		if (save[x + 10] != -1)
		{
			if (save[x + 10] == 1)
				card11[i] = i;
			else
				card11[i] = 0;
		}
		if (save[x + 11] != -1)
		{
			if (save[x + 11] == 1)
				card12[i] = i;
			else
				card12[i] = 0;
		}
		if (save[x + 12] != -1)
		{
			if (save[x + 12] == 1)
				card13[i] = i;
			else
				card13[i] = 0;
		}
		if (save[x + 13] != -1)
		{
			if (save[x + 13] == 1)
				card14[i] = i;
			else
				card14[i] = 0;
		}
	}

	printf("숫자 %d 중에서 숫자 하나를 생각해주세요\n\n", (int)(pow(2, max)));

	for (int i = 1; i <pow(2, max); i++) {
		if (card1[i] >0)
			printf("A: %d \n", card1[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card2[i] >0)
			printf("B: %d \n", card2[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card3[i] >0)
			printf("C: %d \n", card3[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card4[i] >0)
			printf("D: %d \n", card4[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card5[i] >0)
			printf("E: %d \n", card5[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card6[i] >0)
			printf("F: %d \n", card6[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card7[i] >0)
			printf("G: %d \n", card7[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card8[i] >0)
			printf("H: %d \n", card8[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card9[i] >0)
			printf("I: %d \n", card9[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card10[i] >0)
			printf("J: %d \n", card10[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card11[i] >0)
			printf("K: %d \n", card11[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card12[i] >0)
			printf("L: %d \n", card12[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card13[i] >0)
			printf("M: %d \n", card13[i]);

	}
	for (int i = 1; i <pow(2, max); i++) {
		if (card14[i] >0)
			printf("N: %d \n", card14[i]);

	}
	if (card1[1] > -1) {
		printf("A에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요\n");
		scanf_s("%d", &cardmod[0]);

	}
	if (card2[1] > -1) {
		printf("B에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[1]);

	}
	if (card3[1] > -1) {
		printf("C에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[2]);
	}
	if (card4[1] > -1) {
		printf("D에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[3]);
	}
	if (card5[1] > -1) {
		printf("E에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[4]);
	}
	if (card6[1] > -1) {
		printf("F에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[5]);
	}
	if (card7[1] > -1) {
		printf("G에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[6]);
	}
	if (card8[1] > -1) {
		printf("H에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[7]);
	}
	if (card9[1] > -1) {
		printf("I에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[8]);
	}
	if (card10[1] > -1) {
		printf("J에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[9]);
	}
	if (card11[1] > -1) {
		printf("K에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요\n");
		scanf_s("%d", &cardmod[10]);

	}
	if (card12[1] > -1) {
		printf("L에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[11]);

	}
	if (card13[1] > -1) {
		printf("M에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[12]);
	}
	if (card14[1] > -1) {
		printf("N에 생각하신 숫자가 있나요? 있으면 1, 없으면 0을 눌러주세요");
		scanf_s("%d", &cardmod[13]);
	}

	for (int a = 0; a < 17; a++) {

		res += (cardmod[a] * pow(2, a));
	}


	printf("당신이 생각한 수는 %d 입니다\n", res);


}