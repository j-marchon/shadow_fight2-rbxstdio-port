// TypeDefIndex 2097
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class PlayerInfoHeaderView : MonoBehaviour
// Fields:
//   private const float KKEAMMBPAJE = 1.3;
//   private GameObject _ratingContainer; // 0x20
//   private GameObject _clanContainer; // 0x28
//   private LabelAlias _nameLabel; // 0x30
//   private LabelAlias _playerIdLabel; // 0x38
//   private LabelAlias _danLabel; // 0x40
//   private ResolutionImage _danImage; // 0x48
//   private SFButton _clanButton; // 0x50
//   private LabelAlias _clanName; // 0x58
//   private GameObject _clanLogoMount; // 0x60
//   private ResolutionImage _clanEmptyImage; // 0x68
//   private ResolutionButton _ratingBtn; // 0x70
//   private EOLFEKNCPLM MLAAJICBOAD; // 0x78

// ===== private void OnDestroy()  [RVA 0x32C7A64]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$OnDestroy @ RVA 0x32C7A64

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_00;
  System_Action_EOLFEKNCPLM__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_045674f9 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_NOJIAJAMFPH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_OGPINCKBAKE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045674f9 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields)._clanButton;
  if (pSVar2 != (SFButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      __this_00 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_EOLFEKNCPLM__o *)
                    thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
        Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__remove_OnRefreshPlayer
                  (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32C7B74]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$.ctor @ RVA 0x32C7B74

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void PCJNNJKEJJE(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x32C7B7C]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$PCJNNJKEJJE @ RVA 0x32C7B7C

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCJNNJKEJJE
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  OJEHKJHEBID_o *PBNPKBJKFHE;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_045674fa & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    DAT_045674fa = 1;
  }
  if (IMMNELPBGIF != (KEFHDOHHHML_o *)0x0) {
    PBNPKBJKFHE = (OJEHKJHEBID_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OCFFFLNEKHD
                (__this,PBNPKBJKFHE,(PBNPKBJKFHE->fields).GJNOEAKNMOG,in_x3);
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCFDKMIEHNG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKPLBNEDFGN()  [RVA 0x32C7E1C]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$FKPLBNEDFGN @ RVA 0x32C7E1C

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__FKPLBNEDFGN
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  int32_t startIndex;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  System_String_o *pSVar2;
  RaidLeaderboardsManager_o *__this_00;
  EOLFEKNCPLM_o *pEVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  GKLPDMLELJF_o *pGVar4;
  System_String_o *pSVar5;
  int32_t local_24;
  
  if ((DAT_045674fb & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_7231/*"ID: "*/);
    DAT_045674fb = 1;
  }
  pEVar3 = (__this->fields).MLAAJICBOAD;
  if (((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
      (pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 != (GKLPDMLELJF_o *)0x0)) &&
     (pNVar1 = (__this->fields)._nameLabel, pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,(pGVar4->fields).LLBEKLPKDHK,(pNVar1->klass->vtable)._75_set_text.method);
    local_24 = (pGVar4->fields).PEBHLKLGDBM;
    pNVar1 = (__this->fields)._danLabel;
                    /* try { // try from 033c7e90 to 034c7e97 has its CatchHandler @ 033c8300 */
    pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033c7ea4 to 034c7eaf has its CatchHandler @ 033c7f68 */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
      pSVar2 = StringLiteral_7231/*"ID: "*/;
                    /* try { // try from 033c7eb8 to 034c7ebf has its CatchHandler @ 033c7f5c */
      pSVar5 = (pGVar4->fields).FFOIEHLJLDA;
      if (pSVar5 != (System_String_o *)0x0) {
                    /* try { // try from 033c7ed4 to 034c7edb has its CatchHandler @ 033c7f74 */
        startIndex = System_String__IndexOf(pSVar5,0x23,(MethodInfo *)0x0);
        if (-1 < startIndex) {
          pSVar5 = System_String__Substring(pSVar5,startIndex,(MethodInfo *)0x0);
          pSVar2 = System_String__Concat(pSVar2,pSVar5,(MethodInfo *)0x0);
        }
        pNVar1 = (__this->fields)._playerIdLabel;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033c7f1c to 034c7f23 has its CatchHandler @ 033c7f64 */
          (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                    (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
          __this_01 = (__this->fields)._danImage;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033c7f38 to 034c7f3b has its CatchHandler @ 033c7f70 */
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 033c7f40 to 034c7f43 has its CatchHandler @ 033c7f60 */
          __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                    /* try { // try from 033c7f48 to 034c7f4b has its CatchHandler @ 033c7f68 */
                    /* try { // try from 033c7f50 to 034c7f57 has its CatchHandler @ 033c7f64 */
          if ((__this_00 != (RaidLeaderboardsManager_o *)0x0) &&
             (pSVar2 = RaidLeaderboardsManager__POKFLHLAHNM
                                 (__this_00,(__this->fields).MLAAJICBOAD,(MethodInfo *)0x0),
             __this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                    /* try { // try from 033c7f58 to 034c7f8b has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c7eb8 with catch @ 033c7f5c */
                    /* catch() { ... } // from try @ 033c7f40 with catch @ 033c7f60 */
                    /* catch() { ... } // from try @ 033c7f1c with catch @ 033c7f64
                       catch() { ... } // from try @ 033c7f50 with catch @ 033c7f64 */
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,pSVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033c7ea4 with catch @ 033c7f68
                       catch() { ... } // from try @ 033c7f48 with catch @ 033c7f68 */
                    /* catch() { ... } // from try @ 033c7f38 with catch @ 033c7f70 */
                    /* catch() { ... } // from try @ 033c7ed4 with catch @ 033c7f74 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PCFDKMIEHNG()  [RVA 0x32C7CA8]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$PCFDKMIEHNG @ RVA 0x32C7CA8

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCFDKMIEHNG
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *root;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *BKJJFPJOCGP;
  MethodInfo *method_00;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  if ((DAT_045674fc & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* try { // try from 033c7cdc to 034c7d27 has its CatchHandler @ 033c85b0 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_9528/*"NoClanLabel"*/);
    DAT_045674fc = 1;
  }
  __this_00 = (__this->fields)._clanLogoMount;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    root = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__DeleteAllChildrenObjects(root,(MethodInfo *)0x0);
    pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar4 = Method_System_Array_Empty<string>__;
                    /* try { // try from 033c7d2c to 034c7d33 has its CatchHandler @ 033c85a4 */
    lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                    /* try { // try from 033c7d38 to 034c7d43 has its CatchHandler @ 033c8598 */
    if (lVar6 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar6 = *(long *)(lVar4 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
                    /* try { // try from 033c7d5c to 034c7d67 has its CatchHandler @ 033c82fc */
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033c7d68 to 034c7e8f has its CatchHandler @ 033c79c8 */
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    uVar2 = StringLiteral_9528/*"NoClanLabel"*/;
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar3->klass;
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      uVar1._0_1_ = (pIVar7->_2).rank;
      uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar7->vtable + (*piVar9 + 0xc);
            goto LAB_033c7de8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033c7de8:
      method_00 = pVVar5->method;
      BKJJFPJOCGP = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,uVar10);
      Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OCFFFLNEKHD
                (__this,(OJEHKJHEBID_o *)0x0,BKJJFPJOCGP,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OCFFFLNEKHD(OJEHKJHEBID PBNPKBJKFHE, string BKJJFPJOCGP)  [RVA 0x32C7BF4]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$OCFFFLNEKHD @ RVA 0x32C7BF4

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OCFFFLNEKHD
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,System_String_o *BKJJFPJOCGP,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  
  pNVar1 = (__this->fields)._clanName;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,BKJJFPJOCGP,(pNVar1->klass->vtable)._75_set_text.method);
    __this_00 = (__this->fields)._clanEmptyImage;
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._clanLogoMount;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar3,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._clanLogoMount;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 033c7c80 to 034c7ca7 has its CatchHandler @ 033c85a8 */
          KFCFGKEHPNK__LEIGOOFFFPE(pUVar3,PBNPKBJKFHE,false,1.3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NMAOIPMGDIG()  [RVA 0x32C7F7C]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$NMAOIPMGDIG @ RVA 0x32C7F7C

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__NMAOIPMGDIG
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  RaidLeaderboardsManager_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar1;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_Events_UnityEvent_o *__this_02;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  
                    /* try { // try from 033c7f8c to 034c7f8f has its CatchHandler @ 033c8144 */
  if ((DAT_045674fd & 1) == 0) {
                    /* try { // try from 033c7fa4 to 034c7fab has its CatchHandler @ 033c8258 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033c7fac to 034c7fc7 has its CatchHandler @ 033c79c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_JJMDGMDDDAA__);
                    /* try { // try from 033c7fc8 to 034c7fdf has its CatchHandler @ 033c82dc */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_045674fd = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033c7ff0 to 034c7ff3 has its CatchHandler @ 033c8298 */
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* try { // try from 033c7ff4 to 034c8007 has its CatchHandler @ 033c82c8 */
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if ((__this_00 != (RaidLeaderboardsManager_o *)0x0) &&
     (__this_01 = RaidLeaderboardsManager__FKNGMLAKOOC(__this_00,(__this->fields).MLAAJICBOAD,(MethodInfo *)0x0)
     , __this_01 != (System_Collections_Generic_List_string__o *)0x0)) {
                    /* try { // try from 033c8010 to 034c8033 has its CatchHandler @ 033c82c4 */
    pNVar2 = (__this->fields)._ratingBtn;
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,0,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 033c8050 to 034c8053 has its CatchHandler @ 033c8294 */
      pNVar2 = (__this->fields)._ratingBtn;
                    /* try { // try from 033c8054 to 034c807b has its CatchHandler @ 033c82c0 */
      pSVar1 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,1,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                  (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,pSVar1,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._ratingBtn;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* try { // try from 033c8084 to 034c808f has its CatchHandler @ 033c8290 */
          __this_02 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 033c809c to 034c80c7 has its CatchHandler @ 033c82bc */
          UnityEngine_Events_UnityAction___ctor();
          if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 033c80c8 to 034c80ef has its CatchHandler @ 033c82b8 */
            UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NOJIAJAMFPH()  [RVA 0x32C80D4]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$NOJIAJAMFPH @ RVA 0x32C80D4

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__NOJIAJAMFPH
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *pGVar2;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  RaidClansManager_o *__this_01;
  EOLFEKNCPLM_o *pEVar3;
  
  if ((DAT_045674fe & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033c80fc to 034c811f has its CatchHandler @ 033c82b4 */
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    DAT_045674fe = 1;
  }
  pEVar3 = (__this->fields).MLAAJICBOAD;
  if ((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
                    /* try { // try from 033c8120 to 034c812f has its CatchHandler @ 033c828c */
    bVar1 = GKLPDMLELJF__ODJAMCJCHGG(pGVar2,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 033c8190 to 034c8193 has its CatchHandler @ 033c85ac */
                    /* try { // try from 033c8194 to 034c8197 has its CatchHandler @ 033c85a0 */
                    /* try { // try from 033c8198 to 034c819b has its CatchHandler @ 033c85ac */
      return;
    }
    __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 033c8130 to 034c813b has its CatchHandler @ 033c8288 */
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DialogCanvasController__Show(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033c813c to 034c818f has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c7f8c with catch @ 033c8144 */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      pEVar3 = (__this->fields).MLAAJICBOAD;
      if (((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
          (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) &&
         (__this_01 != (RaidClansManager_o *)0x0)) {
        RaidClansManager__ILINPANMKLF
                  (__this_01,(pGVar2->fields).ADEIKPGDIPM.fields.value,(MethodInfo *)0x0);
        EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033c819c to 034c819f has its CatchHandler @ 033c859c */
  FUN_01bab8c8();
}


// ===== private void AEFFKMDOLHP(bool CGDBMBLKBAB)  [RVA 0x32C81A0]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$AEFFKMDOLHP @ RVA 0x32C81A0

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__AEFFKMDOLHP
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,bool CGDBMBLKBAB,
               MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *pGVar2;
  RaidClansManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *HFHIAKJDOGK;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  EOLFEKNCPLM_o *pEVar3;
  int64_t KNPEFJLKLAL;
  
  method_00 = (MethodInfo *)(ulong)CGDBMBLKBAB;
                    /* try { // try from 033c81ac to 034c81af has its CatchHandler @ 033c82f8 */
                    /* try { // try from 033c81b0 to 034c81b3 has its CatchHandler @ 033c82f4 */
                    /* try { // try from 033c81b4 to 034c81cf has its CatchHandler @ 033c79c8 */
  if ((DAT_045674ff & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033c81d0 to 034c81df has its CatchHandler @ 033c827c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
                    /* try { // try from 033c81e8 to 034c81f7 has its CatchHandler @ 033c82ac */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_PCJNNJKEJJE__);
    DAT_045674ff = 1;
    method_00 = extraout_x1;
  }
  if (!CGDBMBLKBAB) {
    pEVar3 = (__this->fields).MLAAJICBOAD;
                    /* try { // try from 033c8200 to 034c8203 has its CatchHandler @ 033c8278 */
    if ((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
       (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
                    /* try { // try from 033c820c to 034c820f has its CatchHandler @ 033c8274 */
      bVar1 = GKLPDMLELJF__ODJAMCJCHGG(pGVar2,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
      if (!bVar1) goto LAB_033c82a0;
                    /* try { // try from 033c8218 to 034c821b has its CatchHandler @ 033c8270 */
                    /* try { // try from 033c8224 to 034c8227 has its CatchHandler @ 033c826c */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033c8230 to 034c8233 has its CatchHandler @ 033c8268 */
      __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      pEVar3 = (__this->fields).MLAAJICBOAD;
                    /* try { // try from 033c823c to 034c823f has its CatchHandler @ 033c8264 */
      if ((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
         (pGVar2 = (pEVar3->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
                    /* try { // try from 033c8248 to 034c824b has its CatchHandler @ 033c8260 */
        KNPEFJLKLAL = (pGVar2->fields).ADEIKPGDIPM.fields.value;
                    /* try { // try from 033c8250 to 034c82eb has its CatchHandler @ 033c8658 */
                    /* catch() { ... } // from try @ 033c7fa4 with catch @ 033c8258 */
        HFHIAKJDOGK = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033c8248 with catch @ 033c8260 */
                    /* catch() { ... } // from try @ 033c823c with catch @ 033c8264 */
                    /* catch() { ... } // from try @ 033c8230 with catch @ 033c8268 */
                    /* catch() { ... } // from try @ 033c8224 with catch @ 033c826c */
                    /* catch() { ... } // from try @ 033c8218 with catch @ 033c8270 */
                    /* catch() { ... } // from try @ 033c820c with catch @ 033c8274 */
                    /* catch() { ... } // from try @ 033c8200 with catch @ 033c8278 */
        System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 033c81d0 with catch @ 033c827c */
        if (__this_00 != (RaidClansManager_o *)0x0) {
                    /* catch() { ... } // from try @ 033c8130 with catch @ 033c8288 */
                    /* catch() { ... } // from try @ 033c8120 with catch @ 033c828c */
                    /* catch() { ... } // from try @ 033c8084 with catch @ 033c8290 */
                    /* catch() { ... } // from try @ 033c8050 with catch @ 033c8294 */
                    /* catch() { ... } // from try @ 033c7ff0 with catch @ 033c8298 */
          RaidClansManager__BGDACMBMPJP(__this_00,KNPEFJLKLAL,HFHIAKJDOGK,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033c80fc with catch @ 033c82b4 */
    FUN_01bab8c8();
  }
LAB_033c82a0:
                    /* catch() { ... } // from try @ 033c81e8 with catch @ 033c82ac */
  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCFDKMIEHNG(__this,method_00);
  return;
}


// ===== private void OGPINCKBAKE(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x32C82B8]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$OGPINCKBAKE @ RVA 0x32C82B8

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OGPINCKBAKE
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,
               EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 033c80c8 with catch @ 033c82b8 */
                    /* catch() { ... } // from try @ 033c809c with catch @ 033c82bc */
                    /* catch() { ... } // from try @ 033c8054 with catch @ 033c82c0 */
  (__this->fields).MLAAJICBOAD = HEHMPFLAEGE;
                    /* catch() { ... } // from try @ 033c8010 with catch @ 033c82c4 */
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 033c7ff4 with catch @ 033c82c8 */
  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__AEFFKMDOLHP(__this,false,method);
                    /* catch() { ... } // from try @ 033c7fc8 with catch @ 033c82dc */
  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__FKPLBNEDFGN(__this,method_00);
  return;
}


// ===== private void JJMDGMDDDAA()  [RVA 0x32C82E0]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$JJMDGMDDDAA @ RVA 0x32C82E0

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__JJMDGMDDDAA
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_00;
  
                    /* try { // try from 033c82ec to 034c8327 has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c81b0 with catch @ 033c82f4 */
                    /* catch() { ... } // from try @ 033c81ac with catch @ 033c82f8 */
  if ((DAT_04567500 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c7d5c with catch @ 033c82fc */
                    /* catch() { ... } // from try @ 033c7e90 with catch @ 033c8300 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567500 = 1;
  }
  __this_00 = DialogsOpener__OHIKPLPOJBK((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033c8328 to 034c832b has its CatchHandler @ 033c8574 */
                    /* try { // try from 033c832c to 034c8583 has its CatchHandler @ 033c79c8 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SwitchToPrevSeasonLeaderboard
                (__this_00,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void Init(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x32C8374]
// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$Init @ RVA 0x32C8374

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,
               EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool value;
  UnityEngine_Events_UnityAction_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  RaidLeaderboardsManager_o *__this_01;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_02;
  System_Action_EOLFEKNCPLM__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  SFButton_o *pSVar4;
  EOLFEKNCPLM_o **ppEVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  
  if ((DAT_04567501 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_NOJIAJAMFPH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_OGPINCKBAKE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567501 = 1;
  }
  ppEVar5 = &(__this->fields).MLAAJICBOAD;
  *ppEVar5 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar5,HEHMPFLAEGE);
  pSVar4 = (__this->fields)._clanButton;
  if (pSVar4 != (SFButton_o *)0x0) {
    pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar6,pUVar1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._clanButton;
      if (pSVar4 != (SFButton_o *)0x0) {
        pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__FKPLBNEDFGN(__this,method_00);
          pNVar2 = (__this->fields)._clanName;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                      (pNVar2,StringLiteral_1/*""*/,(pNVar2->klass->vtable)._75_set_text.method);
            __this_00 = (__this->fields)._clanEmptyImage;
            if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_01 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
              if (__this_01 != (RaidLeaderboardsManager_o *)0x0) {
                value = RaidLeaderboardsManager__CFGNIDNCLIL(__this_01,*ppEVar5,(MethodInfo *)0x0);
                if (value) {
                  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__NMAOIPMGDIG(__this,method_01);
                }
                pUVar3 = (__this->fields)._ratingContainer;
                if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  method_02 = (MethodInfo *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__AEFFKMDOLHP
                            (__this,false,method_02);
                  pUVar3 = (__this->fields)._clanContainer;
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
                    __this_02 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
                    CJNHFNHJHPE = (System_Action_EOLFEKNCPLM__o *)
                                  thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
                    /* catch() { ... } // from try @ 033c8328 with catch @ 033c8574 */
                    System_Action<object>___ctor();
                    if (__this_02 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
                    /* try { // try from 033c8584 to 034c8597 has its CatchHandler @ 033c8658 */
                    /* catch() { ... } // from try @ 033c7d38 with catch @ 033c8598
                       try { // try from 033c8598 to 034c85bf has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c819c with catch @ 033c859c */
                    /* catch() { ... } // from try @ 033c8194 with catch @ 033c85a0 */
                      Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__add_OnRefreshPlayer
                                (__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033c7d2c with catch @ 033c85a4 */
  FUN_01bab8c8();
}

