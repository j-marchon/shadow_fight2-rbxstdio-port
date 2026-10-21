// MMDDDDFHOLG$$BGLKNLLGJHB @ RVA 0x33611E0

void MMDDDDFHOLG__BGLKNLLGJHB(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  JMDPBFOCHHP_o *pJVar3;
  POLAJNLKPAK_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a98 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a98 = 1;
    method = extraout_x1;
  }
  if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MMDDDDFHOLG_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
           MMDDDDFHOLG_TypeInfo->static_fields->HIHPADFEPFO;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if (bVar1) {
      return;
    }
    if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
             MMDDDDFHOLG_TypeInfo->static_fields->HIHPADFEPFO;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
       (__this = (pJVar3->fields).FMPOOGLPALN, __this != (POLAJNLKPAK_o *)0x0)) {
      value = POLAJNLKPAK__MGNCJHLPPFA(__this,KGLJICLJHEL,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_int>__Add
                  (pSVar2,(Il2CppObject *)KGLJICLJHEL,value,
                   Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

