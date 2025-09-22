const AnotherComponent = () => {
    const handleClick = ()=>{
        console.log("Clicou no botao")
    };


    return(
        <div>
            <p>Segundo componente</p>
            <button onClick={handleClick}>Evento de click</button>
            <hr/>
            <button onClick={() => console.log("teste")}>Evento no Elemento</button>
        </div>
    );
};

export default AnotherComponent;