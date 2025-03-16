# Repto 2.0

Repto 2.0 is a Python application that automates the process of downloading and processing Excel sheets based on user input of an alphanumeric ID (NBK). The application utilizes the Selenium library for data fetching and implements a user-friendly GUI using Tkinter for user interaction.

## Features

- User input for NBK ID and bulk download options.
- Downloads Excel sheets from a specified web portal.
- Processes downloaded Excel files to filter relevant data.
- Retains specified columns: 'FirstName', 'LastName', 'Date', and 'User ID'.

## Project Structure

```
Repto_2.0
├── src
│   ├── main.py          # Entry point of the application
│   ├── gui
│   │   ├── __init__.py  # Initialization for GUI module
│   │   └── interface.py  # GUI implementation using Tkinter
│   ├── automation
│   │   ├── __init__.py   # Initialization for automation module
│   │   ├── scraper.py     # Logic for downloading Excel sheets
│   │   └── processor.py   # Processing of downloaded Excel files
│   └── utils
│       ├── __init__.py    # Initialization for utils module
│       └── helpers.py      # Utility functions for common tasks
├── tests
│   ├── __init__.py        # Initialization for tests module
│   ├── test_scraper.py     # Unit tests for scraper functionality
│   └── test_processor.py    # Unit tests for processor functionality
├── requirements.txt        # Project dependencies
└── README.md               # Project documentation
```

## Installation

1. Clone the repository:
   ```
   git clone https://github.com/yourusername/Repto_2.0.git
   ```
2. Navigate to the project directory:
   ```
   cd Repto_2.0
   ```
3. Install the required dependencies:
   ```
   pip install -r requirements.txt
   ```

## Usage

1. Run the application:
   ```
   python src/main.py
   ```
2. Enter the NBK ID and select any additional options for bulk downloads.
3. The application will fetch and process the corresponding Excel sheets.

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any enhancements or bug fixes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.