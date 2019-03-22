/*How to build your SW projects in github?*/

1. //sign up an account in github.
2. $ git //check if you have install git in your linux.
3. $sudo apt-install git  //install git
4.$ cd ~/.ssh
	$ ssh-keygen -t ras -C “jingui_w@qq.com”
	// this will generate the ssh key in 2 files:  id_rsa  and id_rsa.pub
5. $ ls -a  # you will see the files you make.
6. $ cat id_rsa.pub   // open the file and copy the key and past to the git website, your account setting, SSH add.
7. $ ssh -T git@github.com // test if you have config success: ECHO Hi XXX! You've successfully authenticated, but GitHub does not provide shell access
8. git config –global user.name “Lucifer20130401”
9. git config -global user.email “jingui_w@qq.com”

/*create repository*/

10. //Create an  repository in your account in the github website. The repository name e.g : repository_test
11. $ mkdir ~/temp/github/repository_test   // create a directory with the same name as repository_test.
12.  $cd repository_test
13. $git init
14. $git remote add origin git@github.com:Lucifer20130401/repository_test.git
15. $ vim test.c   // write a .c file put anything you want into it. And save.
16. $ git add test.c
17. $ git commit -m  “this is a test”
18. $ git push origin master// if this not working,showing:"! [rejected]        master -> master (fetch first)" you need to use $git push -f origin master

/*create branch*/

19. $git branch devbranch  //  devbranch is the name you can set what ever you want
20. $git checkout devbranch // swich to the branch devbranch
21. $vim test.c   //modify the test.c file and save
22. $git add test.c
23 .$git commit -m “test a branch with modifying a file”
24. $git push origin devranch //publish to the github web.
25. $git checkout master// witch back the master
26. $git merge devbarnch // you can merge the branch to the master or not

/*about the push. You need to push every time when you change anything. For the master, you need to use :$git push origin in first, after that you can just use  $git push. For the branch, you need to always use $git push origin xxxx(branch name).
*/






