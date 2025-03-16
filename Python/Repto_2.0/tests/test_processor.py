import unittest
from src.automation.processor import process_excel

class TestProcessor(unittest.TestCase):

    def test_process_excel_valid(self):
        # Assuming we have a sample Excel file for testing
        input_file = 'tests/sample_valid.xlsx'
        expected_output = [
            {'FirstName': 'John', 'LastName': 'Doe', 'Date': '2023-01-01', 'User ID': '12345'},
            {'FirstName': 'Jane', 'LastName': 'Smith', 'Date': '2023-01-02', 'User ID': '67890'}
        ]
        result = process_excel(input_file)
        self.assertEqual(result, expected_output)

    def test_process_excel_empty_file(self):
        input_file = 'tests/sample_empty.xlsx'
        expected_output = []
        result = process_excel(input_file)
        self.assertEqual(result, expected_output)

    def test_process_excel_invalid_columns(self):
        input_file = 'tests/sample_invalid_columns.xlsx'
        with self.assertRaises(KeyError):
            process_excel(input_file)

if __name__ == '__main__':
    unittest.main()