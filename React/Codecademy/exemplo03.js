import { animals } from './animals';
import  React from "react";
import { createRoot } from 'react-dom/client';

const container = document.getElementById('app');
const root = createRoot(container);

// Handles displaying a random fact when an animal is clicked
function displayFact(e){
  let name = e.target.alt;
  let numero = Math.floor(Math.random() * animals[name].facts.length);
  if (animals[name]) {
  let fact = animals[name].facts[numero];
  document.getElementById('fact').innerHTML = fact;
}
}

let title  =  "";

const showBackground = true;

const background = <img 
className="background"
alt="ocean"
src='/images/ocean.jpg'
/>;

let images = [];
for (let animal in animals){
  images.push(
    <img
    key={animal}
    className='animal'
    alt={animal}
    src={animals[animal].image}
    aria-label={animal}
    role="button"
    onClick={displayFact}
    />
  );
};


const animalFacts = (
<div>
<h1>
  {title || 'Click an animal for a fun fact'}
</h1>
{showBackground && background} 
  <div className='animals'>
    {images} 
  </div>
  <p id = 'fact'></p>
</div>
);

root.render(animalFacts);



