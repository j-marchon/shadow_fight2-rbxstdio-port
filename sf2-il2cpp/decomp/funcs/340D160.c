// MGNPHCAAEIO$$MCEHGCJIMGJ @ RVA 0x340D160

void MGNPHCAAEIO__MCEHGCJIMGJ(HOOAAGABMBL_o *IKKAMAMLIKA,int32_t KLPEHBCJBFC,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar4;
  System_String_o **ppSVar5;
  long lVar6;
  PKHMIGFEJCL_o *pPVar7;
  
  if ((DAT_04568064 & 1) == 0) {
    FUN_01bab630(&AMJMGFCCAKN_TypeInfo,KLPEHBCJBFC);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8866);
    DAT_04568064 = 1;
  }
  pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 0350d1b4 to 0360d22f has its CatchHandler @ 0350d1b4
                       catch() { ... } // from try @ 0350d1b4 with catch @ 0350d1b4
                       catch() { ... } // from try @ 0350d2fc with catch @ 0350d1b4
                       catch() { ... } // from try @ 0350d350 with catch @ 0350d1b4
                       catch() { ... } // from try @ 0350d3f0 with catch @ 0350d1b4 */
  if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar7 = (pNVar3->fields).QuestParameters, IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
    bVar1 = (AMJMGFCCAKN_TypeInfo->_2).naturalAligment;
    if (((IKKAMAMLIKA->klass->_2).naturalAligment < bVar1) ||
       ((IKKAMAMLIKA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)AMJMGFCCAKN_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IKKAMAMLIKA);
    }
    if (((pPVar7 != (PKHMIGFEJCL_o *)0x0) && (*(long *)&IKKAMAMLIKA[1].fields != 0)) &&
       (pPVar4 = (pPVar7->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
      (pPVar4->fields).BMGMGAAPFGO = *(System_String_o **)(*(long *)&IKKAMAMLIKA[1].fields + 0x10);
      thunk_FUN_01c20e04();
      if ((IKKAMAMLIKA[1].klass != (HOOAAGABMBL_c *)0x0) &&
         (pPVar4 = (pPVar7->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
        (pPVar4->fields).JDKKCDBDNLB = (System_String_o *)((IKKAMAMLIKA[1].klass)->_1).name;
                    /* try { // try from 0350d230 to 0360d23b has its CatchHandler @ 0350d320 */
        thunk_FUN_01c20e04();
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0350d248 to 0360d26b has its CatchHandler @ 0350d318 */
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
                    /* try { // try from 0350d26c to 0360d27b has its CatchHandler @ 0350d30c */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (IKKAMAMLIKA[1].monitor != (void *)0x0) {
                    /* try { // try from 0350d280 to 0360d287 has its CatchHandler @ 0350d310 */
          lVar6 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              ((long)IKKAMAMLIKA[1].monitor + 0x30),(MethodInfo *)0x0);
          pPVar4 = (pPVar7->fields).BJJFDMHOBNB;
          if (pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) {
                    /* try { // try from 0350d2a0 to 0360d2a3 has its CatchHandler @ 0350d304 */
                    /* try { // try from 0350d2a4 to 0360d2c7 has its CatchHandler @ 0350d314 */
            (pPVar4->fields).HDGEOJGHEOE = lVar6 + iVar2;
            ppSVar5 = &(pPVar4->fields).GOKNIOJFFBG;
            *ppSVar5 = StringLiteral_8866;
            thunk_FUN_01c20e04(ppSVar5);
            pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 0350d2c8 to 0360d2e3 has its CatchHandler @ 0350d308 */
              Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (pNVar3,0x1c,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

