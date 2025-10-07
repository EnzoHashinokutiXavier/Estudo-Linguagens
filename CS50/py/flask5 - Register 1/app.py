from flask import Flask, render_template, request

app = Flask(__name__)

SPORTS = [  #caps para ser uma variavel global
    "Basketball",
    "Soccer",
    "Frisbee",
]

REGISTRANTS = {}


@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)


@app.route("/register", methods=["POST"])
def register():
#    if not request.form.get("name") or request.form.get("sport") not in SPORTS:
#        return render_template("failure.html")
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Missing name")
    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Missing sport")
    if sport not in SPORTS:
        return render_template("error.html", message="Invalid sport")

    REGISTRANTS[name] = sport #usando name como key e sport como value, erro se tiver mesmo nome

    return render_template("success.html")


@app.route("/registrants")
def registrants():
    return render_template("registrants.html", registrants=REGISTRANTS)