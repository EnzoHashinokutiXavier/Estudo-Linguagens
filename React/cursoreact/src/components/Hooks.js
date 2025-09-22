import { useState, useEffect } from "react";

const Hooks = () => {
    let idade = 15
    const [novaIdade, setNovaIdade] = useState(18)

    const changeAge = () => {
        idade = 51;  // idade muda de valor mas nao altera na tela
    };

    const changeNewAge = () => {
        setNovaIdade(50)  // muda valor de 18 para 50
    }

    useEffect(() => {
        console.log("Testando")
    } )

    return(
        <div>
            <p>Idade: {idade}</p>
            <button onClick={changeAge}>Mudar idade</button>
            <p>Idade: {novaIdade}</p>
            <button onClick={changeNewAge}>Mudar nova idade</button>
        </div>
    )
}

export default Hooks