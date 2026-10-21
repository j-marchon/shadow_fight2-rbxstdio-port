// FEPPOONJCGI$$HALKOOLIBED @ RVA 0x30B1160

PANJAHAFBMD_o *
FEPPOONJCGI__HALKOOLIBED(FEPPOONJCGI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PANJAHAFBMD__o *pSVar2;
  Il2CppObject *pIVar3;
  PANJAHAFBMD_o *pPVar4;
  int index;
  
  if ((DAT_045661e0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
    DAT_045661e0 = 1;
  }
  pSVar2 = (__this->fields).MCDCFBOBJGI;
  if (pSVar2 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (PANJAHAFBMD_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality(pIVar3[1].monitor,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).MCDCFBOBJGI;
        if (pSVar2 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0) {
          pPVar4 = (PANJAHAFBMD_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
          return pPVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).MCDCFBOBJGI;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

