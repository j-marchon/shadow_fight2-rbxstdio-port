// TypeDefIndex 2653
// Namespace: Nekki.SF2.GUI.Profile
// public class PerkSubItem : SubItem
// Fields:
//   private JLGNBOILFLN <CGEGGOPIPHH>k__BackingField; // 0x1E0
//   protected ECENNHNBAME FDHEELJCBGE; // 0x1E8
//   private ResolutionImage _upgradeLevelIcon; // 0x1F0
//   protected bool MBIMMBFKMJJ; // 0x1F8
//   protected bool BHABAMGDPJP; // 0x1F9
//   private int OPMEHEEJPHC; // 0x1FC
//   private CMEMKGEPJMH _Position; // 0x200

// ===== public void Init(JLGNBOILFLN EIKFGOCCOIE)  [RVA 0x33B9BBC]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
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
  pSVar4 = StringLiteral_1/*""*/;
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


// ===== public bool get_IsRight()  [RVA 0x33BA304]
// Nekki.SF2.GUI.Profile.PerkSubItem$$get_IsRight @ RVA 0x33BA304

bool Nekki_SF2_GUI_Profile_PerkSubItem__get_IsRight
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Profile_ProfileCell_o *x;
  Il2CppClass *x_00;
  
  if ((DAT_04567d98 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_SubItem_ParentCellAs<PerkCell>__);
    DAT_04567d98 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).super.PEJMMOONAHC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pIVar2 = Nekki_SF2_GUI_Profile_SubItem__ParentCellAs<object>
                     ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,
                      Method_Nekki_SF2_GUI_Profile_SubItem_ParentCellAs<PerkCell>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    x_00 = pIVar2[5].klass;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Position(CMEMKGEPJMH CJNHFNHJHPE)  [RVA 0x33BA3C8]
// Nekki.SF2.GUI.Profile.PerkSubItem$$set_Position @ RVA 0x33BA3C8

void Nekki_SF2_GUI_Profile_PerkSubItem__set_Position
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._Position = CJNHFNHJHPE;
  return;
}


// ===== protected override void IAPFLEBPOJL()  [RVA 0x33BA3D0]
// Nekki.SF2.GUI.Profile.PerkSubItem$$IAPFLEBPOJL @ RVA 0x33BA3D0

void Nekki_SF2_GUI_Profile_PerkSubItem__IAPFLEBPOJL
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  Nekki_SF2_GUI_Profile_SubItem__IAPFLEBPOJL
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectedPicture;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = (__this->fields).super.GMEDAKHGMME;
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (bVar1 == false) {
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetSiblingIndex
                  (__this_01,(__this->fields).OPMEHEEJPHC,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33BA42C]
// Nekki.SF2.GUI.Profile.PerkSubItem$$.ctor @ RVA 0x33BA42C

void Nekki_SF2_GUI_Profile_PerkSubItem___ctor
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d99 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04567d99 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Profile_SubItem_TypeInfo,method);
  }
  Nekki_SF2_GUI_Profile_SubItem___ctor((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EMDBNFHFCBF(object IMMNELPBGIF)  [RVA 0x33BA484]
// Nekki.SF2.GUI.Profile.PerkSubItem$$EMDBNFHFCBF @ RVA 0x33BA484

void Nekki_SF2_GUI_Profile_PerkSubItem__EMDBNFHFCBF
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x034ba490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._58_UpdateState.methodPtr)
            (__this,(__this->klass->vtable)._58_UpdateState.method);
  return;
}


// ===== public JLGNBOILFLN get_Perk()  [RVA 0x33BA494]
// Nekki.SF2.GUI.Profile.PerkSubItem$$get_Perk @ RVA 0x33BA494

JLGNBOILFLN_o *
Nekki_SF2_GUI_Profile_PerkSubItem__get_Perk
          (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._CGEGGOPIPHH_k__BackingField;
}


// ===== protected bool NLOIEDIIGEM()  [RVA 0x33BA49C]
// Nekki.SF2.GUI.Profile.PerkSubItem$$NLOIEDIIGEM @ RVA 0x33BA49C

bool Nekki_SF2_GUI_Profile_PerkSubItem__NLOIEDIIGEM
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  JLGNBOILFLN_o *pJVar1;
  
  pJVar1 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar1 != (JLGNBOILFLN_o *)0x0) {
    return (pJVar1->fields).OIKLOAGFFGO == 1;
  }
  return false;
}


// ===== private void PGOGHEIHHFI(object IMMNELPBGIF)  [RVA 0x33BA4BC]
// Nekki.SF2.GUI.Profile.PerkSubItem$$PGOGHEIHHFI @ RVA 0x33BA4BC

void Nekki_SF2_GUI_Profile_PerkSubItem__PGOGHEIHHFI
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  (__this->fields)._CGEGGOPIPHH_k__BackingField = (JLGNBOILFLN_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields)._CGEGGOPIPHH_k__BackingField,0);
  return;
}


// ===== protected bool KHCMKKJBKME()  [RVA 0x33BA4D0]
// Nekki.SF2.GUI.Profile.PerkSubItem$$KHCMKKJBKME @ RVA 0x33BA4D0

bool Nekki_SF2_GUI_Profile_PerkSubItem__KHCMKKJBKME
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  JLGNBOILFLN_o *pJVar1;
  
  pJVar1 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar1 != (JLGNBOILFLN_o *)0x0) {
    return (pJVar1->fields).OIKLOAGFFGO == 2;
  }
  return false;
}


// ===== protected void DPCOKFFHLCH()  [RVA 0x33BA1FC]
// Nekki.SF2.GUI.Profile.PerkSubItem$$DPCOKFFHLCH @ RVA 0x33BA1FC

void Nekki_SF2_GUI_Profile_PerkSubItem__DPCOKFFHLCH
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  JLGNBOILFLN_o *pJVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *method_00;
  
  pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar5 == (JLGNBOILFLN_o *)0x0) {
    return;
  }
  iVar3 = JLGNBOILFLN__BCLMIPIBLLB(pJVar5,(MethodInfo *)0x0);
  pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar5 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba300;
  iVar4 = JLGNBOILFLN__BCLMIPIBLLB(pJVar5,(MethodInfo *)0x0);
  if (iVar4 == 1) {
    pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    if (pJVar5 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba300;
    iVar1 = (pJVar5->fields).JDNKKGPNHPB;
    if (iVar1 == 2) goto LAB_034ba254;
    bVar2 = iVar1 != 3;
  }
  else {
LAB_034ba254:
    bVar2 = false;
  }
  if (bVar2 || iVar3 < 1) {
    return;
  }
  pNVar6 = (__this->fields)._upgradeLevelIcon;
  if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    CJNHFNHJHPE = Nekki_SF2_GUI_Profile_PerkSubItem__JFJLPBPNIHI(__this,method_00);
    pNVar6 = (__this->fields)._upgradeLevelIcon;
    if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._upgradeLevelIcon;
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar7,61.0,(MethodInfo *)0x0);
        pNVar6 = (__this->fields)._upgradeLevelIcon;
        if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar7,-61.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034ba300:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool GetLock()  [RVA 0x33BA584]
// Nekki.SF2.GUI.Profile.PerkSubItem$$GetLock @ RVA 0x33BA584

bool Nekki_SF2_GUI_Profile_PerkSubItem__GetLock
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  JLGNBOILFLN_o *pJVar1;
  
  if (((__this->fields).MBIMMBFKMJJ == false) &&
     (pJVar1 = (__this->fields)._CGEGGOPIPHH_k__BackingField, pJVar1 != (JLGNBOILFLN_o *)0x0)) {
    return (pJVar1->fields).OIKLOAGFFGO == 3;
  }
  return true;
}


// ===== protected override void BNGDONJEHMH()  [RVA 0x33BA5AC]
// Nekki.SF2.GUI.Profile.PerkSubItem$$BNGDONJEHMH @ RVA 0x33BA5AC

void Nekki_SF2_GUI_Profile_PerkSubItem__BNGDONJEHMH
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  JLGNBOILFLN_o *pJVar1;
  
  Nekki_SF2_GUI_Profile_SubItem__BNGDONJEHMH
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  pJVar1 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if ((pJVar1 != (JLGNBOILFLN_o *)0x0) && ((pJVar1->fields).OIKLOAGFFGO == 0)) {
                    /* WARNING: Could not recover jumptable at 0x034ba5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._56_OEIIAJMHBFJ.methodPtr)
              (__this,(__this->klass->vtable)._56_OEIIAJMHBFJ.method);
    return;
  }
  return;
}


// ===== protected ECENNHNBAME MJKINAHFKIG()  [RVA 0x33BA0B0]
// Nekki.SF2.GUI.Profile.PerkSubItem$$MJKINAHFKIG @ RVA 0x33BA0B0

ECENNHNBAME_o *
Nekki_SF2_GUI_Profile_PerkSubItem__MJKINAHFKIG
          (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  JLGNBOILFLN_o *pJVar3;
  HEFOANCOHDC_o *pHVar4;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  int index;
  
  if ((DAT_04567d9a & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    DAT_04567d9a = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._CGEGGOPIPHH_k__BackingField != (JLGNBOILFLN_o *)0x0) {
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565f31 == '\0') {
      FUN_01bab630(&LDHBHPILNMA_TypeInfo);
      DAT_04565f31 = '\x01';
      method = extraout_x1_01;
    }
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo,method);
    }
    __this_00 = LDHBHPILNMA_TypeInfo->static_fields->GLNEIGKMPDC;
    if (__this_00 == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
LAB_034ba1f8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        pJVar3 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
        if (pJVar3 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba1f8;
        if ((pJVar3->fields).LENFGEAJDMN != (HEFOANCOHDC_o *)0x0) {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
          if (((pIVar2 == (Il2CppObject *)0x0) ||
              (pJVar3 = (__this->fields)._CGEGGOPIPHH_k__BackingField,
              pJVar3 == (JLGNBOILFLN_o *)0x0)) ||
             (pHVar4 = (pJVar3->fields).LENFGEAJDMN, pHVar4 == (HEFOANCOHDC_o *)0x0))
          goto LAB_034ba1f8;
          bVar1 = System_String__op_Equality
                            (pIVar2[1].monitor,(pHVar4->fields).JJONOCGMEMK,(MethodInfo *)0x0);
          if (bVar1) {
            pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,index,
                                Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
            if (pIVar2 != (Il2CppObject *)0x0) {
              return pIVar2[3].monitor;
            }
            goto LAB_034ba1f8;
          }
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
  }
  return (ECENNHNBAME_o *)0x0;
}


// ===== protected override void OnDestroy()  [RVA 0x33BA5EC]
// Nekki.SF2.GUI.Profile.PerkSubItem$$OnDestroy @ RVA 0x33BA5EC

void Nekki_SF2_GUI_Profile_PerkSubItem__OnDestroy
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Profile_SubItem__OnDestroy
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Profile_PerkSubItem__Clear(__this,method_00);
  return;
}


// ===== public void Clear()  [RVA 0x33B9F14]
// Nekki.SF2.GUI.Profile.PerkSubItem$$Clear @ RVA 0x33B9F14

void Nekki_SF2_GUI_Profile_PerkSubItem__Clear
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  System_Action_T__o *pSVar1;
  MethodInfo *extraout_x1;
  JLGNBOILFLN_o *pJVar2;
  
  if ((DAT_04567d9b & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_EMDBNFHFCBF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_EOBOFFLGNDI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_GFDMDMPOFMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkSubItem_PGOGHEIHHFI__);
    DAT_04567d9b = 1;
    method = extraout_x1;
  }
  pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
    pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method);
    System_Action<object>___ctor();
    OMLLDCIMLBB<object>__RemoveEventListener
              ((OMLLDCIMLBB_object__o *)pJVar2,0,pSVar1,
               Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
      OMLLDCIMLBB<object>__RemoveEventListener
                ((OMLLDCIMLBB_object__o *)pJVar2,1,pSVar1,
                 Method_OMLLDCIMLBB<object>_RemoveEventListener__);
      pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
      pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
        OMLLDCIMLBB<object>__RemoveEventListener
                  ((OMLLDCIMLBB_object__o *)pJVar2,2,pSVar1,
                   Method_OMLLDCIMLBB<object>_RemoveEventListener__);
        pJVar2 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
        pSVar1 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (pJVar2 != (JLGNBOILFLN_o *)0x0) {
          OMLLDCIMLBB<object>__RemoveEventListener
                    ((OMLLDCIMLBB_object__o *)pJVar2,3,pSVar1,
                     Method_OMLLDCIMLBB<object>_RemoveEventListener__);
          goto LAB_034ba094;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_034ba094:
  (__this->fields)._Position = 0;
  return;
}


// ===== private void LAAHJCGKKNK(JLGNBOILFLN CJNHFNHJHPE)  [RVA 0x33BA608]
// Nekki.SF2.GUI.Profile.PerkSubItem$$LAAHJCGKKNK @ RVA 0x33BA608

void Nekki_SF2_GUI_Profile_PerkSubItem__LAAHJCGKKNK
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,JLGNBOILFLN_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._CGEGGOPIPHH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._CGEGGOPIPHH_k__BackingField);
  return;
}


// ===== private void EOBOFFLGNDI(object IMMNELPBGIF)  [RVA 0x33BA618]
// Nekki.SF2.GUI.Profile.PerkSubItem$$EOBOFFLGNDI @ RVA 0x33BA618

void Nekki_SF2_GUI_Profile_PerkSubItem__EOBOFFLGNDI
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  JLGNBOILFLN_o *pJVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *method_00;
  
  pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar5 == (JLGNBOILFLN_o *)0x0) {
    return;
  }
  iVar3 = JLGNBOILFLN__BCLMIPIBLLB(pJVar5,(MethodInfo *)0x0);
  pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar5 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba300;
  iVar4 = JLGNBOILFLN__BCLMIPIBLLB(pJVar5,(MethodInfo *)0x0);
  if (iVar4 == 1) {
    pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    if (pJVar5 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba300;
    iVar1 = (pJVar5->fields).JDNKKGPNHPB;
    if (iVar1 == 2) goto LAB_034ba254;
    bVar2 = iVar1 != 3;
  }
  else {
LAB_034ba254:
    bVar2 = false;
  }
  if (bVar2 || iVar3 < 1) {
    return;
  }
  pNVar6 = (__this->fields)._upgradeLevelIcon;
  if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    CJNHFNHJHPE = Nekki_SF2_GUI_Profile_PerkSubItem__JFJLPBPNIHI(__this,method_00);
    pNVar6 = (__this->fields)._upgradeLevelIcon;
    if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._upgradeLevelIcon;
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar7,61.0,(MethodInfo *)0x0);
        pNVar6 = (__this->fields)._upgradeLevelIcon;
        if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar7,-61.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034ba300:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsInfoAnimation()  [RVA 0x33BA61C]
// Nekki.SF2.GUI.Profile.PerkSubItem$$IsInfoAnimation @ RVA 0x33BA61C

bool Nekki_SF2_GUI_Profile_PerkSubItem__IsInfoAnimation
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  return (__this->fields).FDHEELJCBGE != (ECENNHNBAME_o *)0x0;
}


// ===== private void GFDMDMPOFMP(object IMMNELPBGIF)  [RVA 0x33BA62C]
// Nekki.SF2.GUI.Profile.PerkSubItem$$GFDMDMPOFMP @ RVA 0x33BA62C

void Nekki_SF2_GUI_Profile_PerkSubItem__GFDMDMPOFMP
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (*(__this->klass->vtable)._57_UpdateIcon.methodPtr)
            (__this,(__this->klass->vtable)._57_UpdateIcon.method);
  (*(__this->klass->vtable)._58_UpdateState.methodPtr)
            (__this,(__this->klass->vtable)._58_UpdateState.method);
  Nekki_SF2_GUI_Profile_PerkSubItem__DPCOKFFHLCH(__this,method_00);
  return;
}


// ===== public override void OnPointerDown(PointerEventData OHNNFPGGEFK)  [RVA 0x33BA664]
// Nekki.SF2.GUI.Profile.PerkSubItem$$OnPointerDown @ RVA 0x33BA664

void Nekki_SF2_GUI_Profile_PerkSubItem__OnPointerDown
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  ulong uVar1;
  
  uVar1 = (*(__this->klass->vtable)._65_GetLock.methodPtr)
                    (__this,(__this->klass->vtable)._65_GetLock.method);
  if ((uVar1 & 1) != 0) {
    return;
  }
  SFButton__OnPointerDown((SFButton_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  return;
}


// ===== protected string JFJLPBPNIHI()  [RVA 0x33BA4F0]
// Nekki.SF2.GUI.Profile.PerkSubItem$$JFJLPBPNIHI @ RVA 0x33BA4F0

System_String_o *
Nekki_SF2_GUI_Profile_PerkSubItem__JFJLPBPNIHI
          (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  JLGNBOILFLN_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  int32_t local_14;
  
  if ((DAT_04567d9c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_10503/*"ProfilePieces.level{0}"*/);
    DAT_04567d9c = 1;
  }
  __this_00 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (__this_00 == (JLGNBOILFLN_o *)0x0) {
    local_14 = 1;
  }
  else {
    local_14 = JLGNBOILFLN__BCLMIPIBLLB(__this_00,(MethodInfo *)0x0);
  }
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_14);
  pSVar1 = System_String__Format(StringLiteral_10503/*"ProfilePieces.level{0}"*/,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== protected override void Awake()  [RVA 0x33BA6B0]
// Nekki.SF2.GUI.Profile.PerkSubItem$$Awake @ RVA 0x33BA6B0

void Nekki_SF2_GUI_Profile_PerkSubItem__Awake
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  Nekki_SF2_GUI_Profile_SubItem__Awake((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectedPicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    iVar1 = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
    (__this->fields).OPMEHEEJPHC = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsLeft()  [RVA 0x33BA6EC]
// Nekki.SF2.GUI.Profile.PerkSubItem$$get_IsLeft @ RVA 0x33BA6EC

bool Nekki_SF2_GUI_Profile_PerkSubItem__get_IsLeft
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Profile_ProfileCell_o *x;
  UnityEngine_Object_o *x_00;
  
                    /* try { // try from 034ba700 to 035ba78b has its CatchHandler @ 034ba700
                       catch() { ... } // from try @ 034ba700 with catch @ 034ba700
                       catch() { ... } // from try @ 034ba7ac with catch @ 034ba700
                       catch() { ... } // from try @ 034ba7d8 with catch @ 034ba700
                       catch() { ... } // from try @ 034ba800 with catch @ 034ba700
                       catch() { ... } // from try @ 034ba840 with catch @ 034ba700 */
  if ((DAT_04567d9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_SubItem_ParentCellAs<PerkCell>__);
    DAT_04567d9d = 1;
    method = extraout_x1;
  }
  x = (__this->fields).super.PEJMMOONAHC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pIVar2 = Nekki_SF2_GUI_Profile_SubItem__ParentCellAs<object>
                     ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,
                      Method_Nekki_SF2_GUI_Profile_SubItem_ParentCellAs<PerkCell>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    x_00 = pIVar2[4].monitor;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ba78c to 035ba793 has its CatchHandler @ 034ba7e4 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 034ba7a0 to 035ba7ab has its CatchHandler @ 034ba7e0 */
    bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ba7ac to 035ba7d3 has its CatchHandler @ 034ba700 */
  FUN_01bab8c8();
}


// ===== public override void SetLock(bool NOLCCAPIBLL)  [RVA 0x33BA7B0]
// Nekki.SF2.GUI.Profile.PerkSubItem$$SetLock @ RVA 0x33BA7B0

void Nekki_SF2_GUI_Profile_PerkSubItem__SetLock
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,bool NOLCCAPIBLL,MethodInfo *method)

{
  bool NOLCCAPIBLL_00;
  JLGNBOILFLN_o *pJVar1;
  
  (__this->fields).MBIMMBFKMJJ = NOLCCAPIBLL;
  if (NOLCCAPIBLL) {
    NOLCCAPIBLL_00 = true;
  }
  else {
    pJVar1 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    if (pJVar1 == (JLGNBOILFLN_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ba7d4 with catch @ 034ba7dc
                        */
      NOLCCAPIBLL_00 = false;
    }
    else {
      NOLCCAPIBLL_00 = (pJVar1->fields).OIKLOAGFFGO == 3;
                    /* try { // try from 034ba7d4 to 035ba7d7 has its CatchHandler @ 034ba7dc */
                    /* try { // try from 034ba7d8 to 035ba7fb has its CatchHandler @ 034ba700 */
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ba7a0 with catch @ 034ba7e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ba78c with catch @ 034ba7e4
                        */
  Nekki_SF2_GUI_Profile_SubItem__SetLock
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,NOLCCAPIBLL_00,(MethodInfo *)0x0);
  return;
}


// ===== public override void UpdateState()  [RVA 0x33BA7E8]
// Nekki.SF2.GUI.Profile.PerkSubItem$$UpdateState @ RVA 0x33BA7E8

void Nekki_SF2_GUI_Profile_PerkSubItem__UpdateState
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  undefined8 uVar2;
  MethodInfo *pMVar3;
  JLGNBOILFLN_o *pJVar4;
  Nekki_SF2_GUI_Profile_PerkSubItem_c *pNVar5;
  Il2CppMethodPointer pIVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  
                    /* try { // try from 034ba7fc to 035ba7ff has its CatchHandler @ 034ba828 */
  if ((DAT_04567d9e & 1) == 0) {
                    /* try { // try from 034ba800 to 035ba837 has its CatchHandler @ 034ba700 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d9e = 1;
    method = extraout_x1;
  }
  pJVar4 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar4 == (JLGNBOILFLN_o *)0x0) {
                    /* try { // try from 034ba84c to 035ba853 has its CatchHandler @ 034ba854 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034ba838 with catch @ 034ba854
                       catch(type#2 @ 00000000) { ... } // from try @ 034ba84c with catch @ 034ba854
                        */
    return;
  }
                    /* catch() { ... } // from try @ 034ba7fc with catch @ 034ba828 */
                    /* try { // try from 034ba838 to 035ba83f has its CatchHandler @ 034ba854 */
  switch((pJVar4->fields).OIKLOAGFFGO) {
  case 0:
                    /* try { // try from 034ba840 to 035ba84b has its CatchHandler @ 034ba700 */
    pNVar5 = __this->klass;
    (__this->fields).BHABAMGDPJP = false;
    break;
  case 1:
    (__this->fields).BHABAMGDPJP = false;
    pNVar7 = (__this->fields).super._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      LJLLAKHOFFF__IFBBIDIEBEL
                ((UnityEngine_UI_Graphic_o *)(__this->fields).super._icon,
                 (__this->fields).super.GJFHNJFGBKE,(MethodInfo *)0x0);
    }
    pIVar6 = (__this->klass->vtable)._51_SetActive.methodPtr;
    pMVar3 = (__this->klass->vtable)._51_SetActive.method;
    goto LAB_034ba930;
  case 2:
    (__this->fields).BHABAMGDPJP = true;
    pNVar7 = (__this->fields).super._icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      LJLLAKHOFFF__IFBBIDIEBEL
                ((UnityEngine_UI_Graphic_o *)(__this->fields).super._icon,
                 (__this->fields).super.GJFHNJFGBKE,(MethodInfo *)0x0);
    }
    pNVar5 = __this->klass;
    break;
  case 3:
    (*(__this->klass->vtable)._51_SetActive.methodPtr)
              (__this,1,(__this->klass->vtable)._51_SetActive.method);
    pIVar6 = (__this->klass->vtable)._55_SetSelected.methodPtr;
    pMVar3 = (__this->klass->vtable)._55_SetSelected.method;
LAB_034ba930:
    uVar2 = 0;
    goto LAB_034ba938;
  default:
    goto switchD_034ba83c_default;
  }
  pIVar6 = (pNVar5->vtable)._51_SetActive.methodPtr;
  pMVar3 = (pNVar5->vtable)._51_SetActive.method;
  uVar2 = 1;
LAB_034ba938:
  (*pIVar6)(__this,uVar2,pMVar3);
switchD_034ba83c_default:
                    /* WARNING: Could not recover jumptable at 0x034ba958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._62_SetLock.methodPtr)
            (__this,(ulong)(__this->fields).MBIMMBFKMJJ,(__this->klass->vtable)._62_SetLock.method);
  return;
}


// ===== public CMEMKGEPJMH get_Position()  [RVA 0x33BA95C]
// Nekki.SF2.GUI.Profile.PerkSubItem$$get_Position @ RVA 0x33BA95C

int32_t Nekki_SF2_GUI_Profile_PerkSubItem__get_Position
                  (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._Position;
}

