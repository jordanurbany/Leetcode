import React, { children, useState } from "react";  


const Button = ({onClick, children}) {
    return ( 
        <button onClick={onClick}>
        {children}
        </button>

    )
};
//how to build a simple counter
const Counter = () {
    const [count, setCount] = useState(0);
    return(
        <div>
        <h1>you clicked {count} times</h1>
        <button onClick={()=> setCount(count + 1)}>click me</button>
        </div>
    );
};
//form handling



const App = () => {

    <div>
        <Button onClick={()=> alert('clicked')}>Click Me!!!!</Button>
        <Counter />
    </div>


};
export default App