// HOOAAGABMBL$$KGJLMGPGJEI @ RVA 0x30E8EEC

HOOAAGABMBL_o *
HOOAAGABMBL__KGJLMGPGJEI(HOOAAGABMBL_o *__this,PONNKDFAMFM_o *JGANIDFNOAF,MethodInfo *method)

{
  NMAHEBEALAB_o **ppNVar1;
  bool bVar2;
  HOOAAGABMBL_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  NMAHEBEALAB_o *pNVar4;
  
  if ((DAT_04566406 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_get_Item__);
    DAT_04566406 = 1;
  }
  if (JGANIDFNOAF == (PONNKDFAMFM_o *)0x0) {
    return (HOOAAGABMBL_o *)0x0;
  }
  __this_00 = (HOOAAGABMBL_o *)
              (*(__this->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                        (__this,(__this->klass->vtable)._7_FAOBHLCDKJI.method);
  if (__this_00 != (HOOAAGABMBL_o *)0x0) {
    (__this_00->fields)._FEDJEGJIGMA_k__BackingField = __this;
    thunk_FUN_01c20e04(&(__this_00->fields)._FEDJEGJIGMA_k__BackingField,__this);
    HOOAAGABMBL__HCEDMCPIPPE(__this_00,JGANIDFNOAF,method);
    ppNVar1 = &(__this_00->fields).LDIJKGOHMPG;
    (__this_00->fields).LDIJKGOHMPG = (NMAHEBEALAB_o *)0x0;
    thunk_FUN_01c20e04(ppNVar1,0);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             (__this->fields)._EIDNIKFIPMA_k__BackingField;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                        (pSVar3,(__this_00->fields)._HCHGENFJLHA_k__BackingField,
                         Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_ContainsKey__
                        );
      if (bVar2) {
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (__this->fields)._EIDNIKFIPMA_k__BackingField;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
        goto LAB_031e8fd8;
        pNVar4 = (NMAHEBEALAB_o *)
                 System_Collections_Generic_Dictionary<int,_object>__get_Item
                           (pSVar3,(__this_00->fields)._HCHGENFJLHA_k__BackingField,
                            Method_System_Collections_Generic_Dictionary<int,_NMAHEBEALAB>_get_Item__
                           );
        (__this_00->fields).LDIJKGOHMPG = pNVar4;
        thunk_FUN_01c20e04(ppNVar1,pNVar4);
      }
      return __this_00;
    }
  }
LAB_031e8fd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

