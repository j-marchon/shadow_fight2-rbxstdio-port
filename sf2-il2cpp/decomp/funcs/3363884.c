// MMDDDDFHOLG$$FJOJIPKCKBK @ RVA 0x3363884

void MMDDDDFHOLG__FJOJIPKCKBK(MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  HJNEOLCKEMD_o *pHVar4;
  
  if ((DAT_04567a9b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_get_Item__
                );
    FUN_01bab630(&LMJFCEPILNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Remove__);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a9b = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar4 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar4 != (HJNEOLCKEMD_o *)0x0)) {
    if ((pHVar4->fields)._KPCCNJJEIAN_k__BackingField == false) {
      return;
    }
    bVar1 = (LMJFCEPILNI_TypeInfo->_2).naturalAligment;
    if (((pHVar4->klass->_2).naturalAligment < bVar1) ||
       ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)LMJFCEPILNI_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar4);
    }
    if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar3,(Il2CppObject *)(pHVar4->fields)._HFALHOCIDCH_k__BackingField,
                         Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_ContainsKey__
                        );
      if (!bVar2) {
        return;
      }
      if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar3,(Il2CppObject *)(pHVar4->fields)._HFALHOCIDCH_k__BackingField,
                              Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_get_Item__
                             ), __this != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__Remove
                  (__this,(Il2CppObject *)CPECAEHDDDB,
                   Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Remove__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

