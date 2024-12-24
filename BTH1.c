#include<stdio.h>
int main()
{
    int size;
    printf("Nhập số phần tử trong mảng: ");scanf("%d",&size);
    int a[size];
    for(int i=0; i<size; i++)
    {
        printf("Nhập phần tử thứ %d: ",i+1);scanf("%d",&a[i]);
    }
    int chose;
    while(chose != 5)
    {
        printf("\n=========MENU=========\n");
        printf("1. In giá trị phần tử của mảng\n");
        printf("2. Sử dụng Insertion sort sắp xếp mảng giảm dần và in ra\n");
        printf("3. Sử dụng Selection sort sắp xếp mảng tăng dần và in ra\n");
        printf("4. Sử dụng Bubble sort sắp xếp mảng giảm dần và in ra\n");
        printf("5. Thoát\n");
        printf("========================\n");
        printf("Lựa chọn của bạn\n");scanf("%d",&chose);
        switch(chose)
        {
            case 1:
                printf("Các phần tử trong mảng là: ");
                for(int i=0; i<size; i++)
                {
                    printf("%d ",a[i]);
                }
                break;
            case 2:
                printf("Mảng sau khi dùng Insertion sort sắp xếp giảm dần là: ");
                for (int i =1; i < size; i++)
                {
                    int key = a[i];
                    int j = i-1;
                    while(a[j]<key && j>=0)
                    {
                        a[j+1]=a[j];
                        j=j-1;
                    }
                    a[j+1]=key;
                }
                for(int i=0; i<size;i++)
                {
                    printf("%d ",a[i]);
                }
                break;
            case 3:
                printf("Mảng sau khi dùng Selection sort sắp xếp tăng dần là: ");
                for (int i = 0; i < size; i++)
                { 
                    int minIndex = i;
                    for (int j = i+1; j < size; j++)
                    {
                        if (a[j] < a[minIndex])
                        {
                            minIndex = j;
                        }
                    }
                    int temp = a[minIndex];
                    a[minIndex] = a[i];
                    a[i] = temp;
                }
                for(int i=0; i<size;i++)
                {
                    printf("%d ",a[i]);
                }
                break;
            case 4:
                printf("Mảng sau khi dùng Bubble sort sắp xếp giảm dần là: ");
                for (int i =0; i < size -1 ; i++)
                {
                    for (int j =0; j < size -i -1;j++)
                    {
                        if (a[j] < a[j+1])
                        {
                            int temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                    }
                }
                for(int i=0; i<size;i++)
                {
                    printf("%d ",a[i]);
                }
                break;
        }
    }
    printf("Thoát chương trình");

}