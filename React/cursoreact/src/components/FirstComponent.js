import AnotherComponent from "./AnotherComponent";

function FirstComponent(){
    const name = "Enzo";

    // HTML dentro do retun
    return(
        <div className="firstcomponent">
            {/*Comentario JSX */}
            <p>Primeiro Componente</p>
            {2 + 2}
            {/*as {} sao usadas para componentes javascript*/}
            <p>Nome : {name}</p>
            <AnotherComponent/>
        </div>
    );
};
// Comentario
export default FirstComponent