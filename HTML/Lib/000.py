import csv

#file paths
csv_file = "/home/palash/Documents/Experiment1/HTML/Lib/sample.csv"
html_file = "/home/palash/Documents/Experiment1/HTML/Lib/001.html"

#open the csv and HTML files
with open(csv_file, "r") as csvfile ,  open(html_file, "w") as htmlfile:
    reader = csv.reader(csvfile)
    htmlfile.write("<table border='1'>\n")

#write out html file
    for i, row in enumerate(reader):
        htmlfile.write("  <tr>\n")
        for cell in row:
            if i == 0:
                htmlfile.write(f"    <th>{cell}</th>\n")
            else:
                htmlfile.write(f"    <td>{cell}</td>\n")
        htmlfile.write("    </tr>\n")
    htmlfile.write("</table>")
print(f"HTML table written to {html_file}")

