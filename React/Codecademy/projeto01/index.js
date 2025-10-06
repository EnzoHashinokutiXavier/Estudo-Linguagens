import React from 'react';
import ReactDOM from 'react-dom/client';

import MyComponent from './App';
import Nome from './Funcao';

let visual = (
<h1>
  <MyComponent /><Nome />
</h1>
);

ReactDOM.createRoot(document.getElementById('app')).render(visual);