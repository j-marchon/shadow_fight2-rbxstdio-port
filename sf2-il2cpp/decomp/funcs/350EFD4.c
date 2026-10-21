// AMIINPEKKFB$$LNGOANIDDNG @ RVA 0x350EFD4

void AMIINPEKKFB__LNGOANIDDNG(AMJMGFCCAKN_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar2;
  System_Action_HOOAAGABMBL__o *pSVar3;
  IGFGDDANEPE_o *pIVar4;
  GGLKHCAIGDI_o *pGVar5;
  DNELIPCHKLK_o **ppDVar6;
  DNELIPCHKLK_o *pDVar7;
  PKHMIGFEJCL_o *pPVar8;
  
                    /* try { // try from 0360efd4 to 0370efff has its CatchHandler @ 0360f328 */
  if ((DAT_045688e3 & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    DAT_045688e3 = 1;
  }
  pSVar3 = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  if (pSVar3 != (System_Action_HOOAAGABMBL__o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,IKKAMAMLIKA,
               (pSVar3->fields).super.super.method);
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 0360f040 to 0370f04b has its CatchHandler @ 0360f33c */
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar8 = (pNVar1->fields).QuestParameters, pPVar8 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar6 = &(pPVar8->fields).NMHCLFFOMJH;
    pDVar7 = *ppDVar6;
                    /* try { // try from 0360f05c to 0370f063 has its CatchHandler @ 0360f304 */
    if ((IKKAMAMLIKA != (AMJMGFCCAKN_o *)0x0) &&
       ((pIVar4 = (IKKAMAMLIKA->fields).MNELBNHIKGH, pIVar4 != (IGFGDDANEPE_o *)0x0 &&
        (pPVar2 = (pPVar8->fields).BJJFDMHOBNB, pPVar2 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)))) {
      (pPVar2->fields).BMGMGAAPFGO = (pIVar4->fields).NPFMOEOIEKM;
      thunk_FUN_01c20e04();
                    /* try { // try from 0360f06c to 0370f073 has its CatchHandler @ 0360f300 */
      pGVar5 = (IKKAMAMLIKA->fields).PHAGOJCOMPN;
                    /* try { // try from 0360f074 to 0370f093 has its CatchHandler @ 0360f338 */
      if ((pGVar5 != (GGLKHCAIGDI_o *)0x0) &&
         (pPVar2 = (pPVar8->fields).BJJFDMHOBNB, pPVar2 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
        (pPVar2->fields).JDKKCDBDNLB = (pGVar5->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04();
        pPVar2 = (pPVar8->fields).BJJFDMHOBNB;
        if (pPVar2 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) {
          (pPVar2->fields).HDGEOJGHEOE = 0;
          (pPVar8->fields).CJLNOJMBNPN = (HOOAAGABMBL_o *)0x0;
                    /* try { // try from 0360f0a0 to 0370f0a7 has its CatchHandler @ 0360f308 */
          thunk_FUN_01c20e04(&pPVar8->fields,0);
          pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 0360f0b0 to 0370f0b7 has its CatchHandler @ 0360f318 */
                    /* try { // try from 0360f0b8 to 0370f0c3 has its CatchHandler @ 0360f2d4 */
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0xb,(MethodInfo *)0x0);
            *ppDVar6 = pDVar7;
                    /* try { // try from 0360f0d4 to 0370f0db has its CatchHandler @ 0360f2d0 */
            thunk_FUN_01c20e04(ppDVar6,pDVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

