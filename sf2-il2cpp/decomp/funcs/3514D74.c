// Nekki.SF2.GUI.Common.Hints.HintList$$NNCDBOLMLHK @ RVA 0x3514D74

void Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  
  if ((DAT_0456892d & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_0456892d = 1;
    method = extraout_x1;
  }
  BMPJIDHGCBN = (__this->fields)._TrackingDeviceID;
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo,method);
  }
  pMVar1 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
  if (pMVar1 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    Nekki_SF2_GUI_Common_Hints_HintList__JCDGMAEDFIF
              (__this,(__this->fields)._TrackingDeviceID,(pMVar1->fields).PHPELPFMOII,
               (pMVar1->fields).DOKHHBGJICA,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

