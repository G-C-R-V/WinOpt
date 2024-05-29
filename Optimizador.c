/*********************************************************************************************************** 
Programa para optimizar un sistema
Version: 0.2
***********************************************************************************************************/
#include<stdio.h>
#include<string.h> \\ gets, strcmp

int main(){

	int menu_inicio, menu_uno, menu_dos, menu_tres;
    int menu_firewall;
    int continuar = 1;
	
	

    while (continuar) {
    	//system("runas /user:gianb\admin cmd"); //inicia con permisos de administrador
    	//getchar();//espacio vacio
		//system("cls");// Limpiar la pantalla
        // Menu de inicio
        printf("\t\t##################################\n");
        printf("\t\t##### optimizador de windows #####\n");
        printf("\t\t##################################\n");
        printf("\t\tque desea realizar?\n");
        printf("\t\t1. Configuracion\n");
        printf("\t\t2. Optimizacion\n");
        printf("\t\t3. Seguridad\n");
        printf("\t\t4. Salir\n");
        printf("\t\tIngrese el numero de la opcion que desea: ");
        scanf("%d", &menu_inicio);

        // Control de Menus

        // Menu de inicio
        switch (menu_inicio) {
        	//system("cls");// Limpiar la pantalla
            // Opción 1 = 1. Configuraciones
            case 1:
            	getchar();
				system("cls");
				printf("\t\t##################################\n");
        		printf("\t\t##### Configuraciones #####\n");
        		printf("\t\t##################################\n");
                printf("\t\t\nseleccione una opcion:\n");
                printf("\t\t1. Ver configuracion IP\n");
                printf("\t\t2. Ver hardware\n");
                printf("\t\t3. Configurar Firewall\n");
                printf("\t\t4. Volver\n");
                printf("\t\t\nopcion: ");
                scanf("%d", &menu_uno);
                // 1_1 Submenu de "configuraciones"
                switch (menu_uno) {
                	//system("cls");// Limpiar la pantalla
                    // Opción 1_1_1 = ver configuracion IP
                    case 1:
                        printf("\n\aObteniendo informacion...\n");//el /a realiza un sonido de alerta
                        system("ipconfig");
                    break; // break IP

                    // Opción 1_1_2 = ver hardware
                    case 2:
                        printf("\nObteniendo informacion...\n");
                        system("Systeminfo");
                    break;

                    // Opción 1_1_3 = configuracion de Firewall
                    case 3:
                    	getchar();
						system("cls");
                        printf("\t\t\n   ##### Configurar de Firewall ///#####   \n");
                        printf("\t\t\nseleccione una opcion:\n");
                        printf("\t\t1. Habilitar Firewall\n");
                        printf("\t\t2. Deshabilitar Firewall\n");
                        printf("\t\t3. Volver\n");
                        printf("\t\topcion: ");
                        scanf("%d", &menu_firewall);
                        switch (menu_firewall) {
                        	system("cls");// Limpiar la pantalla
                            // Opción 1_2_1 = Habilitar Firewall
                            case 1:
                                printf("\t\t\nHabilitando firewall de windows...\n");
                                system("netsh advfirewall set allprofiles state on");
                            break;

                            // Opción 1_2_2 = Deshabilitar Firewall
                            case 2:
                                printf("\t\t\nDeshabilitando firewall de windows...\n");
                                system("netsh advfirewall set allprofiles state off");
                            break;
                                
                            // Opción 1_2_3 = Volver al menú de configuraciones
                            case 3:
                            	system("cls");// Limpiar la pantalla
                            break;
                            
                            default:
                                printf("\t\t\nOpcion no valida.\n");
                            break;
                        }
                        
                    break; // break a configuracion de firewall
                    
                    
                // Opción 1_4 = Volver al menú anterior
            	case 4:
                 system("cls");// Limpiar la pantalla
                break;
                
                default:
                        printf("\t\t\nOpcion no valida.\n");
                break;
                }
            break; // break a la opcion 1. Configuraciones
            
            
            
            
			// Opcion 2. Optimizacion
        	case 2:
        		getchar();
				system("cls");
            	// Menu de optimizacion
             	printf("\t\t\n  #### Optimizacion ####  \n");
                printf("\t\t\nseleccione una opcion:\n");
                printf("\t\t1. Limpiar archivos temporales\n");
                printf("\t\t2. Lanzar configuracion del sistema\n");
                printf("\t\t3. Limpiar cache DNS\n");
                printf("\t\t4. Reparar archivos corruptos\n");
                printf("\t\t5. Volver\n");
                printf("\t\t\nopcion: ");
                scanf("%d", &menu_dos);
            		// 2_0 Submenu de "optimizacion"
        			switch (menu_dos) {
        				system("cls");// Limpiar la pantalla
            			// Opción 2_1 = 1. limpiar archivos temporales
            			case 1:
            			printf("\n iniciando...\n");
                        system("del /s /q %temp%\*.*");
            			break;
            			
            			// Opcion 2_2 = 2, lanzar configuracion del sistema
            			case 2:
            			printf("\nLanzando...\n");
                        system("msconfig");
            			break;
            			
            			// Opcion 2_3 = 3, limpiar cache dns
            			case 3:
            			printf("\nLimpiando...\n");
                        system("ipconfig /flushdns");
            			break;
            			
            			// Opcion 2_4 = 4. reparar archivos corruptos
            			case 4:
            			printf("\nReparando...\n");
                        system("sfc /scannow");	
            			break;
            			// Opcion volver atras.
            			case 5:
            			system("cls");// Limpiar la pantalla
            			break;
            			
            			default:
            			printf("\nOpcion no valida.\n");
            			break;	
            		}
            			
            			
        	break; //break a la opcion 2. Optimizacion
            
            // Opcion 3. Seguridad
            case 3:
            	getchar();
				system("cls");
            	// Menu de seguridad
             	printf("\t\t\n  #### Seguridad ####  \n");
                printf("\t\t\nseleccione una opcion:\n");
                printf("\t\t1. Actualizar windows\n");
                printf("\t\t2. Auditoria de eventos\n");
                printf("\t\t3. Escaneo de malware\n");
                printf("\t\t4. Monitorear puertos\n");
                printf("\t\t5. Fortalecer seguridad\n");
                printf("\t\t6. Volver\n");
                printf("\nopcion: ");
                scanf("%d", &menu_tres);
                // 3_0 Submenu de "optimizacion"
        			switch (menu_tres) {
        				system("cls");// Limpiar la pantalla
            			// Opción 3_1 = 1. Actualizar windows
            			case 1: 
            			printf("\n\a Actualizacion comenzada... \n");
                        system("wuauclt /detectnow");
            			break;
            			
            			// Opción 3_2 = 2. Auditoria de eventos
            			case 2: 
            			printf("\n\a Auditoria comenzada... \n");
                        system("eventvwr");
            			break;
                		
                		// Opción 3_3 = 3. Escaneo de malware
            			case 3: 
            			printf("\n\a Escaneo comenzado... \n");
                        system("MpCmdRun -Scan -ScanType 3");
            			break;
            			
            			// Opción 3_4 = 4. Monitorear puertos
            			case 4: 
            			printf("\n\a Monitoreando puertos... \n");
                        system("netstat -ano");
            			break;
            			
            			// Opción 3_5 = 5. Fortalecer seguridad
            			case 5: 
            			printf("\n\a Aplicando plantilla de seguridad... \n");
                        system("secedit /configure /db reset /cfg \"C:\Windows\security\templates\setup security.inf" "/areas SECURITYPOLICY");
            			break;
                
                		// Opcion 3_6 = 6. Volver
                		case 6:
                		system("cls");// Limpiar la pantalla
                		break;
                		
                		default:
                		printf("\nOpcion no valida.\n");
            			break;
                
            }
                
            break; // break a la opcion 3. Rendimiento
            
            
            // Opción 4 = Salir
            case 4:
				
            	ExitProcess(0); // Cierra la ventana de la consola
            
            break;
            
            default:
                printf("\nOpcion no valida.\n");
            break;
            
        }
        //break;//break al bucle while del menu principal
    }
    
    

	
	return 0;
}

 
