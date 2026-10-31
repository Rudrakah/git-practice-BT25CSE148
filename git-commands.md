```markdown
# Git Commands Record

| Command | Purpose |
|---|---|
| git init | Initialize repository |
| git status | Check repository status |
| git add . | Stage all files |
| git commit -m | Save changes |
| git branch | List branches |
| git checkout -b | Create a new branch |
| git merge | Merge branches |
| git log | View commit history |
| git push | Upload changes |
| git pull | Download latest changes |
| git clone | Clone repository |
## Merge Conflict Practice

### Conflict Description

A merge conflict occurred because the README.md file was modified differently in both the main and exercise-01 branches.

### Resolution

1. Switched to the exercise-01 branch.
2. Merged the main branch.
3. Identified conflicting changes in README.md.
4. Removed Git conflict markers.
5. Combined both descriptions into one final statement.
6. Staged and committed the resolved file.

### Commands Used

* git checkout main
* git checkout exercise-01
* git merge main
* git add README.md
* git commit -m "Resolve README merge conflict"
* git push origin exercise-01
