#!/bin/bash
temp01=$(mktemp -t temp01.XXXXXX)
temp02=$(mktemp -t temp02.XXXXXX)
temp03=$(mktemp -t temp03.XXXXXX)
script_dir="$(dirname "$(readlink -f "$BATH_SOURCE")")" #脚本所在文件夹的目录路径

function tes01(){
while true;
do 
   dialog --colors --backtitle "\Z3(ง •̀_•́)ง 三级菜单：激动捏，要学ros2了" --colors --menu "\Z4\Zb任务一" 30 50 5 1 "安装ubuntu" 2 "打开小乌龟画2024" 0 "退出 O_O" 2>$temp03
   if [ $? -eq 1 ]; then
      break
   fi

   sel=$(cat $temp03)

   case $sel in
      1)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "不是哥们这也要看，难不成这是UNIX" 30 50;;
      2)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch base01 base102.launch.py \n ros2 run turtlesim turtle_teleop_key" 30 50
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch base01 base102.launch.py"
         gnome-terminal -- bash -c "ros2 run turtlesim turtle_teleop_key";;
      0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
   esac
done
}
function tes02(){
while true;
do 
   dialog --colors --backtitle "\Z3(ง •̀_•́)ง 三级菜单：激动捏，要用小乌龟画画了耶" --colors --menu "\Z4\Zb任务二" 30 50 5 1 "小乌龟画圆形" 2 "小乌龟画正方形" 0 "退出 O_O" 2>$temp03
   if [ $? -eq 1 ]; then
      break
   fi
   sel=$(cat $temp03)
   case $sel in
      1)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch base02 base201.launch.py" 30 50
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch base02 base201.launch.py";;

      2)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch base02 base202.launch.py" 30 50         
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch base02 base202.launch.py";;
      0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
   esac
done
}
function tes03(){
while true;
do 
   dialog --colors --backtitle "\Z3(ง •̀_•́)ง 三级菜单：激动捏，要学rviz了呢" --colors --menu "\Z4\Zb任务三" 30 50 5 1 "发布具有特定颜色的基础图形并在rviz2中订阅" 0 "退出 O_O" 2>$temp03
   if [ $? -eq 1 ]; then
      break
   fi
   sel=$(cat $temp03)
   case $sel in
      1)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch base03 play03.launch.py" 30 50
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch base03 play03.launch.py";;
      0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
   esac
done
}
function expa01(){
   while true;
do 
   dialog --colors --backtitle "\Z3(ง •̀_•́)ง 三级菜单：激动捏，要设计PID控制器了呢" --colors --menu "\Z4\Zb任务三" 30 50 5 1 "设计一个控制器：能订阅里程|完成运动函数|按要求返回原点|总而言之全鲨了" 0 "退出 O_O" 2>$temp03
   if [ $? -eq 1 ]; then
      break
   fi
   sel=$(cat $temp03)
   case $sel in
      1)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch expand01 palyexpand01.launch.py \nros2 run expand01 pub_meilei" 30 50
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch expand01 palyexpand01.launch.py"
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 run expand01 pub_meilei";;

      0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
   esac
done
}
function expa02(){
while true;
do 
   dialog --colors --backtitle "\Z3(ง •̀_•́)ง 三级菜单：激动捏，要当魔法师了吗？" --colors --menu "\Z4\Zb任务二" 30 50 5 1 "画个六芒星" 2 "买一送一 画个双六边形" 0 "退出 O_O" 2>$temp03
   if [ $? -eq 1 ]; then
      break
   fi
   sel=$(cat $temp03)
   case $sel in
      1)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch expand02 expand201.launch.py" 30 50
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch expand02 expand201.launch.py";;
      2)
         dialog --colors --backtitle "\Z3(¬､¬)我才不会说是因为我在搞前面一个时把角度弄错了又不舍得删导致的" --msgbox "我将执行这几行命令：\n ros2 launch expand02 expand201.launch.py" 30 50      
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch expand02 expandliubianxing.launch.py";;
      0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
   esac
done
}
function expa03(){
while true;
do 
   dialog --colors --backtitle "\Z3(ง •̀_•́)ง 三级菜单：激动捏，要学launch（？俺不是一直在用），要用URDF了" --colors --menu "\Z4\Zb任务三" 30 50 5 1 "用launch启动多个节点" 2 "编写URDF模型并用RVIZ显现出来" 3 "附加要求" 0 "退出 O_O" 2>$temp03
   if [ $? -eq 1 ]; then
      break
   fi
   sel=$(cat $temp03)
   case $sel in
      1)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch base01 expand301.launch.py" 30 50
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch base01 expand301.launch.py";;
      2)
         dialog --colors --backtitle "\Z3(ಡωಡ)" --msgbox "我将执行这几行命令：\n ros2 launch base03 player.launch.py" 30 50      
         gnome-terminal -- bash -c "source $script_dir/mojianhao/test/install/setup.bash;ros2 launch base03 player.launch.py";;
      3)
         dialog --colors --backtitle "\Z3(┴—┴(∂ω∂)  垃圾时间了" --msgbox "附加要求：\n 1.设计更加复杂的运动函数，多样的轨迹（在拓展1拓展2已体现）\n 2.设计PID控制器 \n 3.其他创意点（背景色、控制器、脚本、launch……） \n-----------------\n\n我想在前面的演示中已经体现了，就不再啰嗦了" 30 50;;
      0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
   esac
done
}

function testt(){
   # dialog --msgbox "施工中" 30 50
   while true;
   do 
      dialog --colors --backtitle "\Z3(づ￣ ³￣)づ 二级菜单：老师来查作业辣！" --colors --menu "\Z4\Zb任务总揽" 30 50 10 1 "任务一" 2 "任务二" 3 "任务三" 4 "拓展一" 5 "拓展二" 6 "拓展三" 0 "退出 O_O" 2>$temp02
      if [ $? -eq 1 ]; then
         break
      fi
      selec=$(cat $temp02)

      case $selec in
         1)
            tes01;; 
         2)
            tes02;;
         3)
            tes03;;
         4)
            expa01;;
         5)
            expa02;;
         6)
            expa03;;
         0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
      esac
   done
}
function repor(){
   relative="mojianhao/introspection.md"
   temp04=$(cat "$script_dir/$relative")
   while true;
   do 
      dialog --colors --backtitle "\Z3(づ￣ ³￣)づ 二级菜单：老师来查作业辣！" --colors --menu "\Z4\Zb该文件为md文件，打开方式：" 30 50 10 1 "直接查看" 2 "gedit" 3 "code" 4 "typora" 0 "退出 O_O" 2>$temp02
      if [ $? -eq 1 ]; then
         break
      fi
      selec=$(cat $temp02)

      case $selec in
         1)
            dialog --colors --backtitle "\Z3(╯°口°)╯？！技术总结，那是什么" --msgbox "$temp04" 30 50;;
         2)
            gedit $temp04;;
         3)
            code $temp04;;
         4)
            typora $temp04;;
         0)
            break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
      esac
   done
}
function show()
{
	local init_dir=$(realpath "$1")
	if ! cd "$init_dir"; then
		return $ERROR_CD
	fi
	local list=$(ls -aQ)	# -a 显示隐藏文件, -Q 每个文件左右两边添加双引号并转义特殊字符
	local old_IFS=$IFS
	IFS=$'\n'
	listarr=($list)	# 按换行符分割
	IFS=$old_IFS
	list=''
	for i in ${!listarr[*]}; do
		# 每一个文件, 添加修改日期和文件类型信息到右边
		list="$list ${listarr[$i]} \"$(eval "date -d @\$(stat ${listarr[$i]} -c %Y) '+%Y-%m-%d %T'")    $(eval "stat ${listarr[$i]} -c %F")\""
	done
	eval "dialog --ok-label '$ENTER_LABEL' --cancel-label '$DONE_LABEL' --title '$TITLE' --menu '${TIP}${init_dir}' 0 0 0 $list 2>'$tmpfile'"
	return 0
}
function next_action()
{
	local item=$1
	if [ "$item" == "" ]; then
		# 选择了当前文件夹, 直接输出当前路径到缓存文件
		echo "$(pwd)" >"$tmpfile"
		return 0
	fi
	local typ=$(ls -ld "$item" | cut -c 1)
	if [ "$typ" == "d" ]; then
		# 是目录, 进入
		browse_dir "$item"
	elif [ "$typ" == "l" ]; then
		# 是符号链接, 判断链接到的文件是目录还是其他
		local lnk=$(readlink "$item")
		if ! cd "$(dirname "$lnk")"; then
			return $ERROR_CD
		fi
		next_action "$(basename "$lnk")"
	else
		# 其他当普通文件处理, 文件名输出到缓存文件
		echo "$(realpath "$item")" >"$tmpfile"
	fi
}

function browse_dir()
{
	local status
	local init_dir=$1
	show "$init_dir"
	status=$?
	if [ $status -ne 0 ]; then
		return $status
	fi
	local item=$(cat "$tmpfile")
	next_action "$item"
}
function direc(){
   ERROR_CD=1		# 文件夹无法进入
   tmpfile=$(mktemp -t tmpfile.XXXXXX)
   ENTER_LABEL="选择文件/进入文件夹"
   DONE_LABEL="选择当前文件夹"
   TITLE="浏览"
   TIP="当前路径: "
   INIT_DIR=${1:-./}
   browse_dir "$INIT_DIR"
   status=$?
   if [ $status -ne 0 ]; then
	   exit $status
   fi
   result=$(cat "$tmpfile")
   rm -f "$tmpfile"
   echo "$result" >&2
}
function abou(){
   relative="temp/about.txt"
   temp04=$(cat "$script_dir/$relative")
   dialog --colors --backtitle "\Z3(ﾟДﾟ≡ﾟдﾟ)!?等等！用来『我』指的是脚本？！" --msgbox "$temp04" 30 50
}
# source $script_dir/mojianhao/test/install/setup.bash
# ros2 launch base01 base102.launch.py 
dialog --colors --backtitle "\Z3٩(๛ ˘ ³˘)۶  welcome!" --colors --title "\Z4\Zb\Zu波音俱乐部的技术考核" --msgbox "这是莫健豪的波音技术考核的运行脚本，请按照步骤依次进行  \n  谢谢配合!ㄟ(´･ᴗ･\`)ノ \n\n\n\n 小声BB：如果是学长学姐们来亲自体验说不定节目效果会好一点   " 30 50  
while true;
do 
   dialog --colors --backtitle "\Z3✧ ≖ ◡ ≖ * 一级菜单：让我康康你准备了些神马" --colors --menu "\Z4\Zb本次考核的总揽" 30 50 7 1 "技术任务" 2 "感想/技术总结报告" 3 "目录检索/查找" 4 "关于『我』" 0 "退出 O_O" 2>$temp01
   if [ $? -eq 1 ]; then
      break
   fi

   selection=$(cat $temp01)

   case $selection in
      1)
         testt ;; 
      2)
         repor ;;
      3)
         direc;;
      4)
         abou;;
      0)
         break;;
      *)
         dialog --colors --backtitle "\Z3（￣へ￣）" --msgbox "无效选择" 30 50;;
   esac
done
clear
trap `rm -f "$temp01" "$temp02" "$temp03"` EXIT
