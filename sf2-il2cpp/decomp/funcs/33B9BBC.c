// Nekki.SF2.GUI.Profile.PerkSubItem$$Init @ RVA 0x33B9BBC

void Nekki_SF2_GUI_Profile_PerkSubItem__Init
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,JLGNBOILFLN_o *EIKFGOCCOIE,
               MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Action_T__o *pSVar2;
  ECENNHNBAME_o *pEVar3;
  System_String_o *pSVar4;
  ACHLOMELAJE_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  GODDDLLLOLB_o *pGVar5;
  Nekki_SF2_GUI_Profile_PerkSubItem_c *pNVar6;
  JLGNBOILFLN_o *pJVar7;
  GODDDLLLOLB_Fields GVar8;
  undefined8 uVar9;
  
  if ((DAT_04567d97 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_AddEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_EMDBNFHFCBF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_EOBOFFLGNDI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_GFDMDMPOFMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_PGOGHEIHHFI__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567d97 = 1;
  }
  Nekki_SF2_GUI_Profile_SubItem__Init((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._upgradeLevelIcon;
  if ((__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034b9f10;
  UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Profile_PerkSubItem__Clear(__this,method_00);
  (__this->fields)._CGEGGOPIPHH_k__BackingField = EIKFGOCCOIE;
  thunk_FUN_01c20e04(&(__this->fields)._CGEGGOPIPHH_k__BackingField,EIKFGOCCOIE);
  pJVar7 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  method_01 = extraout_x1;
  if (pJVar7 != (JLGNBOILFLN_o *)0x0) {
    pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    OMLLDCIMLBB<object>__AddEventListener
              ((OMLLDCIMLBB_object__o *)pJVar7,0,pSVar2,
               Method_OMLLDCIMLBB<object>_AddEventListener__);
    pJVar7 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pJVar7 == (JLGNBOILFLN_o *)0x0) goto LAB_034b9f10;
    OMLLDCIMLBB<object>__AddEventListener
              ((OMLLDCIMLBB_object__o *)pJVar7,1,pSVar2,
               Method_OMLLDCIMLBB<object>_AddEventListener__);
    pJVar7 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pJVar7 == (JLGNBOILFLN_o *)0x0) goto LAB_034b9f10;
    OMLLDCIMLBB<object>__AddEventListener
              ((OMLLDCIMLBB_object__o *)pJVar7,2,pSVar2,
               Method_OMLLDCIMLBB<object>_AddEventListener__);
    pJVar7 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    pSVar2 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pJVar7 == (JLGNBOILFLN_o *)0x0) goto LAB_034b9f10;
    OMLLDCIMLBB<object>__AddEventListener
              ((OMLLDCIMLBB_object__o *)pJVar7,3,pSVar2,
               Method_OMLLDCIMLBB<object>_AddEventListener__);
    method_01 = extraout_x1_00;
  }
  pEVar3 = Nekki_SF2_GUI_Profile_PerkSubItem__MJKINAHFKIG(__this,method_01);
  (__this->fields).FDHEELJCBGE = pEVar3;
  thunk_FUN_01c20e04(&(__this->fields).FDHEELJCBGE);
  pJVar7 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  pSVar4 = StringLiteral_1;
  if (pJVar7 != (JLGNBOILFLN_o *)0x0) {
    pSVar4 = JLGNBOILFLN__MBIIPOJONAM(pJVar7,(MethodInfo *)0x0);
  }
  (__this->fields).super.COCAGDPOPLL = pSVar4;
  thunk_FUN_01c20e04(&(__this->fields).super.COCAGDPOPLL);
  (__this->fields).MBIMMBFKMJJ = false;
  (__this->fields).BHABAMGDPJP = false;
  if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar5 = FIPOABEGELK_TypeInfo->static_fields->FCHIMNCGKJF;
  if (pGVar5 != (GODDDLLLOLB_o *)0x0) {
    GVar8 = pGVar5->fields;
    pNVar6 = __this->klass;
    uVar9 = NEON_rev64(CONCAT44(GVar8.HFBHMJBLLOI / 255.0,GVar8.AKPNOPAEKEF / 255.0),4);
    (__this->fields).super.GJFHNJFGBKE = (float)(int)uVar9;
    (__this->fields).super.NAPGLBIIEJP = (float)(int)((ulong)uVar9 >> 0x20);
    (*(pNVar6->vtable)._54_ACCLNHDNBEI.methodPtr)(__this,1,(pNVar6->vtable)._54_ACCLNHDNBEI.method);
    (*(__this->klass->vtable)._57_UpdateIcon.methodPtr)
              (__this,(__this->klass->vtable)._57_UpdateIcon.method);
    (*(__this->klass->vtable)._58_UpdateState.methodPtr)
              (__this,(__this->klass->vtable)._58_UpdateState.method);
    Nekki_SF2_GUI_Profile_PerkSubItem__DPCOKFFHLCH(__this,method_02);
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
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((__this_02 != (ACHLOMELAJE_o *)0x0) &&
       (iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0),
       EIKFGOCCOIE != (JLGNBOILFLN_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x034b9f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._62_SetLock.methodPtr)
                (__this,(ulong)(iVar1 < (EIKFGOCCOIE->fields).GHPHFGBIPCI),
                 (__this->klass->vtable)._62_SetLock.method);
      return;
    }
  }
LAB_034b9f10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

