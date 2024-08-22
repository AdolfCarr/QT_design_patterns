# Abstract Factory Implementation

## Description: 

- **Abstract Factory Pattern Demonstration**

This project showcases the Abstract Factory design pattern by implementing a flexible and scalable system for creating various types of shapes. The Abstract Factory pattern allows the client code to remain independent of the concrete classes of the shapes it uses. By defining an abstract factory interface, the project demonstrates how to produce families of related objects (shapes) without specifying their exact classes.

The implementation of the Abstract Factory pattern addresses the issues of flexibility, maintainability, scalability, and adherence to design principles in a complex system involving multiple shape types.

<p align="center">
  <img src="../images/AbstractFactoryPattern_diagramOfSequence.png" width="1267" height="647" alt="Abstract Factory pattern - Diagram of sequence, this diagram was generated with PlantUML">
</p>

<p align="center">

<p align="center">
  <em>Fig 1: Abstract Factory pattern - Diagram of sequence, this diagram was generated with PlantUML</em>
</p>

## Diagram Explanation:

1. **Client:** The actor representing the entity interacting with the `FactoryMethodClient` class.
2. **FactoryMethodClient:** The main class responsible for interacting with the `CarFactory` to obtain car instances and invoking the `drive()` method.
3. **CarFactory:** The factory class that creates and returns instances of car models based on the provided type.
Fiat, Honda, Toyota: The car model classes that are created by the `CarFactory` and used by the `FactoryMethodClient`.

**Sequence:**

1. The `Client` creates an instance of `FactoryMethodClient`.
2. FactoryMethodClient requests the creation of a `Fiat` car from the `CarFactory` using `createCar("F")`.
3. The `CarFactory` creates and returns a `Fiat` instance.
4. The `Fiat` instance is used to call the `drive()` method.
5. The same process is repeated for `Honda` with "H" and `Toyota` with "T".

## Key Components
1. **Abstract Factory Interface (`ShapeFactory`):** Defines methods for creating different shapes such as squares, rectangles, and triangles.

2. **Concrete Factories:** `NormalShapeFactory` and `RoundedShapeFactory` implement the `ShapeFactory` interface to create normal and rounded shapes, respectively.

1. **Shape Products:** Includes `Triangle`, `Square`, `Rectangle`, `RoundedTriangle`, `RoundedSquare`, and `RoundedRectangle`, each implementing the `Shape` interface with a `draw()` method to output their respective visual representations.

## Project Functionality
The client code interacts with the abstract factory to obtain shape objects and invoke their methods. The client is represented by the use of each concrete factory (`NormalShapeFactory` and `RoundedShapeFactory`), triggered by clicking on the respective push buttons in the UI. This separation ensures that adding new shapes or altering existing ones does not require changes to the client code. The client only needs to implement the new methods provided by the factories to create and use additional shapes, such as triangles, making the system both flexible and easy to extend.

<p align="center">
  <img src="../images/abstract_factory_client.png" width="502" height="413" alt="Abstract Factory Client Screen">
</p>

<p align="center">

<p align="center">
  <em>Fig 1: Abstract Factory Client Screen</em>
</p>

## Code Limitations Without Abstract Factory Pattern

Without using the Abstract Factory pattern, the following limitations arise:

- **Tight Coupling:** The client code would directly instantiate concrete shape objects, leading to tight coupling between the client and the specific shape classes. This means that the client is directly responsible for creating specific shape objects like Square, Rectangle, or Triangle.

- **Lack of Flexibility:** In a system that does not use the Abstract Factory pattern, the client code becomes tightly coupled with the concrete classes of the shapes it creates. This tight coupling leads to several challenges:

    1. **Violation of the Open/Closed Principle:** The Open/Closed Principle, a key concept in software design, states that a class should be open for extension but closed for modification. In other words, new functionality should be added by extending the existing code, not by altering it. Without the Abstract Factory pattern, introducing new shapes (e.g., Pentagon, Hexagon, or RoundedTriangle) requires modifications to the client code to accommodate these new shapes. This violates the Open/Closed Principle, making the system fragile and more prone to errors.

    2. **Increased Maintenance Effort:** As more shapes are introduced, the client code must include additional logic to handle the creation of these new shapes. This often results in cluttered code with numerous conditionals or switches, making the client code harder to read, maintain, and extend. Each modification or addition of new shapes increases the likelihood of bugs and reduces the overall code quality.

    3. **Limited Reusability:** Since the client code is tailored to the specific shapes it creates, reusing the client code in other contexts becomes difficult. If the requirements change (e.g., using different shapes in another application), the client code must be rewritten or heavily modified, reducing its reusability across different projects.

    4. **Difficulty in Extensibility:** Introducing new shape variations or additional factories would necessitate significant changes to the existing codebase, reducing maintainability and scalability. This tight coupling hinders the system's ability to adapt to new requirements or extend its functionality efficiently.

- **Example Scenario:**
Suppose the client code initially handles only Square and Rectangle objects. Later, the system needs to support Triangle and Circle shapes. Without the Abstract Factory pattern, the client code must be updated with new logic to create these shapes. This could involve adding new conditional checks or creating specific methods for each new shape. Such modifications directly contravene the Open/Closed Principle, as the client code is not closed to modification when extending its functionality.

By contrast, with the Abstract Factory pattern, adding new shapes simply requires extending the factory classes. The client code remains untouched, as it interacts with the abstract factory to request shapes, without needing to know the specifics of the shape creation process. This ensures that the system remains flexible, extensible, and easier to maintain.

## Commit History and Code Extension

**Before Extending Code Functionality:**

- Commit Hash: `515a083048eaac92b5298468ac14173a72033d9e`
    
    - **Description:** Up to this commit, the implementation directly applies the Factory Method pattern to the available shapes within the Abstract Factory method. The factories (`NormalShapeFactory` and `RoundedShapeFactory`) are configured to produce only squares and rectangles. This approach adheres to the principles of the Factory Method pattern, focusing on the creation of these shapes but without including triangles.

**After Extending Code Functionality:**

- Commit Hash: `926dab97789b52adfb630655e2aa74fc37cd5fee`

    - **Description:** Extended the Abstract Factory to include methods for creating `NormalTriangle` and `RoundedTriangle` shapes in the `NormalShapeFactory` and `RoundedShapeFactory`, respectively. This enhancement demonstrates the flexibility of the Abstract Factory pattern by allowing the addition of new shape types without altering the existing client code. The client is represented by the use of the respective factories through button clicks in the UI, which now trigger the creation of the newly added triangle shapes along with the existing square and rectangle shapes. The client only needs to implement the new methods provided by the factories to utilize these additional shapes.


## Summary:

This project illustrates the power of the Abstract Factory pattern in building a flexible and maintainable system that can easily adapt to new requirements and product variations.