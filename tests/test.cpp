// Copyright 2020 Your Name <your_email>

#include <gtest/gtest.h>

#include <sstream>
#include <string>
#include <students_from_json.hpp>

TEST(Example, EmptyTest) {
  std::string json = R"({
    "items": [
    {
      "name": "Ivanov Petr",
          "group": "1",
          "avg": "4.25",
          "debt": null
    },
    {
      "name": "Sidorov Ivan",
          "group": 31,
          "avg": 4,
          "debt": "C++"
    },
    {
      "name": "Pertov Nikita",
          "group": "IU8-31",
          "avg": 3.33,
          "debt": [
      "C++",
          "Linux",
          "Network"
      ]
    }
    ],
    "_meta": {
      "count": 3
    }
  })";
  std::stringstream jsonStream;
  jsonStream << json;

  std::vector<Student> students = ParseJSON(jsonStream);
  Print(students, std::cout);
  EXPECT_TRUE(true);
}
