pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                withCredentials([string(credentialsId: 'Jenkins-Pecobe', variable: 'GITHUB_TOKEN')]) {
                    sh 'echo $GITHUB_TOKEN > token.txt'
                    sh 'cat token.txt'
                }
                dir('build') {
                    sh 'cmake ..'
                    sh 'make'
                }
            }
        }
        stage('Test') {
            steps {
                dir('build') {
                    sh './exercises_1'
                }
            }
        }
    }
}
