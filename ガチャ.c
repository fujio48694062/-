#include <stdio.h>
#include <stdlib.h> // ��������
#include <time.h> // ��������
#define BUFFER_SIZE 1000

int main()
{
	int gatya[BUFFER_SIZE]; // �z��i�̈搔�j�̐錾
	int num_gatya = 0; // �K�`���̉�
	int random = 0; // ����
	int num_SSR = 0;// SSR�̐�
	int num_SR = 0; // SR�̐�
	int num_R = 0; // R�̐�
	float per_SSR = 0;// SSR�̊���
	float per_SR = 0;// SR�̊���
	float per_R = 0;// R�̊���


	// �K�`���̔r�o��
	printf("�K�`���̔r�o��\n");
	printf("SSR�F 3%%\n");
	printf(" SR�F17%%\n");
	printf("  R�F80%%\n\n");

	// �K�`���̉�
	printf("���A�����܂����H�i�P���`100�A�j\n");
	scanf_s("%d", &num_gatya);

	printf("\n\n���K�`���i%d�A�j\n", num_gatya);


	// �����̏�����
	srand((unsigned int)time(NULL));

	// ����
	for (int i = 0; i < num_gatya; i++)
	{
		gatya[i] = rand() % 100 + 1;
		// �����irand()�j / �ꐔ�iwhole�j = �]��i0�`99�j
		// �����irand()�j / �ꐔ�iwhole�j +1 = �]��i1�`100�j
		random = gatya[i];
		/* printf("%d ", random); */
	}


	// ����
	for (int i = 0; i < num_gatya; i++)
	{
		if ((gatya[i] >= 1) && (gatya[i] < 4)) // SSR��3%�i1�`3�j�Ŕr�o
		{
			printf("SSR ");
			num_SSR++;
		}
		else if ((gatya[i] >= 4) && (gatya[i] < 21)) // SR��17%�i4�`20�j�Ŕr�o
		{
			printf("SR ");
			num_SR++;
		}
		else // R��80%�i21�`100�j�Ŕr�o
		{
			printf("R ");
			num_R++;
		}
	}

	// �W�v
	per_SSR = (num_SSR / (float)num_gatya) * 100;
	per_SR = (num_SR / (float)num_gatya) * 100;
	per_R = (num_R / (float)num_gatya) * 100;

	printf("\n\n");
	printf("SSR�F%d�i%.1f%%�j\n", num_SSR, per_SSR);
	printf(" SR�F%d�i%.1f%%�j\n", num_SR, per_SR);
	printf("  R�F%d�i%.1f%%�j\n", num_R, per_R);

	return 0;
}