#!/bin/sh

# Add all modified and untracked files to the staging area
git add .

# Prompt the user for a commit message
echo "Enter a commit message: "
read commitMessage

# Commit the staged changes with the user-provided commit message
git commit -m "$commitMessage"

# Push the committed changes to the remote repository
git push
