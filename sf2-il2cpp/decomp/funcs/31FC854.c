// NLPJLHOEAOE$$IPFBEDIBGIJ @ RVA 0x31FC854

void NLPJLHOEAOE__IPFBEDIBGIJ
               (System_String_o *IMMNELPBGIF,bool FNIPKMJCLNB,bool LBPNEGFMOPG,MethodInfo *method)

{
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  System_Xml_XmlDocument_o *method_00;
  System_String_o *pSVar1;
  NLPJLHOEAOE_c *pNVar2;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)LBPNEGFMOPG;
  if ((DAT_04566df1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8490);
    FUN_01bab630(&StringLiteral_14630);
    DAT_04566df1 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NLPJLHOEAOE__FFHCFFBHJHM(true,true,method_01);
  if (FNIPKMJCLNB) {
    EKEMDOEAFHP = GIAMPEGMNHE__KGEKFIHAHLJ(IMMNELPBGIF,true,false,(MethodInfo *)0x0);
    method_00 = EKEMDOEAFHP;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    pSVar1 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)method_00);
    if (EKEMDOEAFHP == (System_Xml_XmlDocument_o *)0x0) {
      pSVar1 = System_String__Concat(StringLiteral_8490,pSVar1,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar1,(MethodInfo *)0x0);
  }
  else {
    pNVar2 = NLPJLHOEAOE_TypeInfo;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
    }
    pSVar1 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)pNVar2);
    NEHNBJKKABI__GPNPELOHJCJ(pSVar1,IMMNELPBGIF,(MethodInfo *)0x0);
  }
  pNVar2 = NLPJLHOEAOE_TypeInfo;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)pNVar2);
  pSVar1 = System_String__Concat(StringLiteral_14630,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (LBPNEGFMOPG) {
    Nekki_SF2_Core_ApplicationController__Quit((MethodInfo *)0x0);
    return;
  }
  return;
}

