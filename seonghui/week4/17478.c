#include <stdio.h>

void print(int idx)
{
    int i;
    for (i = 0; i < idx; i++)
        printf("____");
}

void recul(int n, int idx)
{
    int i = 0;
    if (idx == n)
    {
        print(idx);
        printf("\"����Լ��� ������?\"\n");
        print(idx);
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
        return;
    }
    else
    {
        print(idx);
        printf("\"����Լ��� ������?\"\n");
        print(idx);
        printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
        print(idx);
        printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
        print(idx);
        printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");

        idx++;
        recul(n, idx);

        print(idx);
        printf("��� �亯�Ͽ���.\n");
    }
}

int main()
{
    int n;
    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    scanf("%d", &n);
    recul(n, 0);
    printf("��� �亯�Ͽ���.\n");
}