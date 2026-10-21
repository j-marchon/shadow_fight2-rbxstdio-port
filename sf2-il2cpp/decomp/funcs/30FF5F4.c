// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$NGGIGILFODP @ RVA 0x30FF5F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__NGGIGILFODP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  NFFDIPBFJHP_o *pNVar6;
  EEGDOGKBLNG_o *pEVar7;
  int64_t iVar8;
  int64_t iVar9;
  JMDPBFOCHHP_o *__this_00;
  System_String_o *pSVar10;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar11;
  GLPEFEEGCPM_o *__this_01;
  int iVar12;
  int32_t local_34;
  
                    /* try { // try from 031ff600 to 032ff60f has its CatchHandler @ 031ffb70 */
  if ((DAT_045664b8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664b8 = 1;
    method = extraout_x1;
  }
  local_34 = 0;
  pNVar11 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031ff650 to 032ff65b has its CatchHandler @ 031ffb38 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar11 = (__this->fields).LEJCNEENFCH;
                    /* try { // try from 031ff66c to 032ff67b has its CatchHandler @ 031ffb44 */
    if ((pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031ff998;
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
    pNVar11 = (__this->fields).LEJCNEENFCH;
    if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_031ff998;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar11,true,(MethodInfo *)0x0);
  }
  pNVar11 = (__this->fields).KPGAAKKCKOA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031ff6bc to 032ff6c7 has its CatchHandler @ 031ffb54 */
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar11 = (__this->fields).KPGAAKKCKOA;
    if ((pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031ff998;
                    /* try { // try from 031ff6d8 to 032ff6e7 has its CatchHandler @ 031ffb4c */
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    pNVar11 = (__this->fields).KPGAAKKCKOA;
    if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_031ff998;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar11,false,(MethodInfo *)0x0);
    pNVar11 = (__this->fields).KPGAAKKCKOA;
    if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) goto LAB_031ff998;
    Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__StopFillPlayers(pNVar11,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._prevSeasonLabel;
  if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                    /* try { // try from 031ff728 to 032ff733 has its CatchHandler @ 031ffb28 */
    pNVar5 = (__this->fields)._timeLabel;
    if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031ff744 to 032ff753 has its CatchHandler @ 031ffb10 */
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._notParticipatedInSeasonLabel;
      if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        LJLLAKHOFFF__JAEOMHIAHJB
                  ((UnityEngine_UI_Button_o *)(__this->fields)._btnCurrentLeague,2,true,
                   (MethodInfo *)0x0);
                    /* try { // try from 031ff784 to 032ff78f has its CatchHandler @ 031ffb0c */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar6 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
        if (pNVar6 != (NFFDIPBFJHP_o *)0x0) {
                    /* try { // try from 031ff7a0 to 032ff7af has its CatchHandler @ 031ffb14 */
          __this_01 = (pNVar6->fields).NEACDFLBNFO;
          if ((__this_01 == (GLPEFEEGCPM_o *)0x0) ||
             (bVar2 = GLPEFEEGCPM__MEAIEHHCBHI(__this_01,(MethodInfo *)0x0), !bVar2)) {
            iVar12 = 0;
          }
          else {
                    /* try { // try from 031ff7c0 to 032ff7cb has its CatchHandler @ 031ffb2c */
            auVar1 = SEXT816((__this_01->fields).LAEGCKIFDOC) * SEXT816(0x112e0be826d694b3);
            iVar12 = (int)(auVar1._8_8_ >> 0x1a) - (auVar1._12_4_ >> 0x1f);
                    /* try { // try from 031ff7dc to 032ff7eb has its CatchHandler @ 031ffb60 */
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* try { // try from 031ff7fc to 032ff807 has its CatchHandler @ 031ffb50 */
          if (pEVar7 != (EEGDOGKBLNG_o *)0x0) {
            iVar8 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar7,(MethodInfo *)0x0);
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 != (EEGDOGKBLNG_o *)0x0) {
                    /* try { // try from 031ff818 to 032ff827 has its CatchHandler @ 031ffb58 */
              iVar9 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar7,(MethodInfo *)0x0);
              if (iVar9 == 0) {
                bVar2 = false;
              }
              else {
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 031ff838 to 032ff843 has its CatchHandler @ 031ffb68 */
                __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_031ff998;
                    /* try { // try from 031ff854 to 032ff863 has its CatchHandler @ 031ffb64 */
                iVar3 = JMDPBFOCHHP__JNBAJJCCJFH(__this_00,(MethodInfo *)0x0);
                bVar2 = iVar12 + ((int)(SUB168(SEXT816(iVar8) * SEXT816(-0x112e0be826d694b3),8) >>
                                       0x1a) -
                                 (SUB164(SEXT816(iVar8) * SEXT816(-0x112e0be826d694b3),0xc) >> 0x1f)
                                 ) <= iVar3;
                    /* try { // try from 031ff874 to 032ff87f has its CatchHandler @ 031ffb3c */
              }
              (__this->fields).CGJKLEEEPPN = bVar2;
                    /* try { // try from 031ff890 to 032ff89f has its CatchHandler @ 031ffb40 */
              LJLLAKHOFFF__JAEOMHIAHJB
                        ((UnityEngine_UI_Button_o *)(__this->fields)._btnOldLeague,0,true,
                         (MethodInfo *)0x0);
              pNVar5 = (__this->fields)._leagueDan;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031ff8b0 to 032ff8bb has its CatchHandler @ 031ffb48 */
              bVar2 = UnityEngine_Object__op_Implicit
                                ((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
              if (bVar2) {
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 031ff8cc to 032ff8db has its CatchHandler @ 031ffb30 */
                pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_031ff998;
                local_34 = EEGDOGKBLNG__IGIHHCEONEM(pEVar7,(MethodInfo *)0x0);
                pNVar5 = (__this->fields)._leagueDan;
                    /* try { // try from 031ff8ec to 032ff8f7 has its CatchHandler @ 031ffb6c */
                pSVar10 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_031ff998;
                    /* try { // try from 031ff908 to 032ff917 has its CatchHandler @ 031ffb5c */
                (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                          (pNVar5,pSVar10,(pNVar5->klass->vtable)._75_set_text.method);
              }
              pNVar11 = (__this->fields).KPGAAKKCKOA;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031ff928 to 032ff933 has its CatchHandler @ 031ffb24 */
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                pNVar11 = (__this->fields).KPGAAKKCKOA;
                if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0)
                goto LAB_031ff998;
                Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__ScrollClearData
                          (pNVar11,(MethodInfo *)0x0);
              }
                    /* try { // try from 031ff944 to 032ff953 has its CatchHandler @ 031ffb1c */
              pNVar11 = (__this->fields).LEJCNEENFCH;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 031ff964 to 032ff96f has its CatchHandler @ 031ffb20 */
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                pNVar11 = (__this->fields).LEJCNEENFCH;
                if (pNVar11 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0)
                goto LAB_031ff998;
                Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
                          (pNVar11,__this_01,(MethodInfo *)0x0);
              }
                    /* try { // try from 031ff980 to 032ff98f has its CatchHandler @ 031ffb18 */
              (__this->fields).LNIAPAKKPHL = 0.0;
              return;
            }
          }
        }
      }
    }
  }
LAB_031ff998:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031ff998 to 032ff9a7 has its CatchHandler @ 031ffb98 */
  FUN_01bab8c8();
}

