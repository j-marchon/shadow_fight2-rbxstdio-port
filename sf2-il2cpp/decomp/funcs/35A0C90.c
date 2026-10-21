// Nekki.Utils.RaidBetaLogger$$OJMMKOAKHOI @ RVA 0x35A0C90

void Nekki_Utils_RaidBetaLogger__OJMMKOAKHOI
               (Nekki_Utils_RaidBetaLogger_o *__this,System_Byte_array *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *__this_00;
  System_Byte_array **ppSVar2;
  Nekki_Utils_RaidBetaLogger_o **ppNVar3;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *str1;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  
  if ((DAT_04568de6 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568de6 = 1;
  }
  __this_00 = (Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *)
              thunk_FUN_01bda818(Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_TypeInfo);
  Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF_o *)0x0) {
    ppSVar2 = &(__this_00->fields).data;
    *ppSVar2 = IMMNELPBGIF;
    thunk_FUN_01c20e04(ppSVar2,IMMNELPBGIF);
    ppNVar3 = &(__this_00->fields).__4__this;
    *ppNVar3 = __this;
    thunk_FUN_01c20e04(ppNVar3,__this);
    Nekki_Utils_RaidBetaLogger__FKLEGPIEJGA(__this,method_00);
    (__this->fields)._NOEPHKDKPNJ_k__BackingField = true;
    if (((((__this->fields).EPHJKJKOHCC < 1) && ((__this->fields).GNHCAHAGKAO < 1)) &&
        ((__this->fields).ICAEKHCKLCN < 1)) && ((__this->fields).IEEEIBLEDNC < 1)) {
      iVar1 = (__this->fields).NHEHAJAKGAD;
      (__this_00->fields).hasExceptions = 0 < iVar1;
      pMVar4 = extraout_x1;
      if (iVar1 < 1) goto LAB_036a0d68;
    }
    else {
      (__this_00->fields).hasExceptions = true;
    }
    __this_01 = (__this->fields)._exceptionDetectedRoot;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_00;
LAB_036a0d68:
      str1 = (MethodInfo *)Nekki_Utils_RaidBetaLogger__FAFMEEEGLAG(__this,pMVar4);
      pMVar4 = str1;
      if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
        pMVar4 = (MethodInfo *)thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo);
      }
      pSVar5 = Nekki_Utils_RaidBetaLogger__GLNBJGJPBFD(pMVar4);
      pMVar4 = (MethodInfo *)0x0;
      pSVar5 = System_String__Concat(pSVar5,(System_String_o *)str1,(MethodInfo *)0x0);
      (__this_00->fields).filePath = pSVar5;
      thunk_FUN_01c20e04();
      Nekki_Utils_RaidBetaLogger_BPOIDCPBLEF__EOJNOIJGNFF(__this_00,(MethodInfo *)0x0);
      Nekki_Utils_RaidBetaLogger__MEKGHBEBBFC(__this,(System_String_o *)str1,pMVar4);
      Nekki_Utils_RaidBetaLogger__ShowSendButton(__this,true,false,in_x3);
      Nekki_Utils_RaidBetaLogger__StartEnableReportButtonRoutine(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

