# Manejo-de-dispositivos-loT
Autores:

Brayan Israel Lira Gutiérrez bi.liragutierrez@ugto.mx

Ponce Ruiz Angel Mario am.ponceruiz@ugto.mx

Jorge Andrés Jiménez Salazar ja.jimenez.salazar@ugto.mx

Eduardo Ramírez de la Fuente e.ramirezdelafuente@ugto.mx

Profesor: Huetzin Aaron Pérez Olivas

Descripción del proyecto:

El proyecto consiste en conectar un  microcontrolador ESP32 con la nube de Arduino para mandar información de un sensor MPU-6050 (giroscopio). Generando 2 gadgets de monitorio de la información, uno que indique la magnitud de la aceleración y otro que genere una gráfica en tiempo real del cambio de coordenadas del giroscopio. Además se añade un led al sistema y un gadget para controlar su encendido o apagado. 

Introducción:

La nube de Arduino (Arduino IoT Cloud) es una plataforma en línea diseñada para facilitar la creación de proyectos de Internet de las Cosas (IoT). Con esta herramienta, los usuarios pueden gestionar, programar y monitorear dispositivos de forma remota, todo desde un entorno sencillo y accesible. Está especialmente orientada a integrar los dispositivos Arduino (como MKR WiFi 1010, Nano 33 IoT, y placas compatibles como ESP32) con otros servicios en la nube y aplicaciones web.

Objetivo y Funcionalidad

El propósito principal de la nube de Arduino es permitir a desarrolladores, estudiantes y entusiastas del IoT conectar sus dispositivos fácilmente a internet. A través de una interfaz intuitiva, los usuarios pueden recopilar datos de sensores, controlar dispositivos en tiempo real y automatizar procesos. Además, facilita la integración con servicios externos como IFTTT, permitiendo crear automatizaciones y notificaciones inteligentes.

Beneficios y Aplicaciones Principales

Programación en línea: La plataforma permite escribir y cargar código desde la nube sin necesidad de instalar software adicional en la computadora.

Monitoreo remoto: Los usuarios pueden revisar datos de sensores y controlar dispositivos a través de un dashboard personalizado.

Seguridad: La comunicación entre dispositivos y la nube es cifrada mediante TLS, garantizando integridad y privacidad.

Compatibilidad multiplataforma: Admite placas Arduino y microcontroladores populares como ESP8266 y ESP32.

Integración con servicios externos: Permite la conexión con aplicaciones como Google Assistant o Alexa mediante plataformas como IFTTT para ejecutar comandos automáticamente.

La nube de Arduino se ha convertido en una herramienta poderosa tanto para proyectos personales como para implementaciones industriales, ofreciendo una solución escalable que se adapta a las necesidades de cada usuario. 

Sensor MPU6050

El MPU6050 es un sensor avanzado que combina un acelerómetro y un giroscopio de 3 ejes en un solo módulo, lo que permite medir tanto la aceleración lineal como la rotación angular de un objeto en el espacio. Además, cuenta con un procesador de movimiento digital (DMP) incorporado, lo que facilita la captura de datos precisos y la fusión de sensores para aplicaciones que requieren control de movimiento y orientación.

Aplicaciones del sensor

Estabilización de drones y robótica: Ayuda a mantener el equilibrio y la orientación.

Controles de juegos y realidad virtual: Permite el seguimiento de movimientos precisos.

Podómetros y wearables: Monitorea la actividad física detectando cambios en aceleración.

Vehículos autónomos: Utilizado en sistemas de navegación inercial para estimar la posición en ausencia de GPS.
