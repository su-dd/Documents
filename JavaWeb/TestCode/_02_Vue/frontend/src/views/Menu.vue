<template>
  <el-row class="tac">
    <el-col :span="24">
      <el-menu default-active="2" class="el-menu-vertical-demo" @open="handleOpen" @close="handleClose">
        <el-submenu index="1">
          <template slot="title">
            <router-link to="/">
              <i class="el-icon-location"></i>
              <span>Home</span>
            </router-link>
          </template>
          <el-menu-item-group>
            <template slot="title">分组一</template>
            <el-menu-item index="1-1">选项1</el-menu-item>
            <el-menu-item index="1-2">选项2</el-menu-item>
          </el-menu-item-group>
        </el-submenu>

        <el-menu-item index="2">
          <router-link to="/about">
            <i class="el-icon-setting"></i>
            <span>About</span>
          </router-link>
        </el-menu-item>
      </el-menu>
    </el-col>
  </el-row>
</template>
<script>
  export default {
    name: 'Menu',
    methods: {
      handleOpen(key, keyPath) {
        console.log(key, keyPath);
      },
      handleClose(key, keyPath) {
        console.log(key, keyPath);
      }
    }
  }
</script>