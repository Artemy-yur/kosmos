#include "vfs.h"

#include "../../libs/vfs.h"
#include "../../libs/types.h"
struct vfs_partition_info PARTITIONS[32] = {0};
unsigned int PARTITION_COUNT = 0;

// File Full Path: 0://file.txt
//                 PART_NUM://FILE

void* fat_funcs[] = {
       (int) vfs_mount,
       (int) vfs_read,
       (int) vfs_write,
       (int) vfs_readdir,
       (int) vfs_getpart

       NULL
};

// func vfs_mount
int vfs_mount(struct dev_info* device){
       //Заглушка
       return 0;
}

// func vfs_read
int vfs_read(int part_id, unsigned char file_name, unsigned char *dst){
       //Заглушка
       return 0;
}

// func vfs_write
int vfs_write(int part_id, unsigned char file_name, unsigned char src){
       //Заглушка
       return 0;
}

// func vfs_readdir
int vfs_readdir(unsigned char *dst){
       //Заглушка
       return 0;
}

// func vfs_getpart
int vfs_getpart(unsigned int *dst){
       //Заглушка
       return 0;
}
