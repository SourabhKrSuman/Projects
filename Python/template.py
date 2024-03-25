import pandas as pd
from jinja2 import Template

# Load Excel file using Pandas
df = pd.read_excel('path/to/your/file.xlsx')

# Convert DataFrame to HTML table
html_table = df.to_html(index=False)

# Define HTML email template with Jinja2
template_str = """
<!DOCTYPE html>
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
    {{ html_table | safe }}
</div>
</body>
</html>
"""

# Create Jinja2 template object
template = Template(template_str)

# Render template with HTML table
html_content = template.render(html_table=html_table)

# Output or use 'html_content' for sending emails
print(html_content)
