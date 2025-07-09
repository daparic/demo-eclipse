#!/bin/sh
#

# sqp_e5ff0fa2598079193aaa98eaf8fda0408ce9fcc5
# sonar-scanner -Dsonar.projectKey=demo -Dsonar.sources=. -Dsonar.host.url=http://localhost:9000 -Dsonar.token=sqp_e5ff0fa2598079193aaa98eaf8fda0408ce9fcc5

docker run -d --name sonarqube -e SONAR_ES_BOOTSTRAP_CHECKS_DISABLE=true -p 9000:9000 sonarqube:latest
