from flask import Flask, render_template, request

app = Flask(__name__)


@app.route("/", methods=["GET"])
def index():
    html = render_template("index.html") 
    return html


@app.route("/greet", methods=["POST"])
def greet(): 
    name = request.form.get("name", "world")
    return render_template("greet.html", name=name)

# Flask suporta apenas o metodo get de padrao, deve adicionar o POST

# request.arg é para get
# request.form é para post