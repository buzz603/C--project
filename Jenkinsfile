pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main',
                    url: 'https://github.com/buzz603/C--project.git'
            }
        }

        stage('Copy Binary') {
            steps {
                copyArtifacts(
                    projectName: 'DeploymentJob',
                    selector: lastSuccessful(),
                    filter: 'ABC.exe',
                    target: '.'
                )
            }
        }

        stage('Run Tests') {
            steps {
                sh '''
                    ls -l
                    ./ABC.exe < test_input.txt
                '''
            }
        }

        stage('Publish Results') {
            steps {
                archiveArtifacts artifacts: '**/*.log', allowEmptyArchive: true
            }
        }
    }
}
