// JJPNLEPEAFM$$OCJEIOMBDKP @ RVA 0x353117C

bool JJPNLEPEAFM__OCJEIOMBDKP(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  System_Action_object__o **ppSVar4;
  System_Action_object__o *IELDNEAAPBE;
  
  if ((DAT_04568a5f & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_JJPNLEPEAFM_<>c_AHKHKIMNEPA__);
    FUN_01bab630(&JJPNLEPEAFM_<>c_TypeInfo);
    DAT_04568a5f = 1;
  }
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
    if (iVar2 == 5) {
      JJPNLEPEAFM__NHCDPFPNBEF((MethodInfo *)0x5);
      bVar1 = true;
    }
    else {
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(JJPNLEPEAFM_<>c_TypeInfo);
      }
      IELDNEAAPBE = JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__25_0;
      if (IELDNEAAPBE == (System_Action_object__o *)0x0) {
        if ((JJPNLEPEAFM_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(JJPNLEPEAFM_<>c_TypeInfo);
        }
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar4 = &JJPNLEPEAFM_<>c_TypeInfo->static_fields->__9__25_0;
        *ppSVar4 = IELDNEAAPBE;
        thunk_FUN_01c20e04(ppSVar4,IELDNEAAPBE);
      }
      if (pNVar3 == (NDPMLPGANCI_o *)0x0) goto LAB_036312b4;
      bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                        (pNVar3,5,(Il2CppObject *)0x0,IELDNEAAPBE,false,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
    return bVar1;
  }
LAB_036312b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

