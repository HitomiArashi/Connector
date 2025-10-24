#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for product information
struct Product {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};

// Function Prototypes
void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
	system("cls");
    const char *filename = "products.bin";
    int choice, numProducts;

    do {
        printf("-- Product Management System --\n");
        printf("1. Write Products\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of products to write: ");
                scanf("%d", &numProducts);
                writeProducts(filename, numProducts);
                break;

            case 2:
                printf("Enter the number of products to append: ");
                scanf("%d", &numProducts);
                appendProducts(filename, numProducts);
                break;

            case 3:
                readProducts(filename);
                break;

            case 4:
                modifyProduct(filename);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void writeProducts(const char *filename, int numProducts) {
    // ...
	FILE* file = fopen(filename, "wb");
	if (file == NULL)
	{
		perror("Error opening file");
		return;
	}
	int i;
	for (i = 1; i <= numProducts; i ++)
	{
		printf("\nEnter details for product %d:\n", i);
		struct Product new_product;
		printf("Product ID: ");
		scanf("%d", &new_product.product_id);
		printf("Product Name: ");
		getchar();
		scanf("%s", &new_product.product_name);
		printf("Price: ");
		scanf("%f", &new_product.price);
		printf("Quantity: ");
		scanf("%d", &new_product.quantity);
		size_t num_written = fwrite(&new_product, sizeof(struct Product), 1, file);
		if (num_written != 1)
		{
			perror("Error writing to file");
			fclose(file);
			return;
		}
	}
	fclose(file);
	printf("\nProducts have been written to the file successfully.\n\n");
	return;
}

void appendProducts(const char *filename, int numProducts) {
    // ...
	FILE* file = fopen(filename, "ab");
	if (file == NULL)
	{
		perror("Error opening file");
		return;
	}
	int i;
	for (i = 1; i <= numProducts; i ++)
	{
		printf("\nEnter details for product %d:\n", i);
		struct Product new_product;
		printf("Product ID: ");
		scanf("%d", &new_product.product_id);
		printf("Product Name: ");
		getchar();
		scanf("%s", &new_product.product_name);
		printf("Price: ");
		scanf("%f", &new_product.price);
		printf("Quantity: ");
		scanf("%d", &new_product.quantity);
		size_t num_written = fwrite(&new_product, sizeof(struct Product), 1, file);
		if (num_written != 1)
		{
			perror("Error writing to file");
			fclose(file);
			return;
		}
	}
	fclose(file);
	printf("\nProducts have been appended to the file successfully.\n\n");
	return;
}

void readProducts(const char *filename) {
    // ...
	FILE* file = fopen(filename, "rb");
	if (file == NULL)
	{
		perror("Error opening file");
		return;
	}
	struct Product current_product;
	printf("\nReading products from the file:");
	printf("\n--------------------------------------------------------------\n");
    printf("%-12s %-20s %-10s %-10s",
           "Product ID", "Product Name", "Price", "Quantity");
    printf("\n--------------------------------------------------------------\n");

    while (fread(&current_product, sizeof(struct Product), 1, file) == 1) {
        printf("%-12d %-20s %-10.2f %-10d\n",
               current_product.product_id,
               current_product.product_name,
               current_product.price,
               current_product.quantity);
    }

    printf("--------------------------------------------------------------\n\n");
	fclose(file);
	return;
}

void modifyProduct(const char *filename) {
    // ...
	FILE *fp = fopen(filename, "r+b");
    if (fp == NULL) {
        // Handle error: file not found or unable to open
        perror("Error opening file");
        return;
    }

	struct Product update_product;
	int ID_update, found = 0;

	printf("\nEnter the Product ID to modify: ");
	scanf("%d", &ID_update);

	while (fread(&update_product, sizeof(struct Product), 1, fp) == 1) {
        if (update_product.product_id == ID_update) {
            // Found the product to update
            found = 1;
			printf("Product found. Enter new detail:\n");
            printf("New Product Name: ");
			getchar();
			gets(update_product.product_name);
            printf("New Price: ");
            scanf("%f", &update_product.price);
            printf("New Quantity: ");
            scanf("%d", &update_product.quantity);

            // Go back to the beginning of this record
            fseek(fp, -sizeof(struct Product), SEEK_CUR);

            // Overwrite the record
            fwrite(&update_product, sizeof(struct Product), 1, fp);
            printf("Product updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Product with ID %d not found.\n", ID_update);
    }
	printf("\n");

    fclose(fp);
}
