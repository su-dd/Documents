// The Vue build version to load with the `import` command
// (runtime-only or standalone) has been set in webpack.base.conf with an alias.
import Vue from 'vue'
import App from './App'
import router from './router'

Vue.config.productionTip = false

/* eslint-disable no-new */
// 每个Vue实例都需要关联一段Html模板，Vue会基于此模板进行视图渲染；可以通过el属性来指定。
new Vue({
  el: '#app', // 每个Vue实例都需要关联一段Html模板，Vue会基于此模板进行视图渲染；可以通过el属性来指定。
  router,
  components: { App },
  template: '<App/>'
})
