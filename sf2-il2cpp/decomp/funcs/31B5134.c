// Nekki.SF2.GUI.Map.ContentDuel$$Init @ RVA 0x31B5134

void Nekki_SF2_GUI_Map_ContentDuel__Init
               (Nekki_SF2_GUI_Map_ContentDuel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_ContentDuel_o *__this_00;
  Nekki_SF2_GUI_Map_PrizePanel_o *__this_01;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Button_o *__this_02;
  AFFHKININGD_o *method_00;
  OOMHDDBCBJP_o **ppOVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  float OEBANKNLEMN;
  
  method_00 = AGONJKOMAAA;
  if ((DAT_04566bac & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566bac = 1;
  }
  ppOVar5 = &(__this->fields).ACMHOIKOLBE;
  *ppOVar5 = BANHBMINMMP;
  thunk_FUN_01c20e04(ppOVar5,BANHBMINMMP);
  if (AGONJKOMAAA != (AFFHKININGD_o *)0x0) {
    __this_03 = (__this->fields)._lblDescription;
    CJNHFNHJHPE = AFFHKININGD__CJPIFPJMENP(AGONJKOMAAA,(MethodInfo *)0x0);
    if (__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_03,CJNHFNHJHPE,(MethodInfo *)method_00);
      bVar1 = Nekki_SF2_GUI_Map_ContentDuel__OLEJJPPJKKO
                        (__this_00,AGONJKOMAAA,(MethodInfo *)method_00);
      if (bVar1) {
        if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_032b52a8;
        iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
                    /* try { // try from 032b51d4 to 033b51d7 has its CatchHandler @ 032b51e8 */
                    /* try { // try from 032b51d8 to 033b51db has its CatchHandler @ 032b51e0 */
        if ((iVar2 == 2) ||
           (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 10)) {
                    /* try { // try from 032b51dc to 033b5207 has its CatchHandler @ 032b4ecc */
          bVar1 = false;
                    /* catch() { ... } // from try @ 032b51d8 with catch @ 032b51e0 */
        }
        else {
                    /* catch() { ... } // from try @ 032b526c with catch @ 032b5298 */
          iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
          bVar1 = iVar2 != 0x15;
        }
      }
      else {
                    /* catch() { ... } // from try @ 032b5120 with catch @ 032b51e4 */
        bVar1 = true;
      }
                    /* catch() { ... } // from try @ 032b51d4 with catch @ 032b51e8 */
      __this_01 = (__this->fields)._prizePanel;
                    /* catch() { ... } // from try @ 032b50a0 with catch @ 032b51ec */
      if (__this_01 != (Nekki_SF2_GUI_Map_PrizePanel_o *)0x0) {
                    /* catch() { ... } // from try @ 032b50ec with catch @ 032b51f0 */
        Nekki_SF2_GUI_Map_PrizePanel__Init(__this_01,-1,bVar1,AGONJKOMAAA,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._difficultyPanel;
                    /* try { // try from 032b5208 to 033b520b has its CatchHandler @ 032b5230 */
                    /* try { // try from 032b520c to 033b523f has its CatchHandler @ 032b4ecc */
        if (((pNVar3 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) &&
            (pUVar4 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
            BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) && (pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 032b5208 with catch @ 032b5230 */
          UnityEngine_GameObject__SetActive
                    (pUVar4,(BANHBMINMMP->fields).KIHDFNGKPGN != 0,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._difficultyPanel;
                    /* try { // try from 032b5240 to 033b5253 has its CatchHandler @ 032b52c4 */
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          OEBANKNLEMN = MGNPHCAAEIO__HLFLDFDKDFN(AGONJKOMAAA,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b506c with catch @ 032b5254
                       try { // try from 032b5254 to 033b526b has its CatchHandler @ 032b4ecc */
          if (pNVar3 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
            Nekki_SF2_GUI_Map_DifficultyPanel__Init(pNVar3,OEBANKNLEMN,(MethodInfo *)0x0);
            __this_02 = (__this->fields)._btnPeriodicReset;
                    /* try { // try from 032b526c to 033b526f has its CatchHandler @ 032b5298 */
                    /* try { // try from 032b5270 to 033b52a7 has its CatchHandler @ 032b4ecc */
            if ((__this_02 != (UnityEngine_UI_Button_o *)0x0) &&
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_032b52a8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032b52a8 to 033b52af has its CatchHandler @ 032b52c4 */
  FUN_01bab8c8();
}

