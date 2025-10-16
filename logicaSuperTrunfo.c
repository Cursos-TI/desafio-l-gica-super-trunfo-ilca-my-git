

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h> 

int main() {

// Começo do programa 

//Variaveis - carta 1

char estado;
char codigo[2];
char cidade[50];
unsigned long int populacao;
float area;
float pib;
int pontos_turisticos;
float densidade;
float pib_per_capita;
float super_poder;

//Variaveis - carta 2 

char estado2;
char codigo2[2];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade2;
float pib_per_capita2;
float super_poder2;

// Variaveis de comparação

int comparacao_populacao;
int comparacao_area;
int comparacao_pib;
int comparacao_pontos_turisticos;
int comparacao_densidade;
int comparacao_pib_per_capita;
int comparacao_super_poder;

// Variaveis do menu 1
int opcao1;

// Variaveis do menu 2
int opcao2;

//variaveis soma
float soma1;
float soma2;
int compare_soma_pop_e_area; 
int compare_soma_pop_e_pib;
int compare_soma_pop_e_pontos; 
int compare_soma_pop_e_densi;
int compare_soma_pop_e_pib_capita;
int compare_soma_pop_e_sp;
int compare_soma_area_pib;
int compare_soma_area_e_pontos;
int compare_soma_area_e_densidade
int compare_soma_area_e_pib_capita;
int compare_soma_area_e_sp;
int compare_soma_pib_e_pontos;
int compare_soma_pib_e_densidade; 
int compare_soma_pib_e_pib_capita; 
int compare_soma_pib_e_sp;
int compare_soma_pontos_e_densidade;
int compare_soma_pontos_e_pib_capita;
int compare_soma_pontos_e_sp;
int compare_soma_densidade_e_pib_capita;
int compare_soma_densidade_e_sp;
int compare_soma_pib_capita_e_sp; 


//Entrada de dados - carta 1

printf("Carta 1\n");

printf("Digite o Estado:\n");
scanf("%c", &estado);

printf("Digite o codigo:\n");
scanf("%s", &codigo);

printf("Digite a cidade:\n");
scanf("%s", &cidade);

printf("Digite a população:\n");
scanf("%lu", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos_turisticos);

// Calculo Densidade populacional - Cartas 1  

//Carta 1 - densidade 
densidade = (float)populacao/area; 

// Calculo PIB per capita - Cartas 1 

// Carta 1 - PIB per capita 
pib_per_capita = pib/(float)populacao;

// Calculo Super Poder - cartas 1 

// Carta 1 - super poder
super_poder = (float)populacao + area + pib + (float)pontos_turisticos + pib_per_capita + (1/densidade);


// Entrada de dados - carta 2

printf("Carta 2 \n");

printf("Digite o Estado:\n");
scanf("%c", &estado2);

printf("Digite o codigo:\n");
scanf("%s", &codigo2);

printf("Digite a cidade:\n");
scanf("%s", &cidade2);

printf("Digite a população:\n");
scanf("%lu", &populacao2);

printf("Digite a área:\n");
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos_turisticos2);

// Calculo Densidade populacional - Cartas 2

//Carta 2 - densidade 
densidade2 = (float)populacao2/area2; 

// Calculo PIB per capita - Cartas 2

// Carta 2 - PIB per capita 
pib_per_capita2 = pib2/(float)populacao2;

// Calculo Super Poder - cartas 2

// Carta 2 - super poder
super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1/densidade2);

// Menu 1 - Escolha do 1° atributo 

printf("Primeiro menu - Super trunfo");
printf("Selecione o primeiro atributo que você deseja comparar");
printf("1. População");
printf("2. Área");
printf("3. PIB");
printf("4. Pontos turísticos");
printf("5. Densidade demográfica");
printf("6. PIB per capita");
printf("7. Super poder");
printf("Digite o número da sua opção:")
scanf("%d", opcao1);

switch (opcao1){
    case 1:
        printf("Você escolheu comparar: População");
            // comparacao 
                comparacao_populacao = populacao > populacao2;
                    // saída comparacao 
                        if(comparacao_populacao == 1){
                            printf("População - Carta 1 venceu (%d) \n", comparacao_populacao);
                            } else if(comparacao_populacao == 0) {
                                printf("População - Carta 2 venceu (%d) \n", comparacao_populacao);
                                }else{
                                    printf("Empate.");
                                    }
                                        break;
                                            
                                                case 2:
                                                    printf("Você escolheu comparar: Área");
                                                        // comparacao 
                                                            comparacao_area = area > area2; 
                                                                // saída comparacao 
                                                                    if(comparacao_area == 1){
                                                                        printf("Área - Carta 1 venceu (%d) \n", comparacao_area);
                                                                        } else if (comparacao_area == 0){
                                                                            printf("Área - Carta 2 venceu (%d) \n", comparacao_area);
                                                                            }else {
                                                                                printf("Empate.");
                                                                                }
                                                                                    break;
                                                                                        
                                                                                            case 3:
                                                                                                printf("Você escolheu comparar: PIB");
                                                                                                    // comparacao 
                                                                                                        comparacao_pib = pib > pib2;
                                                                                                            // saída comparacao 
                                                                                                                if (comparacao_pib == 1){
                                                                                                                    printf("PIB - Carta 1 venceu (%d) \n", comparacao_pib);
                                                                                                                    } else if (comparacao_pib == 0){
                                                                                                                        printf("PIB - Carta 2 venceu (%d) \n", comparacao_pib);
                                                                                                                        }else {
                                                                                                                            printf("Empate.");
                                                                                                                            }
                                                                                                                                break;
                                                                                                                                    
                                                                                                                                        case 4:
                                                                                                                                            printf("Você escolheu comparar: Pontos turísticos");
                                                                                                                                                // comparacao 
                                                                                                                                                    comparacao_pontos_turisticos = pontos_turisticos > pontos_turisticos2;
                                                                                                                                                        // saída comparacao 
                                                                                                                                                            if (comparacao_pontos_turisticos == 1){
                                                                                                                                                                printf("Quantidade de pontos turísticos - Carta 1 venceu (%d) \n", comparacao_pontos_turisticos);
                                                                                                                                                                } else if (comparacao_pontos_turisticos == 0){
                                                                                                                                                                    printf("Quantidade de pontos turísticos - Carta 2 venceu (%d) \n", comparacao_pontos_turisticos);
                                                                                                                                                                    } else{
                                                                                                                                                                        printf("Empate.");
                                                                                                                                                                        }
                                                                                                                                                                            break;
                                                                                                                                                                                
                                                                                                                                                                                    case 5:
                                                                                                                                                                                        printf("Você escolheu comparar: Densidade demográfica");
                                                                                                                                                                                            // comparacao 
                                                                                                                                                                                                comparacao_densidade = densidade < densidade2;
                                                                                                                                                                                                    // saída comparacao 
                                                                                                                                                                                                        if(comparacao_densidade == 1){
                                                                                                                                                                                                            printf("Densidade populacional - Carta 1 venceu (%d) \n", comparacao_densidade)
                                                                                                                                                                                                            } else if(comparacao_densidade == 0){
                                                                                                                                                                                                                printf("Densidade Populacional - Carta 2 venceu (%d) \n", comparacao_densidade);
                                                                                                                                                                                                                } else{
                                                                                                                                                                                                                    printf("Empate.");
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                        break;
                                                                                                                                                                                                                            
                                                                                                                                                                                                                                case 6:
                                                                                                                                                                                                                                    printf("Você escolheu comparar: PIB per capita");
                                                                                                                                                                                                                                        // comparacao 
                                                                                                                                                                                                                                            comparacao_pib_per_capita = pib_per_capita > pib_per_capita2;
                                                                                                                                                                                                                                                // saída comparacao 
                                                                                                                                                                                                                                                    if(comparacao_pib_per_capita == 1){
                                                                                                                                                                                                                                                        printf("PIB per Capita - Carta 1 venceu (%d) \n", comparacao_pib_per_capita);
                                                                                                                                                                                                                                                        } else if(comparacao_pib_per_capita == 0){
                                                                                                                                                                                                                                                            printf("PIB per Capita - Carta 2 venceu (%d) \n", comparacao_pib_per_capita);
                                                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                                                                printf("Empate.");
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                        case 7:
                                                                                                                                                                                                                                                                            printf("Você escolheu comparar: Super poder");
                                                                                                                                                                                                                                                                                // comparacao 
                                                                                                                                                                                                                                                                                    comparacao_super_poder = super_poder > super_poder2;
                                                                                                                                                                                                                                                                                        // saída comparacao 
                                                                                                                                                                                                                                                                                            if (comparacao_super_poder == 1){
                                                                                                                                                                                                                                                                                                printf("Super Poder - Carta 1 venceu (%d) \n", comparacao_super_poder);
                                                                                                                                                                                                                                                                                                } else if (comparacao_super_poder == 0) {
                                                                                                                                                                                                                                                                                                    printf("Super poder - Carta 2 venceu (%d) \n", comparacao_super_poder);
                                                                                                                                                                                                                                                                                                    } else{
                                                                                                                                                                                                                                                                                                        printf("Empate.");
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                    default:
                                                                                                                                                                                                                                                                                                                        printf("Opção inválida. Retorne e digite uma opção válida."); 
                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                            }


// Menu 2
printf("Segundo menu - Super trunfo");
printf("Selecione o segundo atributo que você deseja comparar");
printf("1. População");
printf("2. Área");
printf("3. PIB");
printf("4. Pontos turísticos");
printf("5. Densidade demográfica");
printf("6. PIB per capita");
printf("7. Super poder");
printf("Digite o número da sua opção:")
scanf("%d", opcao2);

// Tratamento de escolha de mesmo atributo

if(opcao2 == opcao1){
    printf("Selecione um atributo diferente.");
    } else{
        
        switch (opcao2){
            case 1:
                printf("Você escolheu comparar: População");
                    // comparacao 
                        comparacao_populacao = populacao > populacao2;
                            // saída comparacao 
                                if(comparacao_populacao == 1){
                                    printf("População - Carta 1 venceu (%d) \n", comparacao_populacao);
                                    } else if(comparacao_populacao == 0) {
                                        printf("População - Carta 2 venceu (%d) \n", comparacao_populacao);
                                        }else{
                                            printf("Empate.");
                                            }
                                                break;
                                                    
                                                        case 2:
                                                            printf("Você escolheu comparar: Área");
                                                                // comparacao 
                                                                    comparacao_area = area > area2; 
                                                                        // saída comparacao 
                                                                            if(comparacao_area == 1){
                                                                                printf("Área - Carta 1 venceu (%d) \n", comparacao_area);
                                                                                } else if (comparacao_area == 0){
                                                                                    printf("Área - Carta 2 venceu (%d) \n", comparacao_area);
                                                                                    }else {
                                                                                        printf("Empate.");
                                                                                        }
                                                                                            break;
                                                                                                
                                                                                                    case 3:
                                                                                                        printf("Você escolheu comparar: PIB");
                                                                                                            // comparacao 
                                                                                                                comparacao_pib = pib > pib2;
                                                                                                                    // saída comparacao 
                                                                                                                        if (comparacao_pib == 1){
                                                                                                                            printf("PIB - Carta 1 venceu (%d) \n", comparacao_pib);
                                                                                                                            } else if (comparacao_pib == 0){
                                                                                                                                printf("PIB - Carta 2 venceu (%d) \n", comparacao_pib);
                                                                                                                                }else {
                                                                                                                                    printf("Empate.");
                                                                                                                                    }
                                                                                                                                        break;
                                                                                                                                            
                                                                                                                                                case 4:
                                                                                                                                                    printf("Você escolheu comparar: Pontos turísticos");
                                                                                                                                                        // comparacao 
                                                                                                                                                            comparacao_pontos_turisticos = pontos_turisticos > pontos_turisticos2;
                                                                                                                                                                // saída comparacao 
                                                                                                                                                                    if (comparacao_pontos_turisticos == 1){
                                                                                                                                                                        printf("Quantidade de pontos turísticos - Carta 1 venceu (%d) \n", comparacao_pontos_turisticos);
                                                                                                                                                                        } else if (comparacao_pontos_turisticos == 0){
                                                                                                                                                                            printf("Quantidade de pontos turísticos - Carta 2 venceu (%d) \n", comparacao_pontos_turisticos);
                                                                                                                                                                            } else{
                                                                                                                                                                                printf("Empate.");
                                                                                                                                                                                }
                                                                                                                                                                                    break;
                                                                                                                                                                                        
                                                                                                                                                                                            case 5:
                                                                                                                                                                                                printf("Você escolheu comparar: Densidade demográfica");
                                                                                                                                                                                                    // comparacao 
                                                                                                                                                                                                        comparacao_densidade = densidade < densidade2;
                                                                                                                                                                                                            // saída comparacao 
                                                                                                                                                                                                                if(comparacao_densidade == 1){
                                                                                                                                                                                                                    printf("Densidade populacional - Carta 1 venceu (%d) \n", comparacao_densidade)
                                                                                                                                                                                                                    } else if(comparacao_densidade == 0){
                                                                                                                                                                                                                        printf("Densidade Populacional - Carta 2 venceu (%d) \n", comparacao_densidade);
                                                                                                                                                                                                                        } else{
                                                                                                                                                                                                                            printf("Empate.");
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                break;
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                        case 6:
                                                                                                                                                                                                                                            printf("Você escolheu comparar: PIB per capita");
                                                                                                                                                                                                                                                // comparacao 
                                                                                                                                                                                                                                                    comparacao_pib_per_capita = pib_per_capita > pib_per_capita2;
                                                                                                                                                                                                                                                        // saída comparacao 
                                                                                                                                                                                                                                                            if(comparacao_pib_per_capita == 1){
                                                                                                                                                                                                                                                                printf("PIB per Capita - Carta 1 venceu (%d) \n", comparacao_pib_per_capita);
                                                                                                                                                                                                                                                                } else if(comparacao_pib_per_capita == 0){
                                                                                                                                                                                                                                                                    printf("PIB per Capita - Carta 2 venceu (%d) \n", comparacao_pib_per_capita);
                                                                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                                                                        printf("Empate.");
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                                                                                case 7:
                                                                                                                                                                                                                                                                                    printf("Você escolheu comparar: Super poder");
                                                                                                                                                                                                                                                                                        // comparacao 
                                                                                                                                                                                                                                                                                            comparacao_super_poder = super_poder > super_poder2;
                                                                                                                                                                                                                                                                                                // saída comparacao 
                                                                                                                                                                                                                                                                                                    if (comparacao_super_poder == 1){
                                                                                                                                                                                                                                                                                                        printf("Super Poder - Carta 1 venceu (%d) \n", comparacao_super_poder);
                                                                                                                                                                                                                                                                                                        } else if (comparacao_super_poder == 0) {
                                                                                                                                                                                                                                                                                                            printf("Super poder - Carta 2 venceu (%d) \n", comparacao_super_poder);
                                                                                                                                                                                                                                                                                                            } else{
                                                                                                                                                                                                                                                                                                                printf("Empate.");
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                            default:
                                                                                                                                                                                                                                                                                                                                printf("Opção inválida. Retorne e digite uma opção válida."); 
                                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                                    printf("Cartas - Super Trunfo");

                                                                                                                                                                                                                                                                                                                                    //Saída de dados - carta 1

                                                                                                                                                                                                                                                                                                                                    printf("Carta 1\n");

                                                                                                                                                                                                                                                                                                                                    printf("Estado: %c \n", estado);

                                                                                                                                                                                                                                                                                                                                    printf("Código: %s \n", codigo);

                                                                                                                                                                                                                                                                                                                                    printf("Cidade: %s \n", cidade);

                                                                                                                                                                                                                                                                                                                                    printf("População: %lu \n", populacao);

                                                                                                                                                                                                                                                                                                                                    printf("Área: %.2f \n", area);

                                                                                                                                                                                                                                                                                                                                    printf("PIB: %.2f \n", pib);

                                                                                                                                                                                                                                                                                                                                    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

                                                                                                                                                                                                                                                                                                                                    printf("Densidade populacional: %.2f \n", densidade);

                                                                                                                                                                                                                                                                                                                                    printf("PIB per capita: %.2f \n", pib_per_capita);

                                                                                                                                                                                                                                                                                                                                    printf("Super poder: %.2f \n", super_poder);

                                                                                                                                                                                                                                                                                                                                    // Saída de dados - carta 2 

                                                                                                                                                                                                                                                                                                                                    printf("Carta 2\n");

                                                                                                                                                                                                                                                                                                                                    printf("Estado: %c \n", estado2);

                                                                                                                                                                                                                                                                                                                                    printf("Código: %s \n", codigo2);

                                                                                                                                                                                                                                                                                                                                    printf("Cidade: %s \n", cidade2);

                                                                                                                                                                                                                                                                                                                                    printf("População: %lu \n", populacao2);

                                                                                                                                                                                                                                                                                                                                    printf("Área: %.2f \n", area2);

                                                                                                                                                                                                                                                                                                                                    printf("PIB: %.2f \n", pib2);

                                                                                                                                                                                                                                                                                                                                    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

                                                                                                                                                                                                                                                                                                                                    printf("Densidade populacional: %.2f \n", densidade2);

                                                                                                                                                                                                                                                                                                                                    printf("PIB per capita: %.2f \n", pib_per_capita2);

                                                                                                                                                                                                                                                                                                                                    printf("Super poder: %.2f \n", super_poder2);

                                                                                                                                                                                                                                                                                                                                    }
    

// Soma dos atributos - definição do vencedor
