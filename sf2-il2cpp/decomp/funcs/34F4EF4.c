// OLKKAIFGGAK$$GAMIFCKJMKO @ RVA 0x34F4EF4

void OLKKAIFGGAK__GAMIFCKJMKO(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  Il2CppObject *pIVar1;
  int index;
  
  if ((DAT_045687cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    DAT_045687cd = 1;
  }
  __this_00 = (__this->fields).LJOAELGLDNP;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      pIVar1[2].klass = (Il2CppClass *)0x0;
      thunk_FUN_01c20e04(pIVar1 + 2,0);
      __this_00 = (__this->fields).LJOAELGLDNP;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

