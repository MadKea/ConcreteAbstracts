# War Engine
    - Phases of war
    - Go through stages
    - Each stage the user can either go into design mode and chaneg the tactic 
    - OR just run the simulation.

# Components of war

## War Theatres (Area)
    - Land
    - Sea
    - Air

## Transportation
    - Medical
    - Weaponised
    - Goods Transporter
    - People Transporter

## Entities
    - Soldiers
    - Countries (Maybe make soldiers aggrpegate with a country)
    - Weaponary

## Phases of war
    - Land Warfare
    - Sea Warfare
    - Air Warfare
    - ~Space Warfare
    - Can change over iterations
    - Potential nuke catastrophe that leads to SPACE WARFARE

# Launch Reenactment

## Design Mode
    - When a phase change occurs prompt the user with a menu for updating war strategies etc.
    - exit out of the deesign mode when the user is happy with the new strategy
    - Update the user memento
  
## Simulate Mode
    - Run simulation, when simulation is done save the state in a memento.   
    - Log simulations to continue a simulation or create a new simulation.
    - could run a specific simulation with a singleton

# Patterns

## Patterns Learnt
    - Memento (Storing stages before  design mode)
    - Decorator (To promote ranks, could use Adapter as well)
    - Composite (build different types of Vehicles, weapons etc)
    - Iterator (Iterate the different Object collections)
    - State (Swap out states for the different components of war)
    - Strategy (for changing strategies)
    - Abstract Factory (Produce entities, weapons etc)
    - Prototype (make copy of states into a memento)
    - Observer (Declaration of wars, Check attack, If nuke then nuke world and go to space)
## Extra patterns (Needs further research)
    - Builder (For predefined layouts etc)
    - Facade (Managing sub-systems)
    - Proxy (When saving to the Memento)
    - Singleton (For the instance of the war engine running)
