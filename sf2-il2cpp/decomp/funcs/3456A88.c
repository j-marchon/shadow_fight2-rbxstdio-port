// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FillContainerItemChances @ RVA 0x3456A88

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FillContainerItemChances
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *AOCJBPCEMHL,float CMPEHJEKAJB,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  if (PBDIPLHDHHD == (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (PBDIPLHDHHD->fields).MOIGDPBNMNI;
                    /* try { // try from 03556aa4 to 03656ac7 has its CatchHandler @ 03558114 */
  if (iVar1 == 3) {
                    /* try { // try from 03556afc to 03656b03 has its CatchHandler @ 03558160 */
    fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                      (__this,PBDIPLHDHHD,AOCJBPCEMHL,CMPEHJEKAJB,method);
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FEGLJPNHFJF
              (__this,PBDIPLHDHHD,fVar2,(MethodInfo *)AOCJBPCEMHL);
    return;
  }
  if (iVar1 == 2) {
                    /* try { // try from 03556ad8 to 03656afb has its CatchHandler @ 03557e8c */
    fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                      (__this,PBDIPLHDHHD,AOCJBPCEMHL,CMPEHJEKAJB,method);
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__KGLBGFGMCAG
              (__this,PBDIPLHDHHD,fVar2,(MethodInfo *)AOCJBPCEMHL);
    return;
  }
  if (iVar1 == 1) {
    fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                      (__this,PBDIPLHDHHD,AOCJBPCEMHL,CMPEHJEKAJB,method);
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__AEDCNNNBBPJ
              (__this,PBDIPLHDHHD,fVar2,(MethodInfo *)AOCJBPCEMHL);
    return;
  }
  return;
}

