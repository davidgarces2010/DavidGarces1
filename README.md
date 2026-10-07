<div align="center">

# 🗄️💡 AutoComponent

### El estante inteligente que enciende una luz justo donde está tu componente

**Proyecto escolar de tecnología · Taller de Electricidad y Electrónica**

![Estado](https://img.shields.io/badge/estado-prototipo%20funcional-2ea44f)
![Hardware](https://img.shields.io/badge/hardware-ESP32%20%2B%20LEDs-0F5E4D)
![Costo](https://img.shields.io/badge/uso-gratuito%20y%20sin%20fines%20de%20lucro-FFC93C)

[🌐 **Ver el sitio interactivo**](https://TU-USUARIO.github.io/AutoComponent/) · [📖 **Lección de costos**](docs/costos-y-lecciones.md) · [🔧 **Código ESP32**](firmware/esp32_leds/esp32_leds.ino)

</div>

---

## 🧩 ¿Qué problema resolvemos?

En el **Taller de Electricidad y Electrónica** del colegio hay muchos componentes (resistencias, sensores, módulos...), pero **no se usan tanto como podrían**: cuesta saber qué hay, cuántos quedan y dónde están guardados. Lo que no se encuentra, no se usa.

## 💡 Nuestra solución

**AutoComponent** es un **estante inteligente** que guarda los componentes y **te ayuda a ubicarlos**: buscas el componente desde una página web, y el estante **enciende el LED del cajón correcto**.

> 🔍 *Buscas "resistencia 220 Ω" en tu celular → se enciende la luz del cajón donde está.*

## ⚙️ ¿Cómo funciona? (en 4 pasos)

| Paso | ¿Qué pasa? | Tecnología |
|:---:|---|---|
| 1️⃣ | Abres la plataforma web desde cualquier celular con internet | Aplicación web creada con **Vento IA** |
| 2️⃣ | Buscas un componente (o escaneas su código QR) | **85 códigos QR** con información de cada componente |
| 3️⃣ | La app envía la señal de búsqueda a la placa | Comunicación web ↔ **ESP32** |
| 4️⃣ | La ESP32 enciende el LED del cajón correcto | Programación de la **tira de LEDs** |

```text
📱 Celular ──internet──▶ 🌐 App web ──señal──▶ 🧠 ESP32 ──datos──▶ 💡 Tira de LEDs ──▶ 🗄️ Cajón
```

## 🏆 Logros hasta ahora

- ✅ **Conectamos la ESP32 con la aplicación web.**
- ✅ **Encendemos LEDs desde la app** en el prototipo.
- ✅ **Creamos 85 códigos QR** llenos de información de los componentes.
- ✅ Contamos con **aplicación, algoritmo, dispositivo y sistema automatizado** funcionando en prototipo.

### ⭐ Evidencia estrella: el Prototipo #1

Un **estante a menor escala con 25 LEDs** que se encienden cuando se envía una señal de búsqueda desde la web.

![Prototipo 1](docs/assets/fotos/prototipo-1.jpg)
*(Agrega aquí la foto: guárdala como `docs/assets/fotos/prototipo-1.jpg`)*

## 📦 Evidencias disponibles

| Evidencia | Dónde |
|---|---|
| 📷 Fotografías y prototipos sucesivos | `docs/assets/fotos/` |
| 🎥 Videos de funcionamiento | *(enlace aquí)* |
| 💻 Código fuente | `firmware/` y la app web |
| 🧪 Pruebas con usuarios y resultados experimentales | `docs/` |

## 🧱 El reto de los costos (y lo que aprendimos)

Un estante real de madera con **85 cajones** era demasiado costoso. Probamos **cartón y material reciclable**: funcionó para experimentar, pero **se daña con facilidad**. Aún no lo resolvemos del todo porque **todavía no construimos el prototipo final**.

> 🎓 **Lección clave:** planificar y manejar los costos **desde el principio** del proyecto.

👉 Lee la historia completa: [**docs/costos-y-lecciones.md**](docs/costos-y-lecciones.md)

## 🗂️ Estructura del repositorio

```text
AutoComponent/
├── README.md                    ← Estás aquí
├── firmware/
│   └── esp32_leds/
│       └── esp32_leds.ino       ← Código base ESP32 + tira de LEDs
└── docs/                        ← Sitio de GitHub Pages
    ├── index.html               ← Página interactiva
    ├── costos-y-lecciones.md    ← Reto de costos y resiliencia
    └── assets/
        ├── fotos/               ← Fotos del prototipo
        └── qr/                  ← Muestras de los códigos QR
```

## 🚀 Activa el sitio en GitHub Pages

1. Sube todo el repositorio a GitHub.
2. Ve a **Settings → Pages**.
3. En *Source* elige **Deploy from a branch**, rama `main`, carpeta **`/docs`**.
4. Espera un minuto: tu sitio quedará en `https://TU-USUARIO.github.io/AutoComponent/`.

## 🤝 ¿Quieres participar?

Es un proyecto **gratuito y sin fines de lucro**, hecho para el colegio. Puedes:

- ⭐ Darle una estrella al repositorio.
- 💬 Abrir un *Issue* con ideas o mejoras.
- 🧪 Probar la plataforma y contarnos tu experiencia.

## 👨‍💻 Autores

**David Leonardo Garces Vesga** y **Julian David Hernandez Quintero**

---
<div align="center">Hecho con 💙 para el Taller de Electricidad y Electrónica</div>
