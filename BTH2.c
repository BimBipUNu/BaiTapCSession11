#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Nhập số hàng của mảng 2 chiều: ");scanf("%d",&rows);
    printf("Nhập số cột của mảng 2 chiều: ");scanf("%d",&columns);
    int a[rows][columns];
    int array[rows*columns];
    int indexArray=0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("Nhập phần tử ở vị trí (%d,%d)",i,j);scanf("%d",&a[i][j]);
            array[indexArray]=a[i][j];
            indexArray++;
        }
    }
    int chose;
    while(chose != 4)
    {
        printf("\n=========MENU=========\n");
        printf("1. In giá trị mảng theo ma trận\n");
        printf("2. Sắp xếp mảng có giá trị các phần tử theo dòng tăng dần và in ra\n");
        printf("3. Sắp xếp mảng có giá trị các phần tử theo cột giảm dần và in ra\n");
        printf("4. Thoát\n");
        printf("========================\n");
        printf("Lựa chọn của bạn\n");scanf("%d",&chose);
        switch(chose)
        {
            case 1:
                printf("Các giá trị mảng 2 chiều là: \n");
                for(int i=0; i<rows; i++)
                {
                    for(int j=0; j<columns; j++)
                    {
                        printf("%d ",a[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                for(int i=0; i<(rows*columns)-1; i++)
                {
                    for(int j=0; j<(rows*columns) -i -1; j++)
                    {
                        if(array[j]>array[j+1])
                        {
                            int temp= array[j+1];
                            array[j+1]=array[j];
                            array[j]=temp;
                        }
                    }
                }
                indexArray=0;
                printf("Mảng sau khi được sắp xếp giá trị các phần tử theo dòng tăng dần\n");
                for(int i=0; i<rows; i++)
                {
                    for(int j=0; j<columns; j++)
                    {
                        a[i][j] = array[indexArray];
                        indexArray++;
                        printf("%d ",a[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
            for (int i = 0; i < (rows * columns) - 1; i++) 
            {
                for (int j = 0; j < (rows * columns) - i - 1; j++)
                {
                    if (array[j] < array[j + 1])
                    {
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                }
            }
            indexArray = 0;
            printf("Mảng sau khi được sắp xếp giá trị các phần tử theo cột giảm dần\n");
            for (int j = 0; j < columns; j++)
            {
                for (int i = 0; i < rows; i++)
                {
                    a[i][j] = array[indexArray];
                    indexArray++;
                }
            }
            for(int i=0; i<rows; i++)
            {
                for(int j=0; j<columns; j++)
                {
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }
                break;
        }
    }
    printf("Thoát chương trình");
}