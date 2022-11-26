import React from "react";
import { NavigationContainer } from "@react-navigation/native";
import { createStackNavigator } from "@react-navigation/stack";
import { createDrawerNavigator } from "@react-navigation/drawer";

import login from "./src/login";
import flexbox from "./src/flexbox";
import Home from "./src/Drawer/Home";
import Profile from "./src/Drawer/Profile";
import DrawerContent from "./src/Drawer/DrawerContent";
import Settings from "./src/Drawer/Settings";
import AboutUs from "./src/Drawer/AboutUs";

const Stack = createStackNavigator()
const Drawer=createDrawerNavigator()

export default function App(){
  return(
    <NavigationContainer>
      <MyStack/>
    </NavigationContainer>
  )
}



function MyStack(){
  return(
    <Stack.Navigator>
      <Stack.Screen
      name='login'
      component={login}/>

      <Stack.Screen
      name='flexbox'
      component={flexbox}/>
      <Stack.Screen
      name='Drawer'
      component={MyDrawer}/>
    </Stack.Navigator>
  )
}

function MyDrawer(){
  return(
    <Drawer.Navigator
    drawerContent={(props)=> <DrawerContent {...props}/>}>
      <Drawer.Screen
      name='Home'
      component={Home}/>

      <Drawer.Screen
      name='Profile'
      component={Profile}/>

      <Drawer.Screen
      name='AboutUs'
      component={AboutUs}/>

      <Drawer.Screen
      name='Settings'
      component={Settings}/>
      
    </Drawer.Navigator>
  )
}

