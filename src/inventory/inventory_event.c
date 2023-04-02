/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_event
*/

#include "../../include/project.h"

// -------------------------------- //
// * STEP 2: Add inventory switch * //
// -------------------------------- //

void inventory_switch(project_t *project)
{
    (void)project; // TODO : remove this line

    // If the inventory is open, close it using inventory_close(); otherwise, open it using inventory_open()
    // if (project->inventory->is_open) {
        // ...
    // } else {
        // ...
    // }
}

void inventory_open(project_t *project)
{
    (void)project; // TODO : remove this line

    // If the inventory is already open, return
    // ...

    // Set the inventory to open
    // ...

    // Organize the inventory using inventory_organize()
    // ...

    // Create the inventory user interface object using create_object()
    // ...

    // Create the inventory elements using inventory_create_elements() -> you hove to re-code this function "src/inventory/inventory_create.c"
    // ...

    // Update the inventory using inventory_update()
    // ...
}

void inventory_close(project_t *project)
{
    (void)project; // TODO : remove this line

    // If the inventory is not open, return
    // ...

    // Set the inventory to closed
    // ...

    // Delete the inventory user interface object using delete()
    // ...

    // Destroy the inventory elements using inventory_destroy_elements() -> you hove to re-code this function "src/inventory/inventory_destroy.c"
    // ...
}
