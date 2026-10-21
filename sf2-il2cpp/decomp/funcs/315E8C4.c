// IDLLJHPDAHE$$EADLGLJJBGB @ RVA 0x315E8C4

IDLLJHPDAHE_GEBJFKLEAMM_o *
IDLLJHPDAHE__EADLGLJJBGB(IDLLJHPDAHE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *pSVar2;
  Il2CppObject *pIVar3;
  IDLLJHPDAHE_GEBJFKLEAMM_o *pIVar4;
  int index;
  
  if ((DAT_0456687a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Item__);
    DAT_0456687a = 1;
  }
  pSVar2 = (__this->fields).DOJGLDBNDPC;
  if (pSVar2 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (IDLLJHPDAHE_GEBJFKLEAMM_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Item__
                         );
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar3[1].klass,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).DOJGLDBNDPC;
        if (pSVar2 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
          pIVar4 = (IDLLJHPDAHE_GEBJFKLEAMM_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_get_Item__
                             );
          return pIVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).DOJGLDBNDPC;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

