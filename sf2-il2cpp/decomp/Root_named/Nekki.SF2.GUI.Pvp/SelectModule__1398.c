// TypeDefIndex 1398
// Namespace: Nekki.SF2.GUI.Pvp
// public class SelectModule : UIModule
// Fields:
//   protected PlayersSelectTable _selectTable; // 0x28
//   protected GameObject selectCellPrefab; // 0x30
//   protected GameObject lockedCellPrefab; // 0x38
//   protected Image _shadowImage; // 0x40
//   private float selectorMoveTime; // 0x48
//   private Action<string, string> ICFAKOCJNGE; // 0x50
//   private Action KNIDPDCJJLG; // 0x58
//   protected bool FPFGDOBNLCP; // 0x60
//   protected bool FODJGPABKLP; // 0x61
//   protected int LDJBDDJCPBO; // 0x64
//   protected int HKGKJIAPLPO; // 0x68
//   protected int PCNNFNFPJNH; // 0x6C
//   protected const float OGCGMGDLFOK = 1;
//   protected float HIHIILLMINJ; // 0x70
//   protected bool NKIKDJEPECM; // 0x74
//   protected bool LGJBHOIAOOG; // 0x75
//   protected MGNDHCBAPEN<int, int> LAAFICOIGGA; // 0x78
//   protected MGNDHCBAPEN<int, int> JGLNHNCBFOD; // 0x80

// ===== protected void OGLMEBIKJLP(AMJPDLOCCNP HEHMPFLAEGE, int MKACJBMOMHC, int JJBKAMIAMNE)  [RVA 0x3177838]
// Nekki.SF2.GUI.Pvp.SelectModule$$OGLMEBIKJLP @ RVA 0x3177838

void Nekki_SF2_GUI_Pvp_SelectModule__OGLMEBIKJLP
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t HEHMPFLAEGE,int32_t MKACJBMOMHC,
               int32_t JJBKAMIAMNE,MethodInfo *method)

{
  MGNDHCBAPEN_int__int__o *pMVar1;
  
  if (HEHMPFLAEGE == 0) {
    pMVar1 = (__this->fields).LAAFICOIGGA;
  }
  else {
    pMVar1 = (__this->fields).JGLNHNCBFOD;
  }
  if (pMVar1 != (MGNDHCBAPEN_int__int__o *)0x0) {
    (pMVar1->fields).PHPELPFMOII = (pMVar1->fields).PHPELPFMOII + MKACJBMOMHC;
    (pMVar1->fields).DOKHHBGJICA = (pMVar1->fields).DOKHHBGJICA + JJBKAMIAMNE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetSecondPlayerAvailable(bool EHJMCCFLOLK)  [RVA 0x317786C]
// Nekki.SF2.GUI.Pvp.SelectModule$$SetSecondPlayerAvailable @ RVA 0x317786C

void Nekki_SF2_GUI_Pvp_SelectModule__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,bool EHJMCCFLOLK,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  
  bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields)._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetPlayerActive(__this_00,1,EHJMCCFLOLK,(MethodInfo *)0x0)
    ;
    (*(__this->klass->vtable)._11_PCJCDPOMJJN.methodPtr)
              (__this,0,0,(__this->klass->vtable)._11_PCJCDPOMJJN.method);
                    /* WARNING: Could not recover jumptable at 0x032778d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._11_PCJCDPOMJJN.methodPtr)
              (__this,1,0,(__this->klass->vtable)._11_PCJCDPOMJJN.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x31778E8]
// Nekki.SF2.GUI.Pvp.SelectModule$$CLNAOMIIBLH @ RVA 0x31778E8

void Nekki_SF2_GUI_Pvp_SelectModule__CLNAOMIIBLH
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0327790c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._17_JMOMGHNMHGM.methodPtr)
            (__this,(__this->klass->vtable)._17_JMOMGHNMHGM.method);
  return;
}


// ===== protected virtual void FDDCDDKINHH()  [RVA 0x3177910]
// Nekki.SF2.GUI.Pvp.SelectModule$$FDDCDDKINHH @ RVA 0x3177910

void Nekki_SF2_GUI_Pvp_SelectModule__FDDCDDKINHH
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void JHJCCHBOMHP()  [RVA 0x3177914]
// Nekki.SF2.GUI.Pvp.SelectModule$$JHJCCHBOMHP @ RVA 0x3177914

void Nekki_SF2_GUI_Pvp_SelectModule__JHJCCHBOMHP
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_04566964 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    DAT_04566964 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    if ((__this != (Nekki_SF2_GUI_Pvp_SelectModule_o *)0x0) &&
       (System_Action<Int32Enum,_int,_Int32Enum>___ctor(), __this_00 != (OCOAGJDCJPL_o *)0x0)) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected bool ABEMBBBAFPP()  [RVA 0x3177A00]
// Nekki.SF2.GUI.Pvp.SelectModule$$ABEMBBBAFPP @ RVA 0x3177A00

bool Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this_00,(MethodInfo *)0x0);
    return 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnPlayersConfirm(Action<string, string> CJNHFNHJHPE)  [RVA 0x3177A2C]
// Nekki.SF2.GUI.Pvp.SelectModule$$add_OnPlayersConfirm @ RVA 0x3177A2C

void Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersConfirm
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,
               System_Action_string__string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__string__o *pSVar5;
  System_Action_string__string__o **ppSVar6;
  System_Action_string__string__o *a;
  
  if ((DAT_0456695e & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    DAT_0456695e = 1;
  }
  ppSVar6 = &(__this->fields).ICFAKOCJNGE;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string,_string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string,_string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void Update()  [RVA 0x3177ADC]
// Nekki.SF2.GUI.Pvp.SelectModule$$Update @ RVA 0x3177ADC

void Nekki_SF2_GUI_Pvp_SelectModule__Update
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Nekki_SF2_GUI_Pvp_SelectModule_c *pNVar5;
  MGNDHCBAPEN_int__int__o *pMVar6;
  System_Action_string__string__o *pSVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = (__this->fields).HIHIILLMINJ;
  if (0.0 <= fVar9) {
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 + fVar8;
    (__this->fields).HIHIILLMINJ = fVar9;
    if (1.0 < fVar9) {
      pNVar5 = __this->klass;
      (__this->fields).HIHIILLMINJ = -1.0;
      pSVar7 = (__this->fields).ICFAKOCJNGE;
      uVar3 = (*(pNVar5->vtable)._20_ItemTemplate.methodPtr)
                        (__this,0,(pNVar5->vtable)._20_ItemTemplate.method);
      uVar4 = (*(__this->klass->vtable)._20_ItemTemplate.methodPtr)
                        (__this,1,(__this->klass->vtable)._20_ItemTemplate.method);
      if (pSVar7 == (System_Action_string__string__o *)0x0) goto LAB_03277bf8;
      (*(code *)(pSVar7->fields).super.super.invoke_impl)
                ((pSVar7->fields).super.super.method_code,uVar3,uVar4,
                 (pSVar7->fields).super.super.method);
    }
  }
  pMVar6 = (__this->fields).LAAFICOIGGA;
  if (pMVar6 != (MGNDHCBAPEN_int__int__o *)0x0) {
    uVar1 = (pMVar6->fields).PHPELPFMOII;
    uVar2 = (pMVar6->fields).DOKHHBGJICA;
    if (uVar1 != 0 || uVar2 != 0) {
      (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                (__this,0,(ulong)uVar1,(ulong)uVar2,1,(__this->klass->vtable)._13_BHOPECNMJAC.method
                );
      pMVar6 = (__this->fields).LAAFICOIGGA;
      if (pMVar6 == (MGNDHCBAPEN_int__int__o *)0x0) goto LAB_03277bf8;
      (pMVar6->fields).PHPELPFMOII = 0;
      (pMVar6->fields).DOKHHBGJICA = 0;
    }
    pMVar6 = (__this->fields).JGLNHNCBFOD;
    if (pMVar6 != (MGNDHCBAPEN_int__int__o *)0x0) {
      uVar1 = (pMVar6->fields).PHPELPFMOII;
      uVar2 = (pMVar6->fields).DOKHHBGJICA;
      if (uVar1 != 0 || uVar2 != 0) {
        (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
                  (__this,1,(ulong)uVar1,(ulong)uVar2,1,
                   (__this->klass->vtable)._13_BHOPECNMJAC.method);
        pMVar6 = (__this->fields).JGLNHNCBFOD;
        if (pMVar6 == (MGNDHCBAPEN_int__int__o *)0x0) goto LAB_03277bf8;
        (pMVar6->fields).PHPELPFMOII = 0;
        (pMVar6->fields).DOKHHBGJICA = 0;
      }
      return;
    }
  }
LAB_03277bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void LLGCACMKNAN()  [RVA 0x3177BFC]
// Nekki.SF2.GUI.Pvp.SelectModule$$LLGCACMKNAN @ RVA 0x3177BFC

void Nekki_SF2_GUI_Pvp_SelectModule__LLGCACMKNAN
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  (__this->fields).HIHIILLMINJ = 0.0;
  DG_Tweening_DOTweenModuleUI__DOColor
            ((__this->fields)._shadowImage,(UnityEngine_Color_o)(ZEXT416(0x3ee66666) << 0x60),1.0,
             (MethodInfo *)0x0);
  return;
}


// ===== protected virtual void PCJCDPOMJJN(AMJPDLOCCNP HEHMPFLAEGE, bool IFNFDFALLMG = True)  [RVA 0x3177C28]
// Nekki.SF2.GUI.Pvp.SelectModule$$PCJCDPOMJJN @ RVA 0x3177C28

void Nekki_SF2_GUI_Pvp_SelectModule__PCJCDPOMJJN
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t HEHMPFLAEGE,bool IFNFDFALLMG,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str3;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  long lVar3;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar4;
  Nekki_SF2_GUI_Pvp_SelectModule_o *extraout_x0;
  Nekki_SF2_GUI_Pvp_SelectModule_o *extraout_x0_00;
  Nekki_SF2_GUI_Pvp_SelectModule_o *__this_01;
  UnityEngine_UI_Image_o *pUVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  byte bVar7;
  UnityEngine_GameObject_c *pUVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  System_Enum_o local_50;
  int32_t local_40;
  bool local_34 [4];
  
  local_34[0] = IFNFDFALLMG;
  if ((DAT_0456695f & 1) == 0) {
    FUN_01bab630(&AMJPDLOCCNP_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    FUN_01bab630(&StringLiteral_11790/*"SelectCurrentItem "*/);
    FUN_01bab630(&StringLiteral_171/*"  "*/);
    DAT_0456695f = 1;
  }
  if (HEHMPFLAEGE == 0) {
    if (((__this->fields).FPFGDOBNLCP & IFNFDFALLMG) != 0) {
      return;
    }
LAB_03277cc8:
    bVar7 = 0;
  }
  else {
    if (HEHMPFLAEGE != 1) goto LAB_03277cc8;
    bVar7 = (__this->fields).FODJGPABKLP;
  }
  if ((IFNFDFALLMG & bVar7) == 0) {
    local_50.klass = (System_Enum_c *)AMJPDLOCCNP_TypeInfo;
    local_50.monitor = (void *)0xffffffffffffffff;
    local_40 = HEHMPFLAEGE;
    pSVar2 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo);
    }
    str3 = System_Boolean__ToString(SUB81(local_34,0),(MethodInfo *)0x0);
    pSVar2 = System_String__Concat
                       (StringLiteral_11790/*"SelectCurrentItem "*/,pSVar2,StringLiteral_171/*"  "*/,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._selectTable;
    if (__this_00 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_03277f00;
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__SelectCurrentItem
              (__this_00,HEHMPFLAEGE,local_34[0],(MethodInfo *)0x0);
    uVar6 = extraout_x1;
    if (local_34[0] != false) {
      EDFDANKEBGF__EEPCFJIEALL((MethodInfo *)0x0);
      uVar6 = extraout_x1_00;
    }
    if (HEHMPFLAEGE == 0) {
      (__this->fields).FPFGDOBNLCP = local_34[0];
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(*(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20) + 0x135) &
          1) == 0) {
        auVar9 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(auVar9._0_8_ + 0xc0) + 0x10);
      auVar10._8_8_ = auVar9._8_8_;
      auVar10._0_8_ = lVar3;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        auVar10 = FUN_01b81620();
      }
      pUVar8 = (auVar10._0_8_[1].fields.selectCellPrefab)->klass;
      if (pUVar8 == (UnityEngine_GameObject_c *)0x0) goto LAB_03277f00;
      pNVar4 = (Nekki_SF2_GUI_Pvp_PvPHintController_o *)(pUVar8->_2).typeHierarchy;
      if ((__this->fields).FPFGDOBNLCP == false) {
        bVar1 = true;
      }
      else {
        bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP(auVar10._0_8_,auVar10._8_8_);
        bVar1 = !bVar1;
      }
      if (pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0) goto LAB_03277f00;
      Nekki_SF2_GUI_Pvp_PvPHintController__SetLeftHintListAnimationAvailable
                (pNVar4,bVar1,(MethodInfo *)0x0);
      __this_01 = extraout_x0_00;
      method_00 = extraout_x1_02;
    }
    else {
      (__this->fields).FODJGPABKLP = local_34[0];
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((**(long **)(lVar3 + 0xb8) == 0) ||
         (pNVar4 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar3 + 0xb8) + 200),
         pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) goto LAB_03277f00;
      Nekki_SF2_GUI_Pvp_PvPHintController__SetRightHintListAnimationAvailable
                (pNVar4,(__this->fields).FODJGPABKLP == false,(MethodInfo *)0x0);
      __this_01 = extraout_x0;
      method_00 = extraout_x1_01;
    }
    if (((__this->fields).FPFGDOBNLCP != false) &&
       (((__this->fields).FODJGPABKLP != false ||
        (bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP(__this_01,method_00), !bVar1)))) {
                    /* try { // try from 03277e9c to 03377fb3 has its CatchHandler @ 03277e9c
                       catch() { ... } // from try @ 03277e9c with catch @ 03277e9c
                       catch() { ... } // from try @ 032780f8 with catch @ 03277e9c
                       catch() { ... } // from try @ 0327815c with catch @ 03277e9c
                       catch() { ... } // from try @ 032781a4 with catch @ 03277e9c
                       catch() { ... } // from try @ 032781e4 with catch @ 03277e9c
                       catch() { ... } // from try @ 03278230 with catch @ 03277e9c
                       catch() { ... } // from try @ 03278254 with catch @ 03277e9c
                       catch() { ... } // from try @ 03278294 with catch @ 03277e9c */
      (*(__this->klass->vtable)._10_LLGCACMKNAN.methodPtr)
                (__this,(__this->klass->vtable)._10_LLGCACMKNAN.method);
    }
    if (local_34[0] == false) {
      pUVar5 = (__this->fields)._shadowImage;
      (__this->fields).HIHIILLMINJ = -1.0;
      if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) {
LAB_03277f00:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                (0,0,0,0,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
      DG_Tweening_ShortcutExtensions__DOPause
                ((UnityEngine_Component_o *)(__this->fields)._shadowImage,(MethodInfo *)0x0);
    }
  }
  return;
}


// ===== protected virtual void HCKMKFBGPIM()  [RVA 0x3177F04]
// Nekki.SF2.GUI.Pvp.SelectModule$$HCKMKFBGPIM @ RVA 0x3177F04

void Nekki_SF2_GUI_Pvp_SelectModule__HCKMKFBGPIM
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  
  __this_00 = (__this->fields)._selectTable;
  (__this->fields).FPFGDOBNLCP = false;
  (__this->fields).FODJGPABKLP = false;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__Init
              (__this_00,(__this->fields).LDJBDDJCPBO,(__this->fields).HKGKJIAPLPO,
               (__this->fields).PCNNFNFPJNH,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
              (__this,0,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
    (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
              (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
    (__this->fields).NKIKDJEPECM = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3177F8C]
// Nekki.SF2.GUI.Pvp.SelectModule$$.ctor @ RVA 0x3177F8C

void Nekki_SF2_GUI_Pvp_SelectModule___ctor
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  System_Action_string__string__o **ppSVar1;
  System_Action_o **ppSVar2;
  MGNDHCBAPEN_int__int__o *pMVar3;
  MGNDHCBAPEN_int__int__o **ppMVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_string__string__o *pSVar5;
  System_Action_o *pSVar6;
  
  if ((DAT_04566960 & 1) == 0) {
                    /* try { // try from 03277fb4 to 03377fbb has its CatchHandler @ 032781c0 */
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 03277fd0 to 03377fd7 has its CatchHandler @ 032781b8 */
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_SelectModule_<>c_CHPKPMBNGDH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_SelectModule_<>c_DAAEFEFPIHB__);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04566960 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0327801c to 0337803f has its CatchHandler @ 032781b4 */
  (__this->fields).selectorMoveTime = 0.15;
  if ((Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->static_fields->__9__45_0;
  if (pSVar5 == (System_Action_string__string__o *)0x0) {
    if ((Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_string__string__o *)
             thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
                    /* try { // try from 0327807c to 0337809f has its CatchHandler @ 032781b0 */
    System_Action<object,_object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->static_fields->__9__45_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  ppSVar1 = &(__this->fields).ICFAKOCJNGE;
  *ppSVar1 = pSVar5;
  thunk_FUN_01c20e04(ppSVar1,pSVar5);
                    /* try { // try from 032780b8 to 033780e7 has its CatchHandler @ 032781ac */
  if ((Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar6 = Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->static_fields->__9__45_1;
  if (pSVar6 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032780f0 to 033780f7 has its CatchHandler @ 032781a8 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032780f8 to 0337813b has its CatchHandler @ 03277e9c */
    pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Pvp_SelectModule_<>c_TypeInfo->static_fields->__9__45_1;
    *ppSVar2 = pSVar6;
                    /* try { // try from 0327813c to 03378143 has its CatchHandler @ 03278238 */
    thunk_FUN_01c20e04(ppSVar2,pSVar6);
  }
  ppSVar2 = &(__this->fields).KNIDPDCJJLG;
  *ppSVar2 = pSVar6;
  thunk_FUN_01c20e04(ppSVar2,pSVar6);
  (__this->fields).HIHIILLMINJ = -1.0;
                    /* try { // try from 03278158 to 0337815b has its CatchHandler @ 03278234 */
                    /* try { // try from 0327815c to 0337818b has its CatchHandler @ 03277e9c */
  pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
  MGNDHCBAPEN<int,_int>___ctor(pMVar3,0,0,Method_MGNDHCBAPEN<int,_int>__ctor__);
  ppMVar4 = &(__this->fields).LAAFICOIGGA;
  *ppMVar4 = pMVar3;
  thunk_FUN_01c20e04(ppMVar4,pMVar3);
  pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 0327818c to 0337818f has its CatchHandler @ 03278230 */
                    /* try { // try from 03278190 to 03378193 has its CatchHandler @ 032781bc */
                    /* try { // try from 03278194 to 03378197 has its CatchHandler @ 032781c8 */
                    /* try { // try from 03278198 to 0337819b has its CatchHandler @ 032781c4 */
                    /* try { // try from 0327819c to 0337819f has its CatchHandler @ 032781c8 */
  MGNDHCBAPEN<int,_int>___ctor(pMVar3,0,0,Method_MGNDHCBAPEN<int,_int>__ctor__);
  ppMVar4 = &(__this->fields).JGLNHNCBFOD;
                    /* try { // try from 032781a0 to 033781a3 has its CatchHandler @ 032781c4 */
                    /* try { // try from 032781a4 to 033781df has its CatchHandler @ 03277e9c */
  *ppMVar4 = pMVar3;
                    /* catch() { ... } // from try @ 032780f0 with catch @ 032781a8 */
                    /* catch() { ... } // from try @ 032780b8 with catch @ 032781ac */
  thunk_FUN_01c20e04(ppMVar4,pMVar3);
                    /* catch() { ... } // from try @ 0327807c with catch @ 032781b0 */
                    /* catch() { ... } // from try @ 0327801c with catch @ 032781b4 */
                    /* catch() { ... } // from try @ 03277fd0 with catch @ 032781b8 */
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03278190 with catch @ 032781bc */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 03277fb4 with catch @ 032781c0 */
                    /* catch() { ... } // from try @ 03278198 with catch @ 032781c4
                       catch() { ... } // from try @ 032781a0 with catch @ 032781c4 */
                    /* catch() { ... } // from try @ 03278194 with catch @ 032781c8
                       catch() { ... } // from try @ 0327819c with catch @ 032781c8 */
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual void BHOPECNMJAC(AMJPDLOCCNP HEHMPFLAEGE, int MKACJBMOMHC, int JJBKAMIAMNE, bool OFKBEIFPFMN)  [RVA 0x31781DC]
// Nekki.SF2.GUI.Pvp.SelectModule$$BHOPECNMJAC @ RVA 0x31781DC

void Nekki_SF2_GUI_Pvp_SelectModule__BHOPECNMJAC
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t HEHMPFLAEGE,int32_t MKACJBMOMHC,
               int32_t JJBKAMIAMNE,bool OFKBEIFPFMN,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 032781e0 to 033781e3 has its CatchHandler @ 0327820c */
                    /* try { // try from 032781e4 to 0337821b has its CatchHandler @ 03277e9c */
  if ((DAT_04566961 & 1) == 0) {
                    /* catch() { ... } // from try @ 032781e0 with catch @ 0327820c */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0327821c to 0337822f has its CatchHandler @ 032782a8 */
    DAT_04566961 = 1;
  }
  if (HEHMPFLAEGE == 1) {
                    /* catch() { ... } // from try @ 0327813c with catch @ 03278238 */
    cVar1 = (__this->fields).FODJGPABKLP;
  }
  else {
    if (HEHMPFLAEGE != 0) goto LAB_03278240;
    cVar1 = (__this->fields).FPFGDOBNLCP;
                    /* catch() { ... } // from try @ 0327818c with catch @ 03278230
                       try { // try from 03278230 to 0337824f has its CatchHandler @ 03277e9c */
  }
  if (cVar1 != '\0') {
    return;
  }
LAB_03278240:
  __this_00 = (__this->fields)._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
                    /* try { // try from 03278250 to 03378253 has its CatchHandler @ 0327827c */
                    /* try { // try from 03278254 to 0337828b has its CatchHandler @ 03277e9c */
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__MoveSelection
              (__this_00,HEHMPFLAEGE,MKACJBMOMHC,JJBKAMIAMNE,(__this->fields).selectorMoveTime,
               (MethodInfo *)0x0);
    if ((!OFKBEIFPFMN) || ((__this->fields).LGJBHOIAOOG != false)) {
                    /* catch() { ... } // from try @ 03278250 with catch @ 0327827c */
      return;
    }
    (__this->fields).LGJBHOIAOOG = true;
                    /* try { // try from 0327828c to 03378293 has its CatchHandler @ 032782a8 */
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 03278294 to 0337829f has its CatchHandler @ 03277e9c */
    pSVar4 = Nekki_SF2_GUI_Pvp_SelectModule__ONFNOHDJKPM(__this,method_00);
    if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
                    /* try { // try from 032782a0 to 033782a7 has its CatchHandler @ 032782a8 */
      pPVar6 = pPVar3->klass;
      uVar2._0_1_ = (pPVar6->_2).rank;
      uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0327821c with catch @ 032782a8
                       catch() { ... } // from try @ 0327828c with catch @ 032782a8
                       catch() { ... } // from try @ 032782a0 with catch @ 032782a8 */
      uVar7 = (ulong)uVar2;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar6->vtable + *piVar8;
            goto LAB_032782f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_032782f8:
                    /* WARNING: Could not recover jumptable at 0x03278318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void FNLHNDOFOIG(AMJPDLOCCNP HEHMPFLAEGE, bool IFNFDFALLMG = True)  [RVA 0x31783B8]
// Nekki.SF2.GUI.Pvp.SelectModule$$FNLHNDOFOIG @ RVA 0x31783B8

void Nekki_SF2_GUI_Pvp_SelectModule__FNLHNDOFOIG
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t HEHMPFLAEGE,bool IFNFDFALLMG,
               MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x032783c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._11_PCJCDPOMJJN.methodPtr)
            (__this,(ulong)(uint)HEHMPFLAEGE,(ulong)IFNFDFALLMG,
             (__this->klass->vtable)._11_PCJCDPOMJJN.method);
  return;
}


// ===== public virtual bool CanCurrentItemSelected(AMJPDLOCCNP OGPGLGPMEPD)  [RVA 0x31783C8]
// Nekki.SF2.GUI.Pvp.SelectModule$$CanCurrentItemSelected @ RVA 0x31783C8

bool Nekki_SF2_GUI_Pvp_SelectModule__CanCurrentItemSelected
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  return true;
}


// ===== public void remove_OnPlayersBack(Action CJNHFNHJHPE)  [RVA 0x31783D0]
// Nekki.SF2.GUI.Pvp.SelectModule$$remove_OnPlayersBack @ RVA 0x31783D0

void Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersBack
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566962 & 1) == 0) {
                    /* try { // try from 032783f4 to 03378503 has its CatchHandler @ 032783f4
                       catch() { ... } // from try @ 032783f4 with catch @ 032783f4
                       catch() { ... } // from try @ 032785fc with catch @ 032783f4
                       catch() { ... } // from try @ 03278654 with catch @ 032783f4
                       catch() { ... } // from try @ 032786a0 with catch @ 032783f4
                       catch() { ... } // from try @ 032786e0 with catch @ 032783f4
                       catch() { ... } // from try @ 0327871c with catch @ 032783f4
                       catch() { ... } // from try @ 03278738 with catch @ 032783f4
                       catch() { ... } // from try @ 03278768 with catch @ 032783f4 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566962 = 1;
  }
  ppSVar4 = &(__this->fields).KNIDPDCJJLG;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== protected bool ONKNKLHEGGN(AMJPDLOCCNP DLMKDLJEAPM)  [RVA 0x3178320]
// Nekki.SF2.GUI.Pvp.SelectModule$$ONKNKLHEGGN @ RVA 0x3178320

bool Nekki_SF2_GUI_Pvp_SelectModule__ONKNKLHEGGN
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t DLMKDLJEAPM,MethodInfo *method)

{
  if (DLMKDLJEAPM == 1) {
    return (__this->fields).FODJGPABKLP != false;
  }
  if (DLMKDLJEAPM == 0) {
    return (__this->fields).FPFGDOBNLCP;
  }
  return false;
}


// ===== private IEnumerator ONFNOHDJKPM()  [RVA 0x317834C]
// Nekki.SF2.GUI.Pvp.SelectModule$$ONFNOHDJKPM @ RVA 0x317834C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_SelectModule__ONFNOHDJKPM
          (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566963 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_TypeInfo);
    DAT_04566963 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== protected virtual void COFBGCFPCPM(AMJPDLOCCNP FGBMMFIFMGM)  [RVA 0x3178494]
// Nekki.SF2.GUI.Pvp.SelectModule$$COFBGCFPCPM @ RVA 0x3178494

void Nekki_SF2_GUI_Pvp_SelectModule__COFBGCFPCPM
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t FGBMMFIFMGM,MethodInfo *method)

{
  char cVar1;
  System_Action_o *pSVar2;
  
  if (FGBMMFIFMGM == 1) {
    cVar1 = (__this->fields).FODJGPABKLP;
  }
  else {
    if (FGBMMFIFMGM != 0) {
      return;
    }
    cVar1 = (__this->fields).FPFGDOBNLCP;
  }
  if (cVar1 != '\0') {
    return;
  }
  pSVar2 = (__this->fields).KNIDPDCJJLG;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032784d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RemoveControlListener()  [RVA 0x3177918]
// Nekki.SF2.GUI.Pvp.SelectModule$$RemoveControlListener @ RVA 0x3177918

void Nekki_SF2_GUI_Pvp_SelectModule__RemoveControlListener
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_04566964 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    DAT_04566964 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    if ((__this != (Nekki_SF2_GUI_Pvp_SelectModule_o *)0x0) &&
       (System_Action<Int32Enum,_int,_Int32Enum>___ctor(), __this_00 != (OCOAGJDCJPL_o *)0x0)) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void JMOMGHNMHGM()  [RVA 0x31784DC]
// Nekki.SF2.GUI.Pvp.SelectModule$$JMOMGHNMHGM @ RVA 0x31784DC

void Nekki_SF2_GUI_Pvp_SelectModule__JMOMGHNMHGM
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void add_OnPlayersBack(Action CJNHFNHJHPE)  [RVA 0x31784E0]
// Nekki.SF2.GUI.Pvp.SelectModule$$add_OnPlayersBack @ RVA 0x31784E0

void Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersBack
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566965 & 1) == 0) {
                    /* try { // try from 03278504 to 0337850b has its CatchHandler @ 032786c4 */
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566965 = 1;
  }
  ppSVar4 = &(__this->fields).KNIDPDCJJLG;
  a = *ppSVar4;
                    /* try { // try from 0327852c to 03378533 has its CatchHandler @ 032786ac */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03278578 to 0337859b has its CatchHandler @ 032786a8 */
  FUN_01babc64(pSVar2);
}


// ===== protected virtual void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x317857C]
// Nekki.SF2.GUI.Pvp.SelectModule$$BEBGOPNMHON @ RVA 0x317857C

void Nekki_SF2_GUI_Pvp_SelectModule__BEBGOPNMHON
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  int32_t MKACJBMOMHC;
  int32_t JJBKAMIAMNE;
  NLIDHEAMLMC_o *pNVar4;
  
  uVar3 = (ulong)(uint)NAIJBCMHBFK;
  if ((DAT_04566966 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar3);
    DAT_04566966 = 1;
    uVar3 = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar3 = extraout_x1_00;
  }
  if (DAT_04565e5c == '\0') {
                    /* try { // try from 032785d8 to 033785fb has its CatchHandler @ 032786a4 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar3);
    DAT_04565e5c = '\x01';
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 032785fc to 03378633 has its CatchHandler @ 032783f4 */
  }
  pNVar4 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar4 == (NLIDHEAMLMC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0327852c with catch @ 032786ac */
    FUN_01bab8c8();
  }
  iVar1 = (pNVar4->fields).OFFPEKODFPE;
  bVar2 = DANCCJHADOA__MBCGIMNBKAB(AAJGEHHPMGH,(MethodInfo *)0x0);
  if (bVar2) {
    JJBKAMIAMNE = -1;
  }
  else {
                    /* try { // try from 03278634 to 0337863b has its CatchHandler @ 0327871c */
    bVar2 = DANCCJHADOA__OCGAEMGAAOJ(AAJGEHHPMGH,(MethodInfo *)0x0);
    if (!bVar2) {
                    /* try { // try from 03278654 to 03378687 has its CatchHandler @ 032783f4 */
      bVar2 = DANCCJHADOA__DBKHIMGPCBH(AAJGEHHPMGH,(MethodInfo *)0x0);
      if (bVar2) {
        MKACJBMOMHC = -1;
      }
      else {
        bVar2 = DANCCJHADOA__PCONDENPDBK(AAJGEHHPMGH,(MethodInfo *)0x0);
        if (!bVar2) {
                    /* try { // try from 0327869c to 0337869f has its CatchHandler @ 032786b0 */
                    /* try { // try from 032786a0 to 033786db has its CatchHandler @ 032783f4 */
                    /* catch() { ... } // from try @ 032785d8 with catch @ 032786a4 */
                    /* catch() { ... } // from try @ 03278578 with catch @ 032786a8 */
          return;
        }
        MKACJBMOMHC = 1;
      }
                    /* try { // try from 03278688 to 0337868b has its CatchHandler @ 032786bc */
      JJBKAMIAMNE = 0;
      goto LAB_0327868c;
    }
    JJBKAMIAMNE = 1;
  }
  MKACJBMOMHC = 0;
                    /* try { // try from 03278650 to 03378653 has its CatchHandler @ 032786c0 */
LAB_0327868c:
                    /* try { // try from 0327868c to 0337868f has its CatchHandler @ 032786b8 */
                    /* try { // try from 03278690 to 03378693 has its CatchHandler @ 032786b4 */
                    /* try { // try from 03278694 to 03378697 has its CatchHandler @ 032786b0 */
                    /* try { // try from 03278698 to 0337869b has its CatchHandler @ 032786b4 */
  Nekki_SF2_GUI_Pvp_SelectModule__OGLMEBIKJLP
            (__this,(uint)(iVar1 != OPHMGAKOJLP),MKACJBMOMHC,JJBKAMIAMNE,method);
  return;
}


// ===== protected virtual void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x31786B0]
// Nekki.SF2.GUI.Pvp.SelectModule$$GKHAKLDEIJI @ RVA 0x31786B0

void Nekki_SF2_GUI_Pvp_SelectModule__GKHAKLDEIJI
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 uVar1;
  NLIDHEAMLMC_o *pNVar2;
  Nekki_SF2_GUI_Pvp_SelectModule_c *pNVar3;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 03278694 with catch @ 032786b0
                       catch() { ... } // from try @ 0327869c with catch @ 032786b0 */
  uVar4 = (ulong)(uint)NAIJBCMHBFK;
                    /* catch() { ... } // from try @ 03278690 with catch @ 032786b4
                       catch() { ... } // from try @ 03278698 with catch @ 032786b4 */
                    /* catch() { ... } // from try @ 0327868c with catch @ 032786b8 */
                    /* catch() { ... } // from try @ 03278688 with catch @ 032786bc */
                    /* catch() { ... } // from try @ 03278650 with catch @ 032786c0 */
                    /* catch() { ... } // from try @ 03278504 with catch @ 032786c4 */
  if ((DAT_04566967 & 1) == 0) {
                    /* try { // try from 032786dc to 033786df has its CatchHandler @ 03278700 */
                    /* try { // try from 032786e0 to 03378707 has its CatchHandler @ 032783f4 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar4);
    DAT_04566967 = 1;
    uVar4 = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar4 = extraout_x1_00;
  }
                    /* catch() { ... } // from try @ 032786dc with catch @ 03278700 */
                    /* try { // try from 03278708 to 0337871b has its CatchHandler @ 0327877c */
  if (DAT_04565e5c == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar4);
                    /* catch() { ... } // from try @ 03278634 with catch @ 0327871c
                       try { // try from 0327871c to 03378733 has its CatchHandler @ 032783f4 */
    DAT_04565e5c = '\x01';
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03278734 to 03378737 has its CatchHandler @ 03278758 */
                    /* try { // try from 03278738 to 0337875f has its CatchHandler @ 032783f4 */
  pNVar2 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar2 != (NLIDHEAMLMC_o *)0x0) {
    uVar4 = (ulong)((pNVar2->fields).OFFPEKODFPE != OPHMGAKOJLP);
    if (AAJGEHHPMGH == 0) {
      pNVar3 = __this->klass;
      uVar1 = 1;
    }
    else {
      if (AAJGEHHPMGH != 1) {
        return;
      }
                    /* catch() { ... } // from try @ 03278734 with catch @ 03278758 */
                    /* try { // try from 03278760 to 03378767 has its CatchHandler @ 0327877c */
                    /* try { // try from 03278768 to 03378773 has its CatchHandler @ 032783f4 */
      (*(__this->klass->vtable)._16_COFBGCFPCPM.methodPtr)
                (__this,uVar4,(__this->klass->vtable)._16_COFBGCFPCPM.method);
      pNVar3 = __this->klass;
                    /* try { // try from 03278774 to 0337877b has its CatchHandler @ 0327877c */
                    /* catch() { ... } // from try @ 03278708 with catch @ 0327877c
                       catch() { ... } // from try @ 03278760 with catch @ 0327877c
                       catch() { ... } // from try @ 03278774 with catch @ 0327877c */
      uVar1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x032787a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar3->vtable)._14_FNLHNDOFOIG.methodPtr)
              (__this,uVar4,uVar1,(pNVar3->vtable)._14_FNLHNDOFOIG.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual string ItemTemplate(AMJPDLOCCNP OGPGLGPMEPD)  [RVA 0x31787C0]
// Nekki.SF2.GUI.Pvp.SelectModule$$ItemTemplate @ RVA 0x31787C0

System_String_o *
Nekki_SF2_GUI_Pvp_SelectModule__ItemTemplate
          (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  if ((DAT_04566968 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/,OGPGLGPMEPD);
    DAT_04566968 = 1;
  }
  return StringLiteral_1/*""*/;
}


// ===== protected override void BJBEBBGINAH()  [RVA 0x3178800]
// Nekki.SF2.GUI.Pvp.SelectModule$$BJBEBBGINAH @ RVA 0x3178800

void Nekki_SF2_GUI_Pvp_SelectModule__BJBEBBGINAH
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_SelectModule_o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  System_Action_T0__T1__T2__o *pSVar4;
  System_Enum_o *pSVar5;
  long lVar6;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar7;
  MethodInfo *method_00;
  OCOAGJDCJPL_o *__this_01;
  JPGJLKENNCC_o *__this_02;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_04566969 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    DAT_04566969 = 1;
  }
  Nekki_SF2_GUI_UIModule__BJBEBBGINAH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ABEMBBBAFPP(__this_00,method_00);
  (*(__this->klass->vtable)._8_SetSecondPlayerAvailable.methodPtr)
            (__this,(ulong)bVar1,(__this->klass->vtable)._8_SetSecondPlayerAvailable.method);
  (*(__this->klass->vtable)._9_FDDCDDKINHH.methodPtr)
            (__this,(__this->klass->vtable)._9_FDDCDDKINHH.method);
  (*(__this->klass->vtable)._12_HCKMKFBGPIM.methodPtr)
            (__this,(__this->klass->vtable)._12_HCKMKFBGPIM.method);
  pUVar2 = (__this->fields)._shadowImage;
  if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 032788c0 to 03378953 has its CatchHandler @ 032788c0
                       catch() { ... } // from try @ 032788c0 with catch @ 032788c0
                       catch() { ... } // from try @ 0327895c with catch @ 032788c0
                       catch() { ... } // from try @ 032789b4 with catch @ 032788c0
                       catch() { ... } // from try @ 032789d8 with catch @ 032788c0
                       catch() { ... } // from try @ 03278a10 with catch @ 032788c0 */
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (0,0,0,0,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
    pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
      __this_01 = (pNVar3->fields).KIHMKIEFOEI;
      pSVar4 = (System_Action_T0__T1__T2__o *)
               thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
      System_Action<Int32Enum,_int,_Int32Enum>___ctor();
      local_34 = 0;
      pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
      if (__this_01 != (OCOAGJDCJPL_o *)0x0) {
        FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                  ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar4,pSVar5,
                   Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
        pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
          __this_02 = (pNVar3->fields).GMLEPHMBMPD;
          pSVar4 = (System_Action_T0__T1__T2__o *)
                   thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 03278954 to 0337895b has its CatchHandler @ 032789bc */
                    /* try { // try from 0327895c to 033789af has its CatchHandler @ 032788c0 */
          System_Action<Int32Enum,_int,_Int32Enum>___ctor();
          local_38 = 0;
          pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
          if (__this_02 != (JPGJLKENNCC_o *)0x0) {
            FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                      ((FMKGOOONJKB_T0__T1__T2__o *)__this_02,pSVar4,pSVar5,
                       Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
            lVar6 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01b81620();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
                    /* try { // try from 032789b0 to 033789b3 has its CatchHandler @ 032789b8 */
                    /* try { // try from 032789b4 to 033789d3 has its CatchHandler @ 032788c0 */
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032789b0 with catch @ 032789b8
                        */
              lVar6 = FUN_01b81620();
            }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03278954 with catch @ 032789bc
                        */
            if ((**(long **)(lVar6 + 0xb8) != 0) &&
               (pNVar7 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)
                          (**(long **)(lVar6 + 0xb8) + 200),
               pNVar7 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
                    /* try { // try from 032789d4 to 033789d7 has its CatchHandler @ 03278a00 */
                    /* try { // try from 032789d8 to 03378a07 has its CatchHandler @ 032788c0 */
              Nekki_SF2_GUI_Pvp_PvPHintController__SetLeftHintListAnimationAvailable
                        (pNVar7,true,(MethodInfo *)0x0);
              lVar6 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01b81620();
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 032789d4 with catch @ 03278a00 */
                lVar6 = FUN_01b81620();
              }
                    /* try { // try from 03278a08 to 03378a0f has its CatchHandler @ 03278a24 */
                    /* try { // try from 03278a10 to 03378a1b has its CatchHandler @ 032788c0 */
              if ((**(long **)(lVar6 + 0xb8) != 0) &&
                 (pNVar7 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)
                            (**(long **)(lVar6 + 0xb8) + 200),
                 pNVar7 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
                    /* try { // try from 03278a1c to 03378a23 has its CatchHandler @ 03278a24 */
                Nekki_SF2_GUI_Pvp_PvPHintController__SetRightHintListAnimationAvailable
                          (pNVar7,true,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03278a08 with catch @ 03278a24
                       catch(type#2 @ 00000000) { ... } // from try @ 03278a1c with catch @ 03278a24
                        */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnPlayersConfirm(Action<string, string> CJNHFNHJHPE)  [RVA 0x3178A3C]
// Nekki.SF2.GUI.Pvp.SelectModule$$remove_OnPlayersConfirm @ RVA 0x3178A3C

void Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,
               System_Action_string__string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__string__o *pSVar5;
  System_Action_string__string__o **ppSVar6;
  System_Action_string__string__o *source;
  
  if ((DAT_0456696a & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    DAT_0456696a = 1;
  }
  ppSVar6 = &(__this->fields).ICFAKOCJNGE;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string,_string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string,_string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

