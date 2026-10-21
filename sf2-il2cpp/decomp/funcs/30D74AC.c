// BMKPIFBPBMF$$LGFOINEBFCJ @ RVA 0x30D74AC

BMKPIFBPBMF_PAELLCEFPAH_o *
BMKPIFBPBMF__LGFOINEBFCJ(BMKPIFBPBMF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BMKPIFBPBMF_PAELLCEFPAH__o *pSVar2;
  Il2CppObject *pIVar3;
  BMKPIFBPBMF_PAELLCEFPAH_o *pBVar4;
  int index;
  
  if ((DAT_04566338 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BMKPIFBPBMF_PAELLCEFPAH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BMKPIFBPBMF_PAELLCEFPAH>_get_Item__);
    DAT_04566338 = 1;
  }
  pSVar2 = (__this->fields).AKKFNCFAPDO;
  if (pSVar2 != (System_Collections_Generic_List_BMKPIFBPBMF_PAELLCEFPAH__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (BMKPIFBPBMF_PAELLCEFPAH_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<BMKPIFBPBMF_PAELLCEFPAH>_get_Item__
                         );
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar3[1].klass,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar2 = (__this->fields).AKKFNCFAPDO;
        if (pSVar2 != (System_Collections_Generic_List_BMKPIFBPBMF_PAELLCEFPAH__o *)0x0) {
          pBVar4 = (BMKPIFBPBMF_PAELLCEFPAH_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<BMKPIFBPBMF_PAELLCEFPAH>_get_Item__
                             );
          return pBVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).AKKFNCFAPDO;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_BMKPIFBPBMF_PAELLCEFPAH__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

