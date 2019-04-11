# reason-react-workshop

## initial setup

Prereqs are git, npm/yarn, editor with https://github.com/jaredly/reason-language-server

## Run Project

```sh
npm install
npm start
# in another tab
yarn run server
# open localhost:8000
```

To use a port other than 8000 set the `PORT` environment variable (`PORT=8080 npm run server`).

## Build for Production

```sh
npm run clean
npm run build
npm run webpack:production
```

This will replace the development artifact `build/Index.js` for an optimized version as well as copy `src/index.html` into `build/`. You can then deploy the contents of the `build` directory (`index.html` and `Index.js`).
