import React from 'react';
import { createRoot } from 'react-dom/client';

const container = document.getElementById('app');
const root = createRoot(container);
// Write code here:
let myList = (
  <ul>
    <li>
      Hello
    </li>
  </ul>
);

root.render(myList);