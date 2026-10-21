// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer.LAICHCLEKGJ$$MoveNext @ RVA 0x3312684

bool Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_LAICHCLEKGJ__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_LAICHCLEKGJ_o *__this,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  HOOAAGABMBL_o *__this_00;
  LabelButton_o *pLVar5;
  System_String_o *pSVar6;
  ACHLOMELAJE_o *__this_01;
  int64_t iVar7;
  int64_t iVar8;
  System_Collections_Generic_List_object__o *__this_02;
  Il2CppObject *pIVar9;
  EEGDOGKBLNG_o *__this_03;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar10;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this_04;
  Il2CppClass *BJEEDJEKAMF;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_o CJNHFNHJHPE;
  
  if ((DAT_045677bc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17848);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_10045);
    FUN_01bab630(&StringLiteral_17849);
    DAT_045677bc = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    goto LAB_03412a04;
  }
  __this_04 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_04 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0) goto LAB_03412a50;
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBNEPJEGAHN(__this_04,method);
  if (__this_00 == (HOOAAGABMBL_o *)0x0) goto LAB_03412a04;
  bVar3 = System_String__op_Equality
                    ((__this_04->fields).HBJEOMFBMMC,StringLiteral_8722,(MethodInfo *)0x0);
  if ((bVar3) ||
     (bVar3 = System_String__op_Equality
                        ((__this_04->fields).HBJEOMFBMMC,StringLiteral_10045,(MethodInfo *)0x0),
     bVar3)) {
    pLVar5 = (__this_04->fields)._consumableButton;
    if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03412a50;
    pSVar6 = LabelButton__get_Alias(pLVar5,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar6,StringLiteral_17848,(MethodInfo *)0x0);
    if (bVar3) {
LAB_034127f4:
      pLVar5 = (__this_04->fields)._consumableButton;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03412a50;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 1.0;
    }
    else {
      pLVar5 = (__this_04->fields)._consumableButton;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03412a50;
      pSVar6 = LabelButton__get_Alias(pLVar5,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar6,StringLiteral_17849,(MethodInfo *)0x0);
      if (bVar3) goto LAB_034127f4;
      pLVar5 = (__this_04->fields)._consumableButton;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_01 == (ACHLOMELAJE_o *)0x0) goto LAB_03412a50;
      iVar7 = ACHLOMELAJE__HEHFNBKGJLP(__this_01,(MethodInfo *)0x0);
      iVar8 = HOOAAGABMBL__MNKCHHFDEGH(__this_00,(MethodInfo *)0x0);
      if (iVar7 < iVar8) {
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar15 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
        fVar14 = UVar15.fields.a;
        fVar13 = UVar15.fields.b;
        fVar12 = UVar15.fields.g;
        fVar11 = UVar15.fields.r;
      }
      else {
        fVar14 = 1.0;
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
      }
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03412a50;
    }
    UVar15.fields.g = fVar12;
    UVar15.fields.r = fVar11;
    UVar15.fields.a = fVar14;
    UVar15.fields.b = fVar13;
    LabelButton__set_Color(pLVar5,UVar15,(MethodInfo *)0x0);
    bVar2 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    if ((__this_00[1].klass == (HOOAAGABMBL_c *)0x0) ||
       (__this_02 = (System_Collections_Generic_List_object__o *)
                    ((__this_00[1].klass)->_1).implementedInterfaces,
       __this_02 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03412a50;
    if ((__this_02->fields)._size == 0) goto LAB_03412a04;
    pIVar9 = System_Collections_Generic_List<object>__get_Item
                       (__this_02,0,
                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__)
    ;
    if (pIVar9 == (Il2CppObject *)0x0) {
LAB_03412a50:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    BJEEDJEKAMF = pIVar9[1].klass;
    iVar1 = *(int *)&pIVar9[1].monitor;
    pLVar5 = (__this_04->fields)._specialButton;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_03 == (EEGDOGKBLNG_o *)0x0) goto LAB_03412a50;
    iVar4 = EEGDOGKBLNG__APFFEAJBAEK(__this_03,(System_String_o *)BJEEDJEKAMF,(MethodInfo *)0x0);
    if (iVar4 < iVar1) {
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UVar15 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
      fVar14 = UVar15.fields.a;
      fVar13 = UVar15.fields.b;
      fVar12 = UVar15.fields.g;
      fVar11 = UVar15.fields.r;
    }
    else {
      fVar14 = 1.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
    }
    if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03412a50;
  }
  else {
    pLVar5 = (__this_04->fields)._consumableButton;
    if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03412a50;
    LabelButton__set_Color
              (pLVar5,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    pLVar5 = (__this_04->fields)._specialButton;
    if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03412a50;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 1.0;
  }
  CJNHFNHJHPE.fields.g = fVar12;
  CJNHFNHJHPE.fields.r = fVar11;
  CJNHFNHJHPE.fields.a = fVar14;
  CJNHFNHJHPE.fields.b = fVar13;
  LabelButton__set_Color(pLVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
LAB_03412a04:
  if ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppIVar10 = &(__this->fields).__2__current;
  *ppIVar10 = (Il2CppObject *)
              Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->static_fields->NBCLELLNCLA;
  thunk_FUN_01c20e04(ppIVar10);
  (__this->fields).__1__state = 1;
  return true;
}

