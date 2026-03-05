PRAGMA foreign_keys=ON;
CREATE TABLE units(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
	name TEXT NOT NULL,
	short_name TEXT NOT NULL
);

CREATE TABLE product_classes(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        code TEXT NOT NULL UNIQUE,
        name TEXT NOT NULL,
        is_terminal INTEGER NOT NULL CHECK (is_terminal IN (0,1)),
        base_unit_id INTEGER,
        parent_id INTEGER,
        order_index INTEGER DEFAULT 0,

        FOREIGN KEY (base_unit_id) REFERENCES units(id)
            ON UPDATE CASCADE
            ON DELETE SET NULL,
        FOREIGN KEY (parent_id) REFERENCES product_classes(id)
            ON UPDATE CASCADE
            ON DELETE CASCADE,
);

CREATE TABLE product(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT NOT NULL,
        article_number TEXT,
        price REAL NOT NULL CHECK (price >=0),
        manufacturer TEXT,
        product_class_id INTEGER NOT NULL,


        FOREIGN KEY (product_class_id) REFERENCES product_classes(id)
            ON UPDATE CASCADE
            ON DELETE CASCADE,
);
