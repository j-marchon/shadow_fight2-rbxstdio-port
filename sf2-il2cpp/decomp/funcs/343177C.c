// LJAPFDJNGGA$$MAHFCKJGBPP @ RVA 0x343177C

void LJAPFDJNGGA__MAHFCKJGBPP(LJAPFDJNGGA_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *__this_00;
  System_Object_array *args;
  long lVar2;
  UnityEngine_GameObject_o *__this_01;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568171 & 1) == 0) {
    FUN_01bab630(&Method_BOFEMGGNODC_GIPCDAILIHJ<Button>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10607);
    DAT_04568171 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).EEACPKHFLAM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_UI_Selectable_o *)
              BOFEMGGNODC__GIPCDAILIHJ<object>
                        ((BOFEMGGNODC_o *)__this,pSVar4,Method_BOFEMGGNODC_GIPCDAILIHJ<Button>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
LAB_03531954:
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
    UnityEngine_Debug__LogErrorFormat(StringLiteral_10607,args,(MethodInfo *)0x0);
  }
  else {
    if ((__this->fields).PBKPFBNFIHH != false) {
      if ((__this_00 == (UnityEngine_UI_Selectable_o *)0x0) ||
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03531954;
      UnityEngine_GameObject__SetActive(__this_01,(__this->fields).NBGPKFHLCOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).IIBFFJPIBHG != false) {
      if (__this_00 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03531954;
      UnityEngine_UI_Selectable__set_interactable
                (__this_00,(__this->fields).DJAALDCHPOJ,(MethodInfo *)0x0);
    }
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

