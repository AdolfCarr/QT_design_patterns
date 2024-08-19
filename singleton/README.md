# Singleton Implementation

## Description: 

- **Singleton Design Pattern Demonstration**

This section of the project is focused on applying the Singleton design pattern to a Logger class within the Qt-based application. The Logger class is responsible for recording all user activities within the application, ensuring a consistent log is maintained throughout the application's runtime.

<p align="center">
  <img src="../images/singletonPattern_diagramOfSequence.png" width="391" height="348" alt="Singleton pattern - Diagram of sequence, this diagram was generated with PlantUML">
</p>

<p align="center">

<p align="center">
  <em>Fig 1: Singleton pattern - Diagram of sequence, this diagram was generated with PlantUML</em>
</p>

## Key Features:
1. **Initial Setup:**

    - The project began with the creation of a .gitignore file to prevent the tracking of build files in the Git repository, ensuring that only relevant changes to the source code are tracked.

2. **Logger Class Creation:**

    - A Logger class was developed to log user activities whenever the Singleton button is clicked. Initially, this class created a new log file each time the user navigated between different dialogs in the application, leading to multiple log files being generated within a single execution.

3. **Implementation of Singleton Pattern:**

    - The Singleton pattern was identified as a necessary solution to ensure that only a single instance of the Logger class exists, preventing the generation of multiple log files.
    - **Steps Taken:**
        - The constructor of the Logger class was made private to prevent direct instantiation from outside the class.
        - A static method was implemented to manage the creation and retrieval of the Logger instance, ensuring that only one instance of the Logger class is created.
        - A static instance of the Logger class was declared within the class to hold the sole instance.

4. **Final Integration:**

    - After successfully implementing the Singleton pattern, the Logger class was merged into the main branch, ensuring that the pattern is fully integrated into the application's core functionality. The final implementation ensures that a single log file is created and maintained, reflecting all user activity across different dialogs within the application.

> This project showcases the practical application of the Singleton design pattern to address real-world issues in software development, particularly in ensuring consistent logging behavior within an application.

## Comparing Singleton Implementation: Before and After

To fully understand the implementation and non-implementation of the Singleton design pattern in the Logger class, follow these steps to observe the changes in the log files generated within the log folder inside the singleton directory:

**View Singleton Pattern Unimplemented**

1. **Check Out the Commit:**

    - To see the Logger class before the Singleton pattern was applied, run the following Git command:

    ```
       git checkout c2a8dca4ba3193df88041c9c1c1b48d28596d03c
    ```

2. **Inspect the Log Files:**

    - Navigate to the singleton/log folder in your project directory.
    - In this state, the Logger class generates a new log file each time you navigate between different dialogs in the application, resulting in multiple log files being created within a single execution.

**View Singleton Pattern Implemented**

1. **Check Out the Singleton Branch:**

    - To see the Logger class with the Singleton pattern implemented, run:

    ```
       git checkout singleton
    ```

2. **Inspect the Log Files:**

    - Again, navigate to the singleton/log folder.
    - With the Singleton pattern implemented, you will notice that only one log file is generated and maintained throughout the application's runtime, regardless of how many times you navigate between dialogs.

**Summary**

By switching between these commits and examining the contents of the log folder within the singleton directory, you can directly observe the impact of the Singleton pattern on the Logger class. The difference in the number and consistency of log files will highlight the effectiveness of the Singleton design pattern in ensuring that only a single instance of the Logger class exists during the application's execution.