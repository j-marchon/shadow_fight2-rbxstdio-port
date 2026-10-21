// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OLCLFOHGKIL @ RVA 0x32895FC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OLCLFOHGKIL
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  BECIPDJBAOG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_BECIPDJBAOG__o *KJADEEFANAL;
  
  if ((DAT_045672d3 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_045672d3 = 1;
    method = extraout_x1;
  }
  KJADEEFANAL = (__this->fields).FCKCGNHILFE;
  __this_00 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo,method);
  BECIPDJBAOG___ctor(__this_00,(System_Collections_Generic_IList_BECIPDJBAOG__o *)KJADEEFANAL,true,
                     (MethodInfo *)0x0);
  (__this->fields).FBODAFDBNLH = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH,__this_00);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KAPGCIMJPED(__this,method_00);
  return;
}

