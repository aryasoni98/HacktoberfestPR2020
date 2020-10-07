const people = {
    Name: "Viviane Ramos",
    Age: 34,
    Languages: ["Javascript", "Typescript"]
}


console.log(`Hi my name is ${people.Name}, 
have ${people.Age} years old 
and have habilities in ${(people.Languages).join(', ')}`)

