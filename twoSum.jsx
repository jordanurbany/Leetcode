import react, { useState } from 'react';

const FizzBuzz = () => {
    const [inputValue, setInputValue] = useState('');
    const [result, setResult] = useState{}
}

    const handleChange = (e) => {
        const [name, value] = e.target;
        setInputValue(value);
    }

const handleSubmit = (e) => {
    e.preventDefault();
    const inputValue = parseInt(inputValue);
    if(Number.isNaN(inputValue)){
        alert('please enter a number');
    }else{
        handleFizzBuzz(inputValue);
    }

};
   const handleFizzBuzz = (number) =>{
    const fizzBuzzResult = [];
    for(let i = 1; i <= number; i++){
    if(i % 3 === 0 && i % 5 === 0){
        fizzBuzzResult.push('FizzBuzz');
    }else if(i % 3 === 0){
        fizzBuzzResult.push('Fizz');
    }else if(i % 5 === 0){
        fizzBuzzResult.push('Buzz');
    }else{
        fizzBuzzResult.push(i);
    }
    }
    setResult(fizzBuzzResult);


};
return (
    <div>
        <h1>fizzBuzz</h1>
        <button onClick={()=> handleFizzBuzz(15)}>run FizzBuzz

        </button>
        <ul>
            {result.map((item, index) =>(
                <li key={index}>{item}</li>
            ))}
        </ul>
    </div>
);

export default FizzBuzz;