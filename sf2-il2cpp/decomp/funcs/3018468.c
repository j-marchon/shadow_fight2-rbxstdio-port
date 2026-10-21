// ECENNHNBAME.HJPFANEPGJF$$LIKCEDBLBCD @ RVA 0x3018468

KJFPGDFNFCL_o *
ECENNHNBAME_HJPFANEPGJF__LIKCEDBLBCD
          (ECENNHNBAME_HJPFANEPGJF_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_KJFPGDFNFCL__o *pSVar2;
  Il2CppObject *pIVar3;
  KJFPGDFNFCL_o *pKVar4;
  int index;
  
  if ((DAT_04565c04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
    DAT_04565c04 = 1;
  }
  pSVar2 = (__this->fields).AFFIHBMACFF;
  if (pSVar2 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (KJFPGDFNFCL_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&pIVar3[1].monitor
                         ,(MethodInfo *)0x0);
      if (iVar1 == ACCIHBHMFPN) {
        pSVar2 = (__this->fields).AFFIHBMACFF;
        if (pSVar2 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
          pKVar4 = (KJFPGDFNFCL_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
          return pKVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).AFFIHBMACFF;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

