import sqlite3

# Create an empty SQLite database
conn = sqlite3.connect('library.db')
cursor = conn.cursor()
query = """
    CREATE TABLE books (
        id INTEGER PRIMARY KEY,
        title TEXT NOT NULL,
        author TEXT NOT NULL,
        genre TEXT,
        rating REAL CHECK(rating IS NULL OR (rating >= 0 AND rating <= 5)),
        summary TEXT,
        status TEXT NOT NULL,
        path_to_pdf TEXT NOT NULL
        blurb TEXT
    );
"""

cursor.execute(query)
conn.commit()
conn.close()
