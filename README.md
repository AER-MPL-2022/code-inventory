 ## 📖 Readme Inventory
This readme will guide you through the tasks necessary to work with the following code, which is responsible for managing the inventory system. 🎮

## 📝 Task List 🚀

### Step 1️⃣: Add Inventory Keys 🔑
🔧 Add logic for handling keypresses in the graphic_key_event() function, such as opening and closing the inventory, adding items, and dropping items.
`./src/graphic/graphic_event.c`

### Step 2️⃣: Add Inventory Switch 🔄
🔧 Implement the inventory_switch(), inventory_open(), and inventory_close() functions to open and close the inventory as needed.
`./src/inventory/inventory_event.c`

### Step 3️⃣: Create Inventory Objects 🎨
🔧 Add logic to the inventory_create_elements() function for initializing item buttons, instantiating items, and updating inventory text.
`./src/inventory/inventory_create.c`

### Step 4️⃣: Destroy Elements 💣
🔧 Implement the inventory_destroy_elements() function to delete inventory elements when closing the inventory.
`./src/inventory/inventory_destroy.c`

### Step 5️⃣: Mouse Management 🖱️
🔧 Add logic to the inventory_mouse_event() function to handle mouse interactions with inventory items.
`./src/inventory/inventory_mouse_event.c`

### Step 6️⃣: Add a New Item ➕
🔧 Implement the inventory_add() function to add a new item to the inventory and update the inventory.

### Step 7️⃣: Remove an Item from the Box 📦
🔧 Add logic to the drop_item() function to remove an item from a box and update the inventory.

### Step 8️⃣: Set Inventory Title and Description 🏷️
🔧 Implement the inventory_set_title() and inventory_set_description() functions to set or update the inventory's title and description.

### Step 9️⃣: Update Inventory Text 📄
🔧 Add logic to the inventory_text_update() function to update the inventory text based on the selected box and item.

## ⚙️ How the Infrastructure Works (Inventory-focused)
The infrastructure consists of various structures and enums that help manage the game project's inventory, graphical elements, and interactions.

`enum type` - Enumerates the different element types: OBJECT, BUTTON, TEXT, BOX.

`list_t` - A linked list structure that stores elements of different types, identified by their ID.

`project_t` - A project structure containing graphic_t and inventory_t structures.

`item_t` - Represents an item in the inventory with its graphical object, text, and quantity.

`box_t` - Represents an inventory box containing a button and an item.

`inventory_t` - Contains all information related to the inventory system, including functions to open, close, and switch the inventory.

`enum state` - Enumerates the different states of a button: IDLE, HOVER, CLICK.

`object_t` - Represents a graphical object with a sprite and a texture.

`text_t` - Represents a text object with a font and the actual text.

`button_t` - Represents a button object with its sprite, texture, and functions for handling hover, click, and idle states.

`graphic_t` - A structure that contains the game window and lists of objects, buttons, and texts.


## 🏁 Conclusion
Once you complete the tasks above, you'll have a functional inventory system for your game. Feel free to add more features or customize the look and feel of the inventory to match your game's aesthetic and requirements.
