# Repo Dummy — Latihan Git & Branching

Repo ini buat latihan alur kerja Git (branching, commit, push, PR) bareng tim sebelum dipraktekin ke repo proyek beneran. Bebas coba-coba di sini, gak akan ngerusak apa-apa.

## Setup Awal (sekali aja)

```bash
git config --global user.name "Nama Kamu"
git config --global user.email "email-kamu@example.com"
```

## Clone Repo

```bash
git clone https://github.com/Hani-hue/ngok.git
cd ngok
```

## Alur Kerja

### 1. Bikin branch baru
Jangan pernah commit langsung di `main`. Selalu bikin branch baru dulu (usahain namanya sesuai sama fitur yang bakalan kamu kerjain):

```bash
git checkout -b nama-branch-kamu
```

Pola penamaan branch:
- `feat/nama-fitur` — buat nambahin fitur baru, contoh: `feat/login-page`
- `fix/nama-bug` — buat benerin bug, contoh: `fix/navbar-overlap`
- `latihan/nama-kamu` — buat sesi latihan/eksperimen bebas, contoh: `latihan/hani`

### 2. Ubah file & commit (satu-satu, minimal 3 commit)

> ⚠️ Pastiin dulu kamu kerja di **folder hasil clone repo ini** (folder `ngok`), bukan folder lain. Cek dengan `git status` — kalau muncul error "not a git repository", berarti kamu salah folder.

Jangan pakai `git add .` — itu nge-add SEMUA file yang berubah sekaligus, gampang kebawa file yang bukan urusan kamu. Mending stage & commit satu file per satu file:

```bash
git add nama-file-1.js
git commit -m "feat: nambahin fungsi A di file 1"

git add nama-file-2.css
git commit -m "style: rapiin tampilan di file 2"

git add nama-file-3.html
git commit -m "feat: bikin struktur halaman baru"
```

Ulangi pola `add` → `commit` ini sampai minimal **3 commit** di branch kamu. Cek jumlahnya kapan aja pakai:

```bash
git log --oneline
```

**Via VS Code (lebih gampang):**
1. Edit/simpan file → muncul di panel **Source Control** bagian "Changes".
2. Hover ke nama filenya, klik ikon `+` kecil **di samping file itu aja** (jangan klik `+` di sebelah tulisan "Changes", itu stage semua sekaligus).
3. Ketik pesan commit di kolom "Message", tekan `Ctrl+Enter`.
4. Ulangi buat file berikutnya.

### 3. Push ke GitHub

```bash
git push origin nama-branch-kamu
```

### 4. Pull Request & Merge
1. Buka repo di GitHub.
2. Klik **Compare & pull request**.
3. Isi deskripsi PR, lalu **Create pull request**.
4. Kalau udah oke (review/self-check), klik **Merge pull request**.

### 5. Update branch lokal setelah merge

```bash
git checkout main
git pull origin main
```

## Tips Latihan Branching

- Coba bikin konflik merge sengaja (edit baris yang sama di 2 branch beda), terus latihan resolve konfliknya.
- Coba `git branch -d nama-branch-kamu` buat hapus branch lokal setelah selesai merge.
- Coba `git log --oneline --graph --all` buat lihat visual percabangan branch.
