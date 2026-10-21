// INPPNIKCPJG$$MAHFCKJGBPP @ RVA 0x3168224

void INPPNIKCPJG__MAHFCKJGBPP(INPPNIKCPJG_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *x;
  System_String_o *pSVar4;
  
  if ((DAT_045668cd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10614);
    FUN_01bab630(&StringLiteral_9941);
    FUN_01bab630(&StringLiteral_10613);
    FUN_01bab630(&StringLiteral_4436);
    FUN_01bab630(&StringLiteral_12544);
    DAT_045668cd = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  if (DAT_04566913 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566913 = '\x01';
  }
  x = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10613,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (__this->fields).LGPLIIOJODH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_9941,(MethodInfo *)0x0);
    if (bVar1) {
      INPPNIKCPJG__JMAEAOIJMGM(__this,method_00);
      return;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_4436,(MethodInfo *)0x0);
    if (bVar1) {
      INPPNIKCPJG__OAAPILFNIPL(__this,method_01);
      return;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_12544,(MethodInfo *)0x0);
    if (bVar1) {
      INPPNIKCPJG__BPDOIDBNPAD(__this,method_02);
      return;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar4;
    thunk_FUN_01c20e04(args->m_Items,pSVar4);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_10614,args,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

