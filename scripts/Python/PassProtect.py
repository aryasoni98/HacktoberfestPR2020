from PyPDF2 import PdfFileWriter , PdfFileReader

pdfwriter = PdfFileWriter()
pdf = PdfFileReader("your_file_name")
for page_num in range(pdf.numPages):
    pdfwriter.addPage(pdf.getPage(page_num))

passw = "your_password"
pdfwriter.encrypt(passw)
with open('ho.pdf', 'wb') as f:
    pdfwriter.write(f)
    f.close()
