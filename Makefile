all:
	@ls -la
	@echo "This is the default target."
push:
	@echo "Pushing changes to the repository..."
	@git add .
	@git commit -m "Update Makefile"
	@git push origin main
clean:
	@echo "Cleaning up..."
	@rm -rf *.o
	@rm -rf *.tmp
	@echo "Cleanup complete."
pull:
	@echo "Pulling latest changes from the repository..."
	@git pull origin main
update:
	@echo "Updating the repository..."
	@git fetch --all
	@git reset --hard origin/main
	@echo "Update complete."
check:
	@echo "Checking the status of the repository..."
	@git status
	@echo "Repository is up to date."
.PHONY: all push clean