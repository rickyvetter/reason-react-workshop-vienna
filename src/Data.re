type image = {
  url: string,
  attribution: string,
  attributionUrl: option(string),
};

type coordinates = {
  lat: float,
  lng: float,
};

type city = {
  id: string,
  name: string,
  coordinates,
  image,
};

let cities = [
  {
    id: "34a8c685-6088-4eed-bd58-3769b1a408ba",
    name: "Vienna",
    image: {
      url: "/assets/vienna.jpg",
      attribution: "CC BY 3.0: Of the individual pictures, Gryffindor (Wikipedia), of the panorama, Roland Geider",
      attributionUrl: Some("https://commons.wikimedia.org/wiki/File:Stephansdom_Vienna_July_2008_(27)-Stephansdom_Vienna_July_2008_(31).jpg"),
    },
    coordinates: {
      lat: 48.2, 
      lng: 16.366667,
    },
  },
  {
    id: "675a1180-62cc-4518-b272-a0e1beeaf868",
    name: "New York",
    image: {
      url: "/assets/new-york.jpg",
      attribution: "CC BY-SA 4.0: Siddarth Hanumanthu",
      attributionUrl: Some("https://commons.wikimedia.org/wiki/File:1650_Grand_Concourse.jpg"),
    },
    coordinates: {
      lat: 40.7127, 
      lng: -74.0059,
    },
  },
  {
    id: "873da18c-4eb4-4cd1-8edf-d0bcc5776127",
    name: "Denver",
    image: {
      url: "/assets/denver.jpg",
      attribution: "Public Domain",
      attributionUrl: Some("https://commons.wikimedia.org/wiki/File:Denver_from_Highlands.jpg"),
    },
    coordinates: {
      lat: 39.76185,
      lng: -104.881105,
    },
  },
];
