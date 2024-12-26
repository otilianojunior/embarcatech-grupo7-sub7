# EmbarcaTech - Grupo 7 | Subgrupo 7

Repositório destinado às atividades e desafios do programa **EmbarcaTech**, incluindo projetos, práticas e soluções desenvolvidas durante o curso.

---

## 📂 Como clonar o projeto

Para clonar este repositório e começar a utilizá-lo, siga os passos abaixo:

1. Abra o terminal ou sua interface de linha de comando.  
2. Execute o comando abaixo para clonar o repositório:

   ```bash
   git clone https://github.com/otilianojunior/embarcatech-grupo7-sub7.git
   ```

3. Acesse o diretório clonado:

   ```bash
   cd embarcatech-grupo7-sub7
   ```

4. Mude para a branch `developer` para começar a trabalhar no desenvolvimento:

   ```bash
   git checkout developer
   ```

---

## 🤝 Como contribuir com o projeto

1. **Crie uma nova branch a partir da branch `developer`:**  
   Escolha um nome descritivo para sua branch, que indique a funcionalidade ou correção em que você trabalhará (exemplo: `feature/nova-funcionalidade`).

   ```bash
   git checkout -b nome-da-sua-branch
   ```

2. **Faça suas alterações no código.**

3. **Adicione e registre as mudanças com o seguinte comando:**

   ```bash
   git add .
   git commit -m "Descrição clara e objetiva das mudanças realizadas"
   ```

4. **Envie sua branch para o repositório remoto:**

   ```bash
   git push origin nome-da-sua-branch
   ```

5. **Abra um Pull Request (PR):**  
   No GitHub, envie seu PR para a branch `developer`.

6. **Aguarde a revisão:**  
   O líder do grupo ou outro colaborador revisará o PR, podendo aprová-lo ou solicitar ajustes.

---

## 📑 Estrutura do Projeto

### Estrutura de Pastas

- **`src/`**: Contém os arquivos de implementação (.c). Aqui ficam os códigos principais de cada módulo do projeto, como conversores e funcionalidades específicas.
- **`include/`**: Contém os arquivos de cabeçalho (.h). Esses arquivos são usados para definir as interfaces dos módulos e funções que são utilizadas no código principal.
  
  **Exemplo de estrutura:**
  ```
  src/
      conversor_bits.c
      conversor_potencia_eletrica.c
      conversor_temperatura.c
      conversor_unidade_comprimento.c
  include/
      conversor_bits.h
      conversor_potencia_eletrica.h
      conversor_temperatura.h
      conversor_unidade_comprimento.h
  ```

- **`output/`**: Contém os arquivos compilados (como o `main.exe`) gerados ao compilar o código.

---

## 🚀 Como Executar o Projeto

1. Compile o projeto usando o seguinte comando no terminal:

   ```bash
   gcc -Wall -Wextra -g3 -I"include" src/*.c -o output/main.exe
   ```

2. Para executar o projeto, basta rodar o arquivo compilado:

   - No terminal, execute:

   ```bash
   ./output/main.exe
   ```

   Ou se estiver usando o Windows, pode clicar diretamente no arquivo `main.exe` na pasta `output`.

---

## 🛠️ Boas práticas para desenvolvimento

1. Mantenha seus commits claros e organizados, com mensagens que descrevam as mudanças realizadas.
2. Evite enviar arquivos compilados ou desnecessários, como `.exe` ou outros artefatos gerados automaticamente.
3. Certifique-se de testar suas alterações localmente antes de enviar o PR.
4. Sempre atualize sua branch com as últimas mudanças da branch `developer` para evitar conflitos:

   ```bash
   git pull origin developer
   ```

---

## 📞 Contato

Para dúvidas ou sugestões, entre em contato com os membros do **Grupo 7 | Subgrupo 7**.

---

Esse README foi estruturado para facilitar a colaboração e manter boas práticas no desenvolvimento do projeto. Se precisar de algum ajuste ou melhoria adicional, é só avisar! 😊
