# Pangaea

Pangaea is a comprehensive Unreal Engine 5.6 project that demonstrates the implementation of three distinct top-down game genres: a classic point-and-click, a real-time strategy (RTS), and a twin-stick shooter. This repository serves as a practical example and template for building various top-down style games, showcasing a blend of C++ and Blueprint development.

The project is built with modern Unreal Engine features, including the Enhanced Input system for flexible control mapping and the State Tree system for modular AI development in the Twin-Stick variant.

## Features

- **Unreal Engine 5.6:** Built using a recent version of Unreal Engine.
- **Multiple Game Variants:** Contains three playable game modes in a single project, each with its own logic, controls, and level.
- **C++ & Blueprint Implementation:** A practical mix of C++ for core logic and Blueprints for game content, character setup, and UI.
- **Enhanced Input System:** Utilizes Unreal's modern input system with distinct Input Mapping Contexts for mouse/keyboard and touch controls across different variants.
- **StateTree AI:** The Twin-Stick Shooter variant features enemy AI powered by Unreal Engine's StateTree system, demonstrating task-based, modular AI logic.

## Game Variants

Each game variant is self-contained within its own folder in the `Content` directory and has a dedicated level (`.umap`) file to explore its functionality.

### 1. Top-Down
A foundational example of a top-down game with point-and-click navigation.

- **Controls:** Click or tap on a location to move the character.
- **Key Assets:**
    - `Content/TopDown/Lvl_TopDown.umap`
    - `Content/TopDown/Blueprints/BP_TopDownCharacter.uasset`
    - `Content/TopDown/Blueprints/BP_TopDownController.uasset`
    - `Content/TopDown/Input/IMC_Default.uasset`

### 2. Strategy
A real-time strategy (RTS) variant with a free-moving camera, unit selection, and movement commands.

- **Controls:**
    - **Camera:** Use WASD or drag the right mouse button to move the camera. Use the mouse wheel to zoom.
    - **Unit Selection:** Left-click to select/deselect units. Hold Shift + Left-click to add/remove from selection. Drag a box to select multiple units.
    - **Commands:** Right-click to issue a move command to selected units.
- **Features:** Unit selection, deselection, drag-select, and movement commands.
- **Key Assets:**
    - `Content/Variant_Strategy/LVL_Strategy.umap`
    - `Source/Pangaea/Variant_Strategy/StrategyPlayerController.h`
    - `Source/Pangaea/Variant_Strategy/StrategyUnit.h`
    - `Content/Variant_Strategy/Blueprints/BP_StrategyPawn.uasset`

### 3. Twin-Stick Shooter
An action-packed variant featuring fast-paced combat, enemy AI, and a scoring system.

- **Controls:**
    - **Movement:** WASD or Gamepad Left Stick.
    - **Aiming:** Mouse or Gamepad Right Stick.
    - **Actions:** Left-click/Right Trigger to shoot, Spacebar/Face Button to dash, Right-click/Left Trigger for an Area-of-Effect (AoE) attack.
- **Features:**
    - Player character with movement, aiming, shooting, and dashing abilities.
    - StateTree-driven enemy NPCs that chase the player.
    - Projectile and AoE attack systems.
    - A scoring and combo multiplier system managed by the `TwinStickGameMode`.
    - Health and item pickups.
- **Key Assets:**
    - `Content/Variant_TwinStick/LVL_TwinStick.umap`
    - `Source/Pangaea/Variant_TwinStick/TwinStickCharacter.h`
    - `Source/Pangaea/Variant_TwinStick/AI/TwinStickNPC.h`
    - `Content/Variant_TwinStick/Blueprints/AI/ST_TwinStickNPC.uasset` (StateTree Asset)

## Getting Started

To run this project, you will need Unreal Engine 5.6 or a later compatible version.

1.  Clone the repository to your local machine:
    ```bash
    git clone https://github.com/ShamsulArifin/Pangaea.git
    ```
2.  Navigate to the project directory.
3.  Right-click on the `Pangaea.uproject` file and select **Generate Visual Studio project files**.
4.  Open the generated `Pangaea.sln` file in Visual Studio and build the solution (Build > Build Solution).
5.  After the build is successful, open the `Pangaea.uproject` file in the Unreal Editor.
6.  The editor will open the default map, `Lvl_TopDown`. To explore other variants, open their respective maps located in the `Content` folder.
