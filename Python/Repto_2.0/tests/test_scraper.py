import unittest
from src.automation.scraper import Scraper

class TestScraper(unittest.TestCase):

    def setUp(self):
        self.scraper = Scraper()

    def test_download_excel(self):
        nbk_id = "123ABC"
        result = self.scraper.download_excel(nbk_id)
        self.assertTrue(result, "Excel file should be downloaded successfully.")

    def test_invalid_nbk_id(self):
        nbk_id = "INVALID_ID"
        with self.assertRaises(ValueError):
            self.scraper.download_excel(nbk_id)

if __name__ == '__main__':
    unittest.main()