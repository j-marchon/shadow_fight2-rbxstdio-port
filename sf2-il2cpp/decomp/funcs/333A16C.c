// JGIFDELCGOJ$$PPOKEOHAHFG @ RVA 0x333A16C

float JGIFDELCGOJ__PPOKEOHAHFG
                (System_Collections_Generic_List_JGIFDELCGOJ__o *JGHIJMJNJLE,
                System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04567965 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Item__);
    DAT_04567965 = 1;
  }
  if (JGHIJMJNJLE != (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
    if (0 < (JGHIJMJNJLE->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)JGHIJMJNJLE,index,
                            Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0343a23c;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pIVar2[1].klass,KGLJICLJHEL,(MethodInfo *)0x0);
        if (bVar1) {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)JGHIJMJNJLE,index,
                              Method_System_Collections_Generic_List<JGIFDELCGOJ>_get_Item__);
          if (pIVar2 != (Il2CppObject *)0x0) {
            return *(float *)&pIVar2[1].monitor;
          }
          goto LAB_0343a23c;
        }
        index = index + 1;
      } while (index < (JGHIJMJNJLE->fields)._size);
    }
    return 0.0;
  }
LAB_0343a23c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

