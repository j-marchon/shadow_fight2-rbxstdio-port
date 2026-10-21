// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GIAJHGPACMK @ RVA 0x3254970

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIAJHGPACMK
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,int64_t FNCOALJKOCK,
               MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar2;
  
  if ((DAT_0456715c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456715c = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)ELHFHAPBFMI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033549e4 to 034549eb has its CatchHandler @ 03354ab0 */
    if (((__this_00 != (KKLJIDJBFEI_o *)0x0) &&
        (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
        pPVar2 != (PGICCMFLDPI_o *)0x0)) &&
       (ELHFHAPBFMI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0)) {
                    /* try { // try from 03354a08 to 03454a0b has its CatchHandler @ 03354aa0 */
                    /* try { // try from 03354a0c to 03454a1f has its CatchHandler @ 03354aa4 */
      Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__SetEditBoxVisible
                (ELHFHAPBFMI,-1 < FNCOALJKOCK && FNCOALJKOCK < (pPVar2->fields).GDKPGIBMFPA,
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03354a20 to 03454a2b has its CatchHandler @ 03354aa8 */
  return;
}

