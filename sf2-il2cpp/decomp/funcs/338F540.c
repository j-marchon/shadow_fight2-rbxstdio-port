// CLDHEOAJIKF$$MAHFCKJGBPP @ RVA 0x338F540

void CLDHEOAJIKF__MAHFCKJGBPP(CLDHEOAJIKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  HJNDPNIMBBG_o *__this_00;
  System_String_o *str1;
  System_String_o **ppSVar3;
  
  if ((DAT_04567c10 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    FUN_01bab630(&StringLiteral_17862);
    FUN_01bab630(&StringLiteral_320);
    FUN_01bab630(&StringLiteral_15013);
    FUN_01bab630(&StringLiteral_11881);
    DAT_04567c10 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields).LAHMLCJODCF;
  pSVar2 = NHBBOEHHEKG__DELGACJHIMA(*ppSVar3,(MethodInfo *)0x0);
  pSVar2 = CMEBCBKGFFL__NFBODKMCAMM(pSVar2,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)
      UnityEngine_ResourcesAndBundles__Load<object>
                (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = System_String__Concat(StringLiteral_15013,*ppSVar3,StringLiteral_320,(MethodInfo *)0x0)
    ;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    ppSVar3 = (System_String_o **)&StringLiteral_17862;
  }
  str1 = *ppSVar3;
  pSVar2 = System_String__Concat(StringLiteral_11881,str1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7e == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7e = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
  if (__this_00 != (HJNDPNIMBBG_o *)0x0) {
    HJNDPNIMBBG__LAPNHIJGIGH(__this_00,str1,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

