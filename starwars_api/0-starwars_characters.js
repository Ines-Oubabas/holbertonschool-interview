#!/usr/bin/node

const request = require('request');
const movieId = process.argv[2];

if (!movieId) {
  console.error('Usage: ./0-starwars_characters.js <movie_id>');
  process.exit(1);
}

const url = `https://swapi-api.hbtn.io/api/films/${movieId}/`;

request(url, (error, response, body) => {
  if (error) return;

  const characters = JSON.parse(body).characters;

  // Appel de chaque URL de personnage
  characters.forEach(characterUrl => {
    request(characterUrl, (err, res, body) => {
      if (!err) {
        console.log(JSON.parse(body).name);
      }
    });
  });
});
