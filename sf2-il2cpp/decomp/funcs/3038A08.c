// LJNJDFEAIOH$$MHJKLCKMFMO @ RVA 0x3038A08

void LJNJDFEAIOH__MHJKLCKMFMO(LJNJDFEAIOH_o *__this,KDADMJGPAOM_o *NHKCCGPADIJ,MethodInfo *method)

{
  uint MKNBFGPHPEE;
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  CHDGOFBHAFI_o *__this_00;
  AADKBCFCLKK_o *pAVar4;
  KDADMJGPAOM_o **ppKVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar6;
  float fVar7;
  
                    /* try { // try from 03138a14 to 03238a27 has its CatchHandler @ 03138a38 */
                    /* try { // try from 03138a28 to 03238a2f has its CatchHandler @ 031388bc */
                    /* try { // try from 03138a30 to 03238a33 has its CatchHandler @ 03138a54 */
  if ((DAT_04565d62 & 1) == 0) {
                    /* try { // try from 03138a34 to 03238a37 has its CatchHandler @ 03138a58 */
                    /* catch() { ... } // from try @ 03138a14 with catch @ 03138a38
                       try { // try from 03138a38 to 03238a6f has its CatchHandler @ 031388bc */
                    /* catch() { ... } // from try @ 031389b4 with catch @ 03138a3c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch() { ... } // from try @ 03138950 with catch @ 03138a40 */
                    /* catch() { ... } // from try @ 03138960 with catch @ 03138a44 */
                    /* catch() { ... } // from try @ 031389b8 with catch @ 03138a48 */
    FUN_01bab630(&LJNJDFEAIOH_TypeInfo);
                    /* catch() { ... } // from try @ 03138998 with catch @ 03138a4c */
                    /* catch() { ... } // from try @ 03138938 with catch @ 03138a50 */
                    /* catch() { ... } // from try @ 03138a30 with catch @ 03138a54 */
    FUN_01bab630(&StringLiteral_9679);
                    /* catch() { ... } // from try @ 031389e0 with catch @ 03138a58
                       catch() { ... } // from try @ 03138a34 with catch @ 03138a58 */
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_8316);
                    /* try { // try from 03138a70 to 03238a73 has its CatchHandler @ 03138a90 */
                    /* try { // try from 03138a74 to 03238a93 has its CatchHandler @ 031388bc */
    FUN_01bab630(&StringLiteral_1);
    DAT_04565d62 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03138a70 with catch @ 03138a90 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03138a94 to 03238a9b has its CatchHandler @ 03138ab0 */
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 03138a9c to 03238aa7 has its CatchHandler @ 031388bc */
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 03138aa8 to 03238aaf has its CatchHandler @ 03138ab0 */
    CHDGOFBHAFI__MHJKLCKMFMO(__this_00,NHKCCGPADIJ,(MethodInfo *)0x0);
    pAVar4 = (__this->fields).IHODMKCBNKJ;
                    /* catch() { ... } // from try @ 03138a94 with catch @ 03138ab0
                       catch() { ... } // from try @ 03138aa8 with catch @ 03138ab0 */
    if (pAVar4 != (AADKBCFCLKK_o *)0x0) {
      ppKVar5 = &(pAVar4->fields).LHFLMBNKPHF;
      *ppKVar5 = NHKCCGPADIJ;
      thunk_FUN_01c20e04(ppKVar5,NHKCCGPADIJ);
      pNVar6 = (__this->fields).PDEAGAFHDFI;
      if ((LJNJDFEAIOH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        fVar7 = LJNJDFEAIOH_TypeInfo->static_fields->LBFAFGHJJLP;
        MKNBFGPHPEE = 0x80000000;
        if (fVar7 != INFINITY) {
          MKNBFGPHPEE = (int)fVar7;
        }
        method_00 = (MethodInfo *)(ulong)MKNBFGPHPEE;
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateBoss
                  (pNVar6,NHKCCGPADIJ,MKNBFGPHPEE,(MethodInfo *)0x0);
        LJNJDFEAIOH__OAPADFFJJCH(__this,(__this->fields).IHODMKCBNKJ,method_00);
        if (LJNJDFEAIOH_TypeInfo->static_fields->LBFAFGHJJLP <= 0.0) {
          if (NHKCCGPADIJ != (KDADMJGPAOM_o *)0x0) goto LAB_03138c80;
        }
        else if (NHKCCGPADIJ != (KDADMJGPAOM_o *)0x0) {
          if ((NHKCCGPADIJ->fields).PDGEHKCPGDK < 1) {
            __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (__this_01 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03138cc0;
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_01,0x25,(MethodInfo *)0x0);
            bVar2 = OOBBAGLCFPF__IGOCIGBDBEI((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
            if (bVar2) {
              JJPNLEPEAFM__JNDPLPKDPCP
                        (StringLiteral_17850,StringLiteral_8316,StringLiteral_9679,StringLiteral_1,
                         (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,
                         true,true,(MethodInfo *)0x0);
            }
          }
          else {
            iVar3 = OOBBAGLCFPF__CGAMEAEGLCA((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
            if (iVar3 < 1) {
              bVar2 = true;
            }
            else {
              bVar2 = 0.5 < (float)(NHKCCGPADIJ->fields).PDGEHKCPGDK / (float)iVar3;
            }
            if ((LJNJDFEAIOH_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (bVar2) {
                    /* try { // try from 03138c34 to 03238d3f has its CatchHandler @ 03138c34
                       catch() { ... } // from try @ 03138c34 with catch @ 03138c34
                       catch() { ... } // from try @ 03138d50 with catch @ 03138c34
                       catch() { ... } // from try @ 03138dac with catch @ 03138c34
                       catch() { ... } // from try @ 03138df0 with catch @ 03138c34 */
              LJNJDFEAIOH_TypeInfo->static_fields->GDAKHPBBPAE = true;
            }
            else if ((LJNJDFEAIOH_TypeInfo->static_fields->GDAKHPBBPAE != false) &&
                    (bVar2 = OOBBAGLCFPF__IGOCIGBDBEI
                                       ((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0), bVar2)) {
              pNVar6 = (__this->fields).PDEAGAFHDFI;
              if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)
              goto LAB_03138cc0;
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__ShowNotEnoughDamageHint
                        (pNVar6,(MethodInfo *)0x0);
              if ((LJNJDFEAIOH_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              LJNJDFEAIOH_TypeInfo->static_fields->GDAKHPBBPAE = false;
            }
          }
LAB_03138c80:
          iVar1 = (NHKCCGPADIJ->fields).PDGEHKCPGDK;
          if ((LJNJDFEAIOH_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          LJNJDFEAIOH_TypeInfo->static_fields->LBFAFGHJJLP = (float)iVar1;
          (__this->fields).EIMPNFFLONC = (NHKCCGPADIJ->fields).IILCHFKCEEH;
          return;
        }
      }
    }
  }
LAB_03138cc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

