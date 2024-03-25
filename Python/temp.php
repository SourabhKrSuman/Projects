<?php
// Include the PhpSpreadsheet library
require 'vendor/autoload.php';

use PhpOffice\PhpSpreadsheet\IOFactory;

// Load the Excel spreadsheet
$spreadsheet = IOFactory::load('path/to/your/file.xlsx');

// Get the first worksheet in the spreadsheet
$worksheet = $spreadsheet->getActiveSheet();

// Start building the HTML content
$html = '<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Email Template with Table</title>
<style>
/* Styles for the email template */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
}

.container {
    max-width: 600px;
    margin: 0 auto;
    padding: 20px;
}

table {
    width: 100%;
    border-collapse: collapse;
}

table th, table td {
    border: 1px solid #ddd;
    padding: 8px;
    text-align: left;
}

table th {
    background-color: #f2f2f2;
}
</style>
</head>
<body>
<div class="container">
    <h2>Your Table Data</h2>
    <table>
        <thead>
            <tr>';

// Get the column headers from the first row of the worksheet
foreach ($worksheet->getRowIterator() as $row) {
    $cellIterator = $row->getCellIterator();
    $cellIterator->setIterateOnlyExistingCells(false); // Loop through all cells, not just the ones with data
    foreach ($cellIterator as $cell) {
        $html .= '<th>' . $cell->getValue() . '</th>';
    }
    break; // Only need the first row for column headers
}

$html .= '</tr>
        </thead>
        <tbody>';

// Iterate through rows (excluding the first row) to populate table body
$dataRows = $worksheet->toArray();
array_shift($dataRows); // Remove the first row (column headers)
foreach ($dataRows as $dataRow) {
    $html .= '<tr>';
    foreach ($dataRow as $cellValue) {
        $html .= '<td>' . $cellValue . '</td>';
    }
    $html .= '</tr>';
}

$html .= '</tbody>
    </table>
</div>
</body>
</html>';

// Output the HTML content
echo $html;
