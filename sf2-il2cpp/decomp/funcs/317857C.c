// Nekki.SF2.GUI.Pvp.SelectModule$$BEBGOPNMHON @ RVA 0x317857C

void Nekki_SF2_GUI_Pvp_SelectModule__BEBGOPNMHON
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  int32_t MKACJBMOMHC;
  int32_t JJBKAMIAMNE;
  NLIDHEAMLMC_o *pNVar4;
  
  uVar3 = (ulong)(uint)NAIJBCMHBFK;
  if ((DAT_04566966 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar3);
    DAT_04566966 = 1;
    uVar3 = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar3 = extraout_x1_00;
  }
  if (DAT_04565e5c == '\0') {
                    /* try { // try from 032785d8 to 033785fb has its CatchHandler @ 032786a4 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,uVar3);
    DAT_04565e5c = '\x01';
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 032785fc to 03378633 has its CatchHandler @ 032783f4 */
  }
  pNVar4 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar4 == (NLIDHEAMLMC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0327852c with catch @ 032786ac */
    FUN_01bab8c8();
  }
  iVar1 = (pNVar4->fields).OFFPEKODFPE;
  bVar2 = DANCCJHADOA__MBCGIMNBKAB(AAJGEHHPMGH,(MethodInfo *)0x0);
  if (bVar2) {
    JJBKAMIAMNE = -1;
  }
  else {
                    /* try { // try from 03278634 to 0337863b has its CatchHandler @ 0327871c */
    bVar2 = DANCCJHADOA__OCGAEMGAAOJ(AAJGEHHPMGH,(MethodInfo *)0x0);
    if (!bVar2) {
                    /* try { // try from 03278654 to 03378687 has its CatchHandler @ 032783f4 */
      bVar2 = DANCCJHADOA__DBKHIMGPCBH(AAJGEHHPMGH,(MethodInfo *)0x0);
      if (bVar2) {
        MKACJBMOMHC = -1;
      }
      else {
        bVar2 = DANCCJHADOA__PCONDENPDBK(AAJGEHHPMGH,(MethodInfo *)0x0);
        if (!bVar2) {
                    /* try { // try from 0327869c to 0337869f has its CatchHandler @ 032786b0 */
                    /* try { // try from 032786a0 to 033786db has its CatchHandler @ 032783f4 */
                    /* catch() { ... } // from try @ 032785d8 with catch @ 032786a4 */
                    /* catch() { ... } // from try @ 03278578 with catch @ 032786a8 */
          return;
        }
        MKACJBMOMHC = 1;
      }
                    /* try { // try from 03278688 to 0337868b has its CatchHandler @ 032786bc */
      JJBKAMIAMNE = 0;
      goto LAB_0327868c;
    }
    JJBKAMIAMNE = 1;
  }
  MKACJBMOMHC = 0;
                    /* try { // try from 03278650 to 03378653 has its CatchHandler @ 032786c0 */
LAB_0327868c:
                    /* try { // try from 0327868c to 0337868f has its CatchHandler @ 032786b8 */
                    /* try { // try from 03278690 to 03378693 has its CatchHandler @ 032786b4 */
                    /* try { // try from 03278694 to 03378697 has its CatchHandler @ 032786b0 */
                    /* try { // try from 03278698 to 0337869b has its CatchHandler @ 032786b4 */
  Nekki_SF2_GUI_Pvp_SelectModule__OGLMEBIKJLP
            (__this,(uint)(iVar1 != OPHMGAKOJLP),MKACJBMOMHC,JJBKAMIAMNE,method);
  return;
}

