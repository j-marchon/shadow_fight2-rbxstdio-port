// Nekki.SF2.GUI.Fight.ViewerFight$$SetTimerForLastRaidRound @ RVA 0x35BE0E8

void Nekki_SF2_GUI_Fight_ViewerFight__SetTimerForLastRaidRound
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  CHDGOFBHAFI_o *pCVar4;
  int64_t iVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  MethodInfo *extraout_x1;
  JIMKCICMMIL_o *pJVar8;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  DG_Tweening_Sequence_o **ppDVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE_00;
  
                    /* catch() { ... } // from try @ 036be0bc with catch @ 036be0e8 */
                    /* try { // try from 036be0f8 to 037be0ff has its CatchHandler @ 036be114 */
                    /* try { // try from 036be100 to 037be10b has its CatchHandler @ 036bde30 */
  if ((DAT_04568f02 & 1) == 0) {
                    /* try { // try from 036be10c to 037be113 has its CatchHandler @ 036be114 */
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
                    /* catch() { ... } // from try @ 036be090 with catch @ 036be114
                       catch() { ... } // from try @ 036be0f8 with catch @ 036be114
                       catch() { ... } // from try @ 036be10c with catch @ 036be114 */
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_EIJGFNBCPLK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_IFBBIDIEBEL__);
    DAT_04568f02 = 1;
    method = extraout_x1;
  }
  pJVar8 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if ((pJVar8 != (JIMKCICMMIL_o *)0x0) && ((pJVar8->fields).FIICJBPKIJA != false)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar4 == (CHDGOFBHAFI_o *)0x0) {
LAB_036be380:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IIPPMAOIKHB = (pCVar4->fields).AABMLCNHHPN;
    if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
       (bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
      iVar5 = OOBBAGLCFPF__ACNOPBOADGE(IIPPMAOIKHB,(MethodInfo *)0x0);
      CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((int)(SUB168(SEXT816(iVar5) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                               (SUB164(SEXT816(iVar5) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),
                               (MethodInfo *)0x0);
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      CJNHFNHJHPE_00 =
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                     (iVar2 * 0x3c | 1,(MethodInfo *)0x0);
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).GJOBKIBMLHC.fields,(MethodInfo *)0x0);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE_00,
                         (MethodInfo *)0x0);
      if (iVar3 < iVar2) {
        pNVar6 = (__this->fields).roundTimer;
        (__this->fields).GJOBKIBMLHC.fields = CJNHFNHJHPE_00;
        if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036be380;
        (*(pNVar6->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0,0,0x3f800000,pNVar6,(pNVar6->klass->vtable)._23_set_color.method);
        ppDVar9 = &(__this->fields).MJPPAGLCLJD;
        if (*ppDVar9 == (DG_Tweening_Sequence_o *)0x0) {
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          (__this->fields).MJPPAGLCLJD = pDVar7;
          thunk_FUN_01c20e04(ppDVar9,pDVar7);
          getter = (DG_Tweening_Core_DOGetter_float__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          setter = (DG_Tweening_Core_DOSetter_float__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          t = DG_Tweening_DOTween__To(getter,setter,0.25,0.45,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    ((__this->fields).MJPPAGLCLJD,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__AppendInterval
                    ((__this->fields).MJPPAGLCLJD,0.1,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                    ((Il2CppObject *)(__this->fields).MJPPAGLCLJD,-1,1,
                     Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
          DG_Tweening_TweenExtensions__Restart
                    ((DG_Tweening_Tween_o *)(__this->fields).MJPPAGLCLJD,true,-1.0,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
  return;
}

