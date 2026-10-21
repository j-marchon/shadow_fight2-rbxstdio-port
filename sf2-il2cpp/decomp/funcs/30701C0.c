// EEGDOGKBLNG$$IOCIGCHAANI @ RVA 0x30701C0

void EEGDOGKBLNG__IOCIGCHAANI
               (EEGDOGKBLNG_o *__this,System_String_o *PMACBPAMPJA,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  ALOGBMGGBEP_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  
  if ((DAT_04565f5d & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&StringLiteral_20954);
    FUN_01bab630(&StringLiteral_10312);
    FUN_01bab630(&StringLiteral_235);
    DAT_04565f5d = 1;
  }
  pSVar2 = System_String__Concat
                     (StringLiteral_10312,PMACBPAMPJA,StringLiteral_235,CJNHFNHJHPE,
                      (MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KPPDBKGGEGA;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                        Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    bVar1 = System_String__op_Inequality(pSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).KPPDBKGGEGA
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar3,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)CJNHFNHJHPE,
                 Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
      __this_00 = (ALOGBMGGBEP_o *)thunk_FUN_01bda818(ALOGBMGGBEP_TypeInfo);
      ALOGBMGGBEP___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (ALOGBMGGBEP_o *)0x0) {
        ALOGBMGGBEP__CNILLEFMALH(__this_00,PMACBPAMPJA,(MethodInfo *)0x0);
        ALOGBMGGBEP__BKDOEIHJFAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20954,
                     (Google_Protobuf_IMessage_o *)__this_00,(System_Action_KEFHDOHHHML__o *)0x0,0.0
                     ,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

