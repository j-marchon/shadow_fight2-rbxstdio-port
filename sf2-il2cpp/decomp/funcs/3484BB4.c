// Nekki.SF2.GUI.Dialogs.SettingsDialog$$OnClose @ RVA 0x3484BB4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  NDPMLPGANCI_o *__this_00;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  DBNEEHGBCJD_o *pDVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_0456839e & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&NGKBNOEJLPH_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
    DAT_0456839e = 1;
  }
  if (((__this->fields).CEEIJODIBOM != (DBNEEHGBCJD_o *)0x0) &&
     (bVar3 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), bVar3)) {
    pDVar10 = (__this->fields).CEEIJODIBOM;
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_03584d7c;
    pIVar7 = pIVar5->klass;
    uVar2._0_1_ = (pIVar7->_2).rank;
    uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar2;
    if (uVar8 != 0) {
      piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar7->vtable + (*piVar9 + 6);
          goto LAB_03584cb4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,6);
LAB_03584cb4:
    auVar11 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    if (pDVar10 != auVar11._0_8_) {
      Nekki_SF2_GUI_Dialogs_SettingsDialog__MOFFEIAPLFM(__this,auVar11._8_8_);
    }
  }
  x = (__this->fields).AELKHAJHDMC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    ppNVar1 = &(__this->fields).AELKHAJHDMC;
    if (*ppNVar1 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03584d7c;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveAllEventListener
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)*ppNVar1,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveAllEventListener__);
    *ppNVar1 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    thunk_FUN_01c20e04(ppNVar1,0);
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    iVar4 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
    if (iVar4 == 3) {
      NGKBNOEJLPH_TypeInfo->static_fields->DBLJKOLFBLN = true;
    }
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    return;
  }
LAB_03584d7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

