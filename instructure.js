const express = require('express');
const { execFile } = require('child_process');
const app = express();
const port = 3000;

app.use(express.json());

app.post('/run-triangle', (req, res) => {
    const shape = req.body.shape || 1; // 1~4
    const size = req.body.size || 5;

    execFile('./c_project.c', [shape.toString(), size.toString()], (error, stdout, stderr) => {
        if(error) return res.status(500).send(stderr || error.message);
        res.send(stdout);
    });
});

app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}`);
});