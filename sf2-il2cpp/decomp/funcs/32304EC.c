// GHOCIIJPJPP$$MAHFCKJGBPP @ RVA 0x32304EC

void GHOCIIJPJPP__MAHFCKJGBPP(GHOCIIJPJPP_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *x;
  System_Object_array *args;
  long lVar2;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_Transform_o *INPDGILCEBL;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04566fd6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10615);
    FUN_01bab630(&StringLiteral_22485);
    FUN_01bab630(&StringLiteral_22498);
    DAT_04566fd6 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).PKBMGDECOPP;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar4 = System_String__Replace
                       (pSVar4,StringLiteral_22498,StringLiteral_22485,(MethodInfo *)0x0);
    if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GPEHLCDLNDL_TypeInfo);
    }
    x = GPEHLCDLNDL__IFFHCBKGMKC(pSVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_03330704;
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
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10615,args,(MethodInfo *)0x0);
    }
    else {
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if ((x == (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) ||
         (INPDGILCEBL = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
         __this_00 == (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) goto LAB_03330704;
      Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                (__this_00,INPDGILCEBL,(UnityEngine_Vector2_o)(__this->fields).JJOBECCEMMI.fields,
                 (__this->fields).GPIEEJAPOCI,(MethodInfo *)0x0);
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_03330704:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

