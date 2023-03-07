pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                dir('build') {
                    sh 'cmake ..'
                    sh 'make'
                }
            }
        }
        stage('Test') {
            steps {
                dir('build') {
                    sh './exercise_1'
                }
            }
        }
    }
}
