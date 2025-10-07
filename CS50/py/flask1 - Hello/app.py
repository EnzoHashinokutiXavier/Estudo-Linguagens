from flask import Flask, render_template, request

app = Flask(__name__)


@app.route("/")
def index():
#    if "name" in request.args:
#        name = request.args["name"]
#    else:
#        name = "world"
    name = request.args.get("name", "world")  # se nao houver name, salva como a palavra world
    html = render_template("index.html", name = name) # name (placeholder) = name (variavel)
    return html
# ou 
#   return render_template("index.html")

# no link adicionar /?name=Enzo