#include <stdio.h>
#include <string.h>

#define MAX_TASKS 50
#define MAX_LENGTH 80

char tasks[MAX_TASKS][MAX_LENGTH];
int taskCount = 0;

void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("List full!\n");
        return;
    }
    printf("Enter task: ");
    getchar();
    fgets(tasks[taskCount], MAX_LENGTH, stdin);
    tasks[taskCount][strcspn(tasks[taskCount], "\n")] = 0;
    taskCount++;
    printf("Task added!\n");
}

void viewTasks() {
    if (taskCount == 0) {
        printf("No tasks!\n");
        return;
    }
    printf("\nTasks:\n-----\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

void deleteTask() {
    int index;
    printf("Enter task number (1-%d): ", taskCount);
    scanf("%d", &index);
    if (index < 1 || index > taskCount) {
        printf("Invalid number!\n");
        return;
    }
    for (int i = index - 1; i < taskCount - 1; i++) {
        strcpy(tasks[i], tasks[i + 1]);
    }
    taskCount--;
    printf("Task deleted!\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: deleteTask(); break;
            case 4: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
