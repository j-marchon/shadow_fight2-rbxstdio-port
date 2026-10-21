// TypeDefIndex 3035
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SeasFinTop100Message : SeasFinBaseContent
// Fields:
//   private LabelAlias _congratulations; // 0x40
//   private ResolutionImage _medal; // 0x48
//   private LabelAlias _place; // 0x50
//   private RaidTopHundredDialog FGANCONLPGD; // 0x58

// ===== public void .ctor()  [RVA 0x34B6814]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$.ctor @ RVA 0x34B6814

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(bool DAOGBIACCMM, RaidConfig.AEJBILHMFDB.DFCNIHGANOH OJDBABKBAFA)  [RVA 0x34B681C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$Init @ RVA 0x34B681C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,bool DAOGBIACCMM,
               RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *OJDBABKBAFA,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  RaidLeaderboardsManager_o *__this_00;
  PlayerData_o *__this_01;
  int64_t BIIMFIDNPJP;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  BHEDGAKGKPO_StaticFields *pBVar6;
  Il2CppMethodPointer pIVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_38;
  
  if ((DAT_04568590 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_10870/*"RaidInfoIcons.medal_silver"*/);
    FUN_01bab630(&StringLiteral_17763/*"dlgBtnRedirect"*/);
    FUN_01bab630(&StringLiteral_11815/*"SenseiTop100"*/);
    DAT_04568590 = 1;
  }
  local_38 = 0;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,true,2,StringLiteral_17763/*"dlgBtnRedirect"*/,
             true,1,StringLiteral_9679/*"OK"*/,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._congratulations;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_11815/*"SenseiTop100"*/,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._congratulations;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* try { // try from 035b6930 to 036b6937 has its CatchHandler @ 035b6b18 */
      (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                ((pBVar6->ODGAJIBDACC).fields.r,(pBVar6->ODGAJIBDACC).fields.g,
                 (pBVar6->ODGAJIBDACC).fields.b,(pBVar6->ODGAJIBDACC).fields.a,pNVar2,
                 (pNVar2->klass->vtable)._23_set_color.method);
      if (OJDBABKBAFA == (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
        if (!DAOGBIACCMM) {
          return;
        }
        pNVar3 = (__this->fields)._medal;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,StringLiteral_10870/*"RaidInfoIcons.medal_silver"*/,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._place;
                    /* try { // try from 035b6a20 to 036b6a47 has its CatchHandler @ 035b6af8 */
          if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar1 = LIIFLGALGNK__HLMBDJOGONJ(1,5,(MethodInfo *)0x0);
          local_38 = CONCAT44(local_38._4_4_,iVar1);
          pSVar4 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
                    /* try { // try from 035b6a48 to 036b6adb has its CatchHandler @ 035b6780 */
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                      (pNVar2,pSVar4,(pNVar2->klass->vtable)._75_set_text.method);
            pNVar2 = (__this->fields)._place;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              fVar8 = 0.0;
              fVar9 = 0.0;
              fVar10 = 0.0;
              pIVar7 = (pNVar2->klass->vtable)._23_set_color.methodPtr;
              pMVar5 = (pNVar2->klass->vtable)._23_set_color.method;
              fVar11 = 1.0;
LAB_035b6a88:
              (*pIVar7)(fVar8,fVar9,fVar10,fVar11,pNVar2,pMVar5);
              return;
            }
          }
        }
      }
      else {
        pNVar3 = (__this->fields)._medal;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 035b6944 to 036b694f has its CatchHandler @ 035b6b14 */
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,(OJDBABKBAFA->fields).HHCNBANOKPB,(MethodInfo *)0x0);
                    /* try { // try from 035b6958 to 036b6963 has its CatchHandler @ 035b6b08 */
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if ((__this_01 != (PlayerData_o *)0x0) &&
             (BIIMFIDNPJP = PlayerData__APCMGOCHMGC(__this_01,(MethodInfo *)0x0),
             __this_00 != (RaidLeaderboardsManager_o *)0x0)) {
            iVar1 = RaidLeaderboardsManager__BHOKMPEGAEG(__this_00,BIIMFIDNPJP,(MethodInfo *)0x0);
            local_38 = CONCAT44(iVar1,(undefined4)local_38);
            pNVar2 = (__this->fields)._place;
                    /* try { // try from 035b69ac to 036b69cf has its CatchHandler @ 035b6b04 */
            pSVar4 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                        (pNVar2,pSVar4,(pNVar2->klass->vtable)._75_set_text.method);
              pNVar2 = (__this->fields)._place;
              if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 035b69d4 to 036b69df has its CatchHandler @ 035b6afc */
                fVar10 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.b;
                fVar11 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.a;
                fVar8 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.r;
                fVar9 = (OJDBABKBAFA->fields).JPBGLAAFMKH.fields.g;
                pIVar7 = (pNVar2->klass->vtable)._23_set_color.methodPtr;
                pMVar5 = (pNVar2->klass->vtable)._23_set_color.method;
                goto LAB_035b6a88;
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


// ===== protected override void OJGLIBHMOIE()  [RVA 0x34B6AA4]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$OJGLIBHMOIE @ RVA 0x34B6AA4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__OJGLIBHMOIE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *pNVar2;
  DialogsManager_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o **ppNVar3;
  
  if ((DAT_04568591 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
                    /* try { // try from 035b6adc to 036b6adf has its CatchHandler @ 035b6b10 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035b6ae0 to 036b6ae7 has its CatchHandler @ 035b6b0c */
                    /* try { // try from 035b6ae8 to 036b6aeb has its CatchHandler @ 035b6780 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_MNIKEBABNLM__);
                    /* try { // try from 035b6aec to 036b6af7 has its CatchHandler @ 035b6b00 */
    DAT_04568591 = 1;
  }
                    /* catch() { ... } // from try @ 035b6a20 with catch @ 035b6af8
                       try { // try from 035b6af8 to 036b6b27 has its CatchHandler @ 035b6780 */
  pNVar2 = DialogsOpener__OHIKPLPOJBK((MethodInfo *)0x0);
  ppNVar3 = &(__this->fields).FGANCONLPGD;
                    /* catch() { ... } // from try @ 035b69d4 with catch @ 035b6afc */
                    /* catch() { ... } // from try @ 035b6aec with catch @ 035b6b00 */
  *ppNVar3 = pNVar2;
                    /* catch() { ... } // from try @ 035b69ac with catch @ 035b6b04 */
                    /* catch() { ... } // from try @ 035b6958 with catch @ 035b6b08 */
                    /* catch() { ... } // from try @ 035b6ae0 with catch @ 035b6b0c */
  thunk_FUN_01c20e04(ppNVar3,pNVar2);
                    /* catch() { ... } // from try @ 035b6adc with catch @ 035b6b10 */
                    /* catch() { ... } // from try @ 035b6944 with catch @ 035b6b14 */
  pNVar2 = *ppNVar3;
                    /* catch() { ... } // from try @ 035b6930 with catch @ 035b6b18 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035b6b28 to 036b6b2b has its CatchHandler @ 035b6b50 */
                    /* try { // try from 035b6b2c to 036b6b57 has its CatchHandler @ 035b6780 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035b6b28 with catch @ 035b6b50 */
                    /* try { // try from 035b6b58 to 036b6b5f has its CatchHandler @ 035b6b74 */
    CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                  thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                    /* try { // try from 035b6b60 to 036b6b6b has its CatchHandler @ 035b6780 */
                    /* try { // try from 035b6b6c to 036b6b73 has its CatchHandler @ 035b6b74 */
    System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 035b6b58 with catch @ 035b6b74
                       catch() { ... } // from try @ 035b6b6c with catch @ 035b6b74 */
    if (__this_00 != (DialogsManager_o *)0x0) {
                    /* try { // try from 035b6b78 to 036b6c67 has its CatchHandler @ 035b6b78
                       catch() { ... } // from try @ 035b6b78 with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6cf0 with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6d24 with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6d4c with catch @ 035b6b78
                       catch() { ... } // from try @ 035b6d80 with catch @ 035b6b78 */
      DialogsManager__DGKGLFOKOLG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SwitchToPrevSeasonLeaderboard
                  (*ppNVar3,(MethodInfo *)0x0);
        if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__SetArrowBtnsTouchEnable
                    (*ppNVar3,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MNIKEBABNLM(object IMMNELPBGIF)  [RVA 0x34B6BD4]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$MNIKEBABNLM @ RVA 0x34B6BD4

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__MNIKEBABNLM
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  byte bVar1;
  DialogsManager_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o **ppNVar2;
  
  if ((DAT_04568592 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_MNIKEBABNLM__);
    DAT_04568592 = 1;
  }
  ppNVar2 = &(__this->fields).FGANCONLPGD;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) {
      if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo) {
        IMMNELPBGIF = (Il2CppObject *)0x0;
      }
      goto LAB_035b6c68;
    }
  }
  IMMNELPBGIF = (Il2CppObject *)0x0;
LAB_035b6c68:
                    /* try { // try from 035b6c68 to 036b6c6f has its CatchHandler @ 035b6d34 */
  if (*ppNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)IMMNELPBGIF) {
                    /* try { // try from 035b6c7c to 036b6c87 has its CatchHandler @ 035b6d30 */
    return;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 == (DialogsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035b6ccc to 036b6cef has its CatchHandler @ 035b6d28 */
  DialogsManager__CPBKBNKHOPH(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).FGANCONLPGD = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
                    /* try { // try from 035b6cf0 to 036b6d17 has its CatchHandler @ 035b6b78 */
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x34B6CFC]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinTop100Message$$OnDestroy @ RVA 0x34B6CFC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

