// TypeDefIndex 1096
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidViewContainer : MonoBehaviour
// Fields:
//   private Action<RaidViewContainer> FCHKBFCNOJL; // 0x20
//   private Action<RaidViewContainer> HNHLJHHKELD; // 0x28
//   private Action<RaidViewContainer> CKNOFAMLBDE; // 0x30
//   private const string JAAMFAFECGB = "raids_room";
//   private const string LHBPHKPILNP = "menu";
//   private RaidPlayersRoll _raidPlayersRoll; // 0x38
//   private RaidInfoSprite _raidInfoSprite; // 0x40
//   private bool <BOGAKJOFOEK>k__BackingField; // 0x48
//   public RaidViewController Controller; // 0x50
//   private static RaidViewContainer FFOLFLCMFCH; // 0x0

// ===== public void remove_OnForceClose(Action<RaidViewContainer> CJNHFNHJHPE)  [RVA 0x30E1710]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$remove_OnForceClose @ RVA 0x30E1710

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnForceClose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *source;
  
                    /* try { // try from 031e1714 to 032e1793 has its CatchHandler @ 031e18f8 */
  if ((DAT_045663b5 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    DAT_045663b5 = 1;
  }
  ppSVar6 = &(__this->fields).CKNOFAMLBDE;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* try { // try from 031e1794 to 032e18cf has its CatchHandler @ 031e1420 */
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void BLMMCMDLLDL(object IMMNELPBGIF)  [RVA 0x30E17C0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$BLMMCMDLLDL @ RVA 0x30E17C0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__BLMMCMDLLDL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_RaidViewContainer__o *pSVar1;
  
  pSVar1 = (__this->fields).FCHKBFCNOJL;
  if (pSVar1 != (System_Action_RaidViewContainer__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e17e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private RaidViewContainer GIENGNEGHPJ()  [RVA 0x30E17E8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$GIENGNEGHPJ @ RVA 0x30E17E8

Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GIENGNEGHPJ
          (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_01;
  System_Action_RaidInfoSprite__o *pSVar3;
  DialogsManager_o *pGVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_03;
  System_Action_BaseDialog__o *pSVar5;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI;
  MethodInfo *method_00;
  
  if ((DAT_045663b6 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_BLMMCMDLLDL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_KANFKOMJMHF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_OKGJAJMILMD__);
    FUN_01bab630(&StringLiteral_20430/*"raids_room"*/);
    DAT_045663b6 = 1;
    method = extraout_x1;
  }
  if (DAT_04566479 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,method);
    DAT_04566479 = '\x01';
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields,__this);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._raidInfoSprite;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__Init(pNVar2,(MethodInfo *)0x0);
                    /* try { // try from 031e18d0 to 032e18d7 has its CatchHandler @ 031e18f4 */
      __this_01 = (__this->fields)._raidPlayersRoll;
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
                    /* try { // try from 031e18d8 to 032e18db has its CatchHandler @ 031e1420 */
                    /* try { // try from 031e18dc to 032e18df has its CatchHandler @ 031e18e8 */
                    /* try { // try from 031e18e0 to 032e190f has its CatchHandler @ 031e1420 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e18dc with catch @ 031e18e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e16e0 with catch @ 031e18ec
                        */
        Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__Init(__this_01,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e1684 with catch @ 031e18f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e18d0 with catch @ 031e18f4
                        */
        pNVar2 = (__this->fields)._raidInfoSprite;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e1714 with catch @ 031e18f8
                        */
        pSVar3 = (System_Action_RaidInfoSprite__o *)
                 thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
        System_Action<object>___ctor();
                    /* try { // try from 031e1910 to 032e1913 has its CatchHandler @ 031e1928 */
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
                    /* catch() { ... } // from try @ 031e1910 with catch @ 031e1928 */
          Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnFightBtnClick
                    (pNVar2,pSVar3,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._raidInfoSprite;
          pSVar3 = (System_Action_RaidInfoSprite__o *)
                   thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnExitBtnClick
                      (pNVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 031e1968 to 032e198f has its CatchHandler @ 031e19a4 */
            if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
            if (bVar1) {
              if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031e1990 to 032e199b has its CatchHandler @ 031e1420 */
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031e199c to 032e19a3 has its CatchHandler @ 031e19a4 */
              if (DAT_0456647a == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e1968 with catch @ 031e19a4
                       catch(type#2 @ 00000000) { ... } // from try @ 031e199c with catch @ 031e19a4
                        */
                    /* try { // try from 031e19a8 to 032e1bd3 has its CatchHandler @ 031e19a8
                       catch() { ... } // from try @ 031e19a8 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1ca8 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1d68 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1d70 with catch @ 031e19a8
                       catch() { ... } // from try @ 031e1e3c with catch @ 031e19a8 */
                FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                DAT_0456647a = '\x01';
              }
              if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              method_00 = (MethodInfo *)0x0;
              bVar1 = System_String__op_Inequality
                                (PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField,
                                 StringLiteral_20430/*"raids_room"*/,(MethodInfo *)0x0);
              if (bVar1) {
                if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
                method_00 = (MethodInfo *)0x0;
                PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_20430/*"raids_room"*/,true,(MethodInfo *)0x0);
              }
            }
            pGVar4 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pGVar4 != (DialogsManager_o *)0x0) {
              DialogsManager__HAMCIMDBOCI(pGVar4,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__DNOPCPONLEN(__this_02,true,method_00);
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__KANFKOMJMHF
                        (__this_03,LMEHKLFGEHI,method_00);
              pGVar4 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
              pSVar5 = (System_Action_BaseDialog__o *)
                       thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
              System_Action<object>___ctor();
              if (pGVar4 != (DialogsManager_o *)0x0) {
                DialogsManager__JNDNMPDMDGB(pGVar4,pSVar5,(MethodInfo *)0x0);
                pGVar4 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
                pSVar5 = (System_Action_BaseDialog__o *)
                         thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                System_Action<object>___ctor();
                if (pGVar4 != (DialogsManager_o *)0x0) {
                  DialogsManager__EOAPHMAFKKP(pGVar4,pSVar5,(MethodInfo *)0x0);
                  return __this;
                }
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


// ===== public void add_OnFightBtnClick(Action<RaidViewContainer> CJNHFNHJHPE)  [RVA 0x30E1D2C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$add_OnFightBtnClick @ RVA 0x30E1D2C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnFightBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *a;
  
  if ((DAT_045663b7 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
                    /* try { // try from 031e1d5c to 032e1d5f has its CatchHandler @ 031e1d98 */
                    /* try { // try from 031e1d60 to 032e1d63 has its CatchHandler @ 031e1d94 */
    DAT_045663b7 = 1;
  }
                    /* try { // try from 031e1d64 to 032e1d67 has its CatchHandler @ 031e1d8c */
  ppSVar6 = &(__this->fields).FCHKBFCNOJL;
                    /* try { // try from 031e1d68 to 032e1d6b has its CatchHandler @ 031e19a8 */
                    /* try { // try from 031e1d6c to 032e1d6f has its CatchHandler @ 031e1d7c */
  a = *ppSVar6;
  do {
                    /* try { // try from 031e1d70 to 032e1dbb has its CatchHandler @ 031e19a8 */
                    /* catch() { ... } // from try @ 031e1c9c with catch @ 031e1d78 */
                    /* catch() { ... } // from try @ 031e1d6c with catch @ 031e1d7c */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 031e1c30 with catch @ 031e1da0 */
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 031e1c8c with catch @ 031e1d88 */
                    /* catch() { ... } // from try @ 031e1d64 with catch @ 031e1d8c */
                    /* catch() { ... } // from try @ 031e1c84 with catch @ 031e1d90 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
                    /* catch() { ... } // from try @ 031e1d60 with catch @ 031e1d94 */
                    /* catch() { ... } // from try @ 031e1d5c with catch @ 031e1d98 */
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 031e1dbc with catch @ 031e1dd4 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* catch() { ... } // from try @ 031e1bd4 with catch @ 031e1da4 */
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 031e1dbc to 032e1dbf has its CatchHandler @ 031e1dd4 */
  return;
}


// ===== private static void JBJJOIHNIDF(RaidViewContainer CJNHFNHJHPE)  [RVA 0x30E1DDC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$JBJJOIHNIDF @ RVA 0x30E1DDC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__JBJJOIHNIDF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_045663b8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045663b8 = 1;
  }
                    /* try { // try from 031e1e14 to 032e1e3b has its CatchHandler @ 031e1e50 */
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH = CJNHFNHJHPE;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields,
                     CJNHFNHJHPE);
  return;
}


// ===== public void SetButtonsEnabled(bool IHEPHBIPLPM)  [RVA 0x30E1E34]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetButtonsEnabled @ RVA 0x30E1E34

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetButtonsEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool IHEPHBIPLPM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
                    /* try { // try from 031e1e3c to 032e1e47 has its CatchHandler @ 031e19a8 */
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
                    /* try { // try from 031e1e48 to 032e1e4f has its CatchHandler @ 031e1e50 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetButtonsEnabled
              (__this_00,IHEPHBIPLPM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031e1e14 with catch @ 031e1e50
                       catch() { ... } // from try @ 031e1e48 with catch @ 031e1e50 */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x30E1E54]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$OnDestroy @ RVA 0x30E1E54

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  DialogsManager_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_01;
  RaidViewController_o **ppLVar1;
  SFRequestSender_o *pKVar2;
  MethodInfo *method_00;
  
  if ((DAT_045663b9 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_KANFKOMJMHF__);
    DAT_045663b9 = 1;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (DialogsManager_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    DialogsManager__JNDNMPDMDGB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__DNOPCPONLEN(__this_01,false,method_00);
    ppLVar1 = &(__this->fields).Controller;
    *ppLVar1 = (RaidViewController_o *)0x0;
    thunk_FUN_01c20e04(ppLVar1,0);
    pKVar2 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 != (SFRequestSender_o *)0x0) {
      (*(pKVar2->klass->vtable)._9_IKAAFAICDMD.methodPtr)
                (pKVar2,__this,(pKVar2->klass->vtable)._9_IKAAFAICDMD.method);
      if (DAT_04566479 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
        DAT_04566479 = '\x01';
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH =
           (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields,0);
      (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KANFKOMJMHF(BaseDialog LMEHKLFGEHI)  [RVA 0x30E1BFC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$KANFKOMJMHF @ RVA 0x30E1BFC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__KANFKOMJMHF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *extraout_x1;
  UnityEngine_Object_o *x;
  undefined1 auVar3 [16];
  
  if ((DAT_045663ba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
                    /* try { // try from 031e1c30 to 032e1c57 has its CatchHandler @ 031e1da0 */
    DAT_045663ba = 1;
    LMEHKLFGEHI = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar3._8_8_ = LMEHKLFGEHI;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,LMEHKLFGEHI);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
                    /* try { // try from 031e1c70 to 032e1c77 has its CatchHandler @ 031e1d9c */
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* try { // try from 031e1c84 to 032e1c8b has its CatchHandler @ 031e1d90 */
                    /* try { // try from 031e1c8c to 032e1c93 has its CatchHandler @ 031e1d88 */
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
                    /* try { // try from 031e1c9c to 032e1ca7 has its CatchHandler @ 031e1d78 */
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 031e1ca8 to 032e1d5b has its CatchHandler @ 031e19a8 */
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar2 + 0xb8) + 0x100) == 1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__SetRaidMode
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long GetCooldownFinishTime()  [RVA 0x30E1F74]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$GetCooldownFinishTime @ RVA 0x30E1F74

int64_t Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GetCooldownFinishTime
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar1;
  
  pNVar1 = (__this->fields)._raidInfoSprite;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    return (pNVar1->fields).HODAIAEDHBL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateCooldownFinishTime(long LFJGFLNMBMC)  [RVA 0x30E1F90]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdateCooldownFinishTime @ RVA 0x30E1F90

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateCooldownFinishTime
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,int64_t LFJGFLNMBMC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateCooldownFinishTime
              (__this_00,LFJGFLNMBMC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetRaidEndedState(bool INMJNAJNOAE)  [RVA 0x30E1FAC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetRaidEndedState @ RVA 0x30E1FAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetRaidEndedState
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool INMJNAJNOAE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState
              (__this_00,INMJNAJNOAE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateInsertedPlayer(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x30E1FCC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdateInsertedPlayer @ RVA 0x30E1FCC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateInsertedPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateInsertedPlayer
              (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsDestroyed()  [RVA 0x30E1FE8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$get_IsDestroyed @ RVA 0x30E1FE8

bool Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__get_IsDestroyed
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x30E1FF0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$GCGMACNOCJA @ RVA 0x30E1FF0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GCGMACNOCJA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void UpdateTimer(int PPGONJFLHLH)  [RVA 0x30E1FFC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdateTimer @ RVA 0x30E1FFC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateTimer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,int32_t PPGONJFLHLH,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateTimer(__this_00,PPGONJFLHLH,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetTimerVisible(bool CJNHFNHJHPE)  [RVA 0x30E2018]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetTimerVisible @ RVA 0x30E2018

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetTimerVisible
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void POJFLABIGPH()  [RVA 0x30E2038]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$POJFLABIGPH @ RVA 0x30E2038

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__POJFLABIGPH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  System_Action_RaidViewContainer__o *pSVar1;
  
  pSVar1 = (__this->fields).CKNOFAMLBDE;
  if (pSVar1 != (System_Action_RaidViewContainer__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e2058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnRaidExpire()  [RVA 0x30E2060]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$OnRaidExpire @ RVA 0x30E2060

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__OnRaidExpire
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__OnRaidExpire(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNOPCPONLEN(bool NMAFEJHDPGO)  [RVA 0x30E1AD8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$DNOPCPONLEN @ RVA 0x30E1AD8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__DNOPCPONLEN
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool NMAFEJHDPGO,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  int JACDAGALJHD;
  Nekki_SF2_GUI_Map_MapScene_o *__this_02;
  
  if ((DAT_045663bb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045663bb = 1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  __this_02 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return;
  }
  if (NMAFEJHDPGO) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((__this_00 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_031e1bf8;
    iVar2 = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 031e1bd4 to 032e1bfb has its CatchHandler @ 031e1da4 */
    JACDAGALJHD = iVar2 + -1;
  }
  else {
    JACDAGALJHD = -1;
  }
  if (__this_02 != (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    Nekki_SF2_GUI_Map_MapScene__MapButtonsPanelSetSibling(__this_02,JACDAGALJHD,(MethodInfo *)0x0);
    return;
  }
LAB_031e1bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnExitBtnClick(Action<RaidViewContainer> CJNHFNHJHPE)  [RVA 0x30E207C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$add_OnExitBtnClick @ RVA 0x30E207C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnExitBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *a;
  
  if ((DAT_045663bc & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    DAT_045663bc = 1;
  }
  ppSVar6 = &(__this->fields).HNHLJHHKELD;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void InsertPlayer(NODLJPNGNBG OGFALADNBHC, GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x30E212C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$InsertPlayer @ RVA 0x30E212C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,NODLJPNGNBG_o *OGFALADNBHC,
               GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar3;
  
  pNVar2 = (__this->fields)._raidPlayersRoll;
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__InsertPlayer
              (pNVar2,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._raidPlayersRoll;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
      pNVar3 = (__this->fields)._raidInfoSprite;
      iVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersInBattleCount
                        (pNVar2,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
        (pNVar3->fields).MOFFPNNIMBJ = iVar1;
        pNVar2 = (__this->fields)._raidPlayersRoll;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
          pNVar3 = (__this->fields)._raidInfoSprite;
          iVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersCount
                            (pNVar2,(MethodInfo *)0x0);
          if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
            (pNVar3->fields).CMEBGPLHEGM = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OKGJAJMILMD(object IMMNELPBGIF)  [RVA 0x30E2190]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$OKGJAJMILMD @ RVA 0x30E2190

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__OKGJAJMILMD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_RaidViewContainer__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = IMMNELPBGIF;
  auVar2._0_8_ = __this;
  if ((DAT_045663bd & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    auVar2 = FUN_01bab630(&StringLiteral_19657/*"menu"*/);
    DAT_045663bd = 1;
  }
  pSVar1 = (__this->fields).HNHLJHHKELD;
  if (pSVar1 != (System_Action_RaidViewContainer__o *)0x0) {
                    /* try { // try from 031e21ec to 032e2483 has its CatchHandler @ 031e21ec
                       catch() { ... } // from try @ 031e21ec with catch @ 031e21ec
                       catch() { ... } // from try @ 031e271c with catch @ 031e21ec
                       catch() { ... } // from try @ 031e275c with catch @ 031e21ec
                       catch() { ... } // from try @ 031e27ac with catch @ 031e21ec
                       catch() { ... } // from try @ 031e27c4 with catch @ 031e21ec
                       catch() { ... } // from try @ 031e280c with catch @ 031e21ec
                       catch() { ... } // from try @ 031e283c with catch @ 031e21ec */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_19657/*"menu"*/,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void SetBossID(int KLFKDPIOMIE)  [RVA 0x30E2220]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetBossID @ RVA 0x30E2220

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetBossID
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,int32_t KLFKDPIOMIE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *pNVar1;
  
  pNVar1 = (__this->fields)._raidPlayersRoll;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    (pNVar1->fields)._KDGCDFEGEHL_k__BackingField = KLFKDPIOMIE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static RaidViewContainer get_Current()  [RVA 0x30E223C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$get_Current @ RVA 0x30E223C

Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__get_Current(MethodInfo *method)

{
  if ((DAT_045663be & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045663be = 1;
  }
  return Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
}


// ===== public void remove_OnExitBtnClick(Action<RaidViewContainer> CJNHFNHJHPE)  [RVA 0x30E2284]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$remove_OnExitBtnClick @ RVA 0x30E2284

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnExitBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *source;
  
  if ((DAT_045663bf & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    DAT_045663bf = 1;
  }
  ppSVar6 = &(__this->fields).HNHLJHHKELD;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool HasPlayer(long OGPGLGPMEPD)  [RVA 0x30E2334]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$HasPlayer @ RVA 0x30E2334

bool Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__HasPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,int64_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__HasPlayer
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static RaidViewContainer Instantiate()  [RVA 0x30E2350]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$Instantiate @ RVA 0x30E2350

Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Instantiate(MethodInfo *method)

{
  int32_t index;
  Il2CppObject *original;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar2;
  MethodInfo *method_00;
  long lVar3;
  
  if ((DAT_045663c0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidViewContainer>__);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10985/*"RaidViewContainer::Instantiate: use more convenient order method"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10415/*"Prefabs/Raids/RaidViewContainer/RaidViewContainer"*/);
    DAT_045663c0 = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10415/*"Prefabs/Raids/RaidViewContainer/RaidViewContainer"*/,Method_UnityEngine_Resources_Load<GameObject>__);
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if ((UnityEngine_Component_o *)**(undefined8 **)(lVar3 + 0xb8) != (UnityEngine_Component_o *)0x0)
  {
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)**(undefined8 **)(lVar3 + 0xb8),(MethodInfo *)0x0
                       );
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 031e2484 to 032e248b has its CatchHandler @ 031e27e4 */
    __this = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 031e24a0 to 032e24a7 has its CatchHandler @ 031e27dc */
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
    }
    OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_10985/*"RaidViewContainer::Instantiate: use more convenient order method"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                    /* try { // try from 031e24dc to 032e2507 has its CatchHandler @ 031e27e8 */
      DAT_04565b84 = '\x01';
    }
    __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      index = UnityEngine_Transform__GetSiblingIndex(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 031e2510 to 032e2517 has its CatchHandler @ 031e27d8 */
      if ((__this != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 031e252c to 032e2533 has its CatchHandler @ 031e2738 */
        UnityEngine_Transform__SetSiblingIndex(pUVar1,index,(MethodInfo *)0x0);
        pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (__this,Method_UnityEngine_GameObject_GetComponent<RaidViewContainer>__);
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GIENGNEGHPJ(pNVar2,method_00);
          return pNVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RaidPlayersRoll GetRoll()  [RVA 0x30E255C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$GetRoll @ RVA 0x30E255C

Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GetRoll
          (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._raidPlayersRoll;
}


// ===== public void ShowNotEnoughDamageHint()  [RVA 0x30E2564]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$ShowNotEnoughDamageHint @ RVA 0x30E2564

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__ShowNotEnoughDamageHint
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
                    /* try { // try from 031e2570 to 032e259b has its CatchHandler @ 031e273c */
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ShowNotEnoughDamageHint_ForPlayer
              (__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdatePlayersDan()  [RVA 0x30E2580]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdatePlayersDan @ RVA 0x30E2580

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdatePlayersDan
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdatePlayersDan(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Close()  [RVA 0x30E259C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$Close @ RVA 0x30E259C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Close
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Action_RaidViewContainer__o *pSVar1;
  
                    /* try { // try from 031e25a0 to 032e25a7 has its CatchHandler @ 031e2730 */
  pSVar1 = (__this->fields).CKNOFAMLBDE;
  if (pSVar1 != (System_Action_RaidViewContainer__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031e25dc to 032e2607 has its CatchHandler @ 031e272c */
  FUN_01bab8c8();
}


// ===== public void UpdateBoss(KDADMJGPAOM LJJOMPLONBH, int MKNBFGPHPEE)  [RVA 0x30E25E0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdateBoss @ RVA 0x30E25E0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateBoss
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,KDADMJGPAOM_o *LJJOMPLONBH,
               int32_t MKNBFGPHPEE,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  RaidMovesChecker_o *__this_01;
  
  if ((DAT_045663c1 & 1) == 0) {
                    /* try { // try from 031e260c to 032e2613 has its CatchHandler @ 031e2724 */
    FUN_01bab630(&RaidMovesChecker_TypeInfo);
    DAT_045663c1 = 1;
  }
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateBoss
              (__this_00,LJJOMPLONBH,MKNBFGPHPEE,(MethodInfo *)0x0);
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031e2648 to 032e2673 has its CatchHandler @ 031e2720 */
    if (DAT_04565ff1 == '\0') {
      FUN_01bab630(&RaidMovesChecker_TypeInfo);
      DAT_04565ff1 = '\x01';
    }
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (RaidMovesChecker_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
      return;
    }
    if ((RaidMovesChecker_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = RaidMovesChecker__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (RaidMovesChecker_o *)0x0) {
                    /* try { // try from 031e26a8 to 032e26eb has its CatchHandler @ 031e2728 */
      RaidMovesChecker__KDHOEOKEIMP(__this_01,LJJOMPLONBH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RaidInfoSprite GetInfoSprite()  [RVA 0x30E26CC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$GetInfoSprite @ RVA 0x30E26CC

Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GetInfoSprite
          (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  return (__this->fields)._raidInfoSprite;
}


// ===== public void remove_OnFightBtnClick(Action<RaidViewContainer> CJNHFNHJHPE)  [RVA 0x30E26D4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$remove_OnFightBtnClick @ RVA 0x30E26D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnFightBtnClick
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *source;
  
  if ((DAT_045663c2 & 1) == 0) {
                    /* try { // try from 031e26fc to 032e2703 has its CatchHandler @ 031e27e0 */
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    DAT_045663c2 = 1;
  }
  ppSVar6 = &(__this->fields).FCHKBFCNOJL;
  source = *ppSVar6;
  do {
                    /* try { // try from 031e2718 to 032e271b has its CatchHandler @ 031e2734 */
                    /* try { // try from 031e271c to 032e2757 has its CatchHandler @ 031e21ec */
                    /* catch() { ... } // from try @ 031e2648 with catch @ 031e2720 */
                    /* catch() { ... } // from try @ 031e260c with catch @ 031e2724 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
                    /* catch() { ... } // from try @ 031e26a8 with catch @ 031e2728 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 031e25dc with catch @ 031e272c */
                    /* catch() { ... } // from try @ 031e25a0 with catch @ 031e2730 */
                    /* catch() { ... } // from try @ 031e2718 with catch @ 031e2734 */
                    /* catch() { ... } // from try @ 031e252c with catch @ 031e2738 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
                    /* catch() { ... } // from try @ 031e2570 with catch @ 031e273c */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,source);
                    /* try { // try from 031e2758 to 032e275b has its CatchHandler @ 031e27c4 */
    bVar2 = source != pSVar5;
    source = pSVar5;
                    /* try { // try from 031e275c to 032e2797 has its CatchHandler @ 031e21ec */
  } while (bVar2);
  return;
}


// ===== public void add_OnForceClose(Action<RaidViewContainer> CJNHFNHJHPE)  [RVA 0x30E2784]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$add_OnForceClose @ RVA 0x30E2784

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnForceClose
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,
               System_Action_RaidViewContainer__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_RaidViewContainer__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_RaidViewContainer__o *pSVar5;
  System_Action_RaidViewContainer__o **ppSVar6;
  System_Action_RaidViewContainer__o *a;
  
                    /* try { // try from 031e2798 to 032e27ab has its CatchHandler @ 031e2850 */
  if ((DAT_045663c3 & 1) == 0) {
                    /* try { // try from 031e27ac to 032e27af has its CatchHandler @ 031e21ec */
                    /* try { // try from 031e27b0 to 032e27b3 has its CatchHandler @ 031e27d4 */
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
                    /* try { // try from 031e27b4 to 032e27bb has its CatchHandler @ 031e27ec */
    DAT_045663c3 = 1;
  }
                    /* try { // try from 031e27bc to 032e27c3 has its CatchHandler @ 031e27d0 */
  ppSVar6 = &(__this->fields).CKNOFAMLBDE;
                    /* catch() { ... } // from try @ 031e2758 with catch @ 031e27c4
                       try { // try from 031e27c4 to 032e2807 has its CatchHandler @ 031e21ec */
  a = *ppSVar6;
  do {
                    /* catch() { ... } // from try @ 031e27bc with catch @ 031e27d0 */
                    /* catch() { ... } // from try @ 031e27b0 with catch @ 031e27d4 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<RaidViewContainer>_TypeInfo;
                    /* catch() { ... } // from try @ 031e2510 with catch @ 031e27d8 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 031e24a0 with catch @ 031e27dc */
                    /* catch() { ... } // from try @ 031e26fc with catch @ 031e27e0 */
                    /* catch() { ... } // from try @ 031e2484 with catch @ 031e27e4 */
                    /* catch() { ... } // from try @ 031e24dc with catch @ 031e27e8 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<RaidViewContainer>_TypeInfo);
                    /* catch() { ... } // from try @ 031e27b4 with catch @ 031e27ec */
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 031e2808 with catch @ 031e282c */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_RaidViewContainer__o *)FUN_01c07368(ppSVar6,lVar4,a);
                    /* try { // try from 031e2808 to 032e280b has its CatchHandler @ 031e282c */
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 031e280c to 032e2833 has its CatchHandler @ 031e21ec */
  } while (bVar2);
  return;
}


// ===== public void .ctor()  [RVA 0x30E2834]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$.ctor @ RVA 0x30E2834

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  System_Action_RaidViewContainer__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_RaidViewContainer__o *pSVar2;
  
                    /* try { // try from 031e2834 to 032e283b has its CatchHandler @ 031e2850 */
                    /* try { // try from 031e283c to 032e2847 has its CatchHandler @ 031e21ec */
                    /* try { // try from 031e2848 to 032e284f has its CatchHandler @ 031e2850 */
                    /* catch() { ... } // from try @ 031e2798 with catch @ 031e2850
                       catch() { ... } // from try @ 031e2834 with catch @ 031e2850
                       catch() { ... } // from try @ 031e2848 with catch @ 031e2850 */
                    /* try { // try from 031e2854 to 032e3623 has its CatchHandler @ 031e2854
                       catch() { ... } // from try @ 031e2854 with catch @ 031e2854
                       catch() { ... } // from try @ 031e3828 with catch @ 031e2854
                       catch() { ... } // from try @ 031e3e74 with catch @ 031e2854
                       catch() { ... } // from try @ 031e3f74 with catch @ 031e2854
                       catch() { ... } // from try @ 031e3fb4 with catch @ 031e2854 */
  if ((DAT_045663c4 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_IINCMJPHIJN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_JFLPAINKPDH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_KDFMFNIDKIM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo);
    DAT_045663c4 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->static_fields->__9__48_0;
  if (pSVar2 == (System_Action_RaidViewContainer__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_RaidViewContainer__o *)
             thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->static_fields->__9__48_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    ppSVar1 = &(__this->fields).FCHKBFCNOJL;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->static_fields->__9__48_1;
    if (pSVar2 == (System_Action_RaidViewContainer__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_RaidViewContainer__o *)
               thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->static_fields->
                 __9__48_1;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).HNHLJHHKELD;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->static_fields->__9__48_2;
    if (pSVar2 == (System_Action_RaidViewContainer__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_RaidViewContainer__o *)
               thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_<>c_TypeInfo->static_fields->
                 __9__48_2;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).CKNOFAMLBDE;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetActive(bool CJNHFNHJHPE)  [RVA 0x30E2A54]
// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetActive @ RVA 0x30E2A54

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetActive
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  MethodInfo *method_00;
  
  CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  Util__IHPDCBOFHPA(CMMIJCJOBBF,CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__DNOPCPONLEN(__this_00,CJNHFNHJHPE,method_00);
  return;
}

