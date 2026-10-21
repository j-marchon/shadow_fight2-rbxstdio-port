// KBFGKFAKGPP$$DHHAIGLEBHH @ RVA 0x32EFA28

void KBFGKFAKGPP__DHHAIGLEBHH
               (KBFGKFAKGPP_o *__this,System_String_o *KGLJICLJHEL,OLKKAIFGGAK_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04567669 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    DAT_04567669 = 1;
  }
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      if ((Il2CppClass *)BCKBBGCOMJD == pIVar3[2].klass) {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) break;
        bVar2 = System_String__op_Equality
                          (KGLJICLJHEL,(System_String_o *)((pIVar3[1].klass)->_1).castClass,
                           (MethodInfo *)0x0);
        if (bVar2) {
          *(undefined1 *)&pIVar3[3].klass = 1;
          return;
        }
      }
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).FIFCACFAFPH;
    } while (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

