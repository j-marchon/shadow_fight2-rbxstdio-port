// Nekki.SF2.GUI.Fight.PvpVsScreen$$Init @ RVA 0x318F328

void Nekki_SF2_GUI_Fight_PvpVsScreen__Init
               (Nekki_SF2_GUI_Fight_PvpVsScreen_o *__this,PJKHAJKEHEL_o *BAKIMFMMFMP,
               PJKHAJKEHEL_o *JALKELIHLPC,bool HIOHGCIKLNF,MethodInfo *method)

{
  PJKHAJKEHEL_o **ppPVar1;
  
  Nekki_SF2_GUI_Fight_VsScreen__Init
            ((Nekki_SF2_GUI_Fight_VsScreen_o *)__this,BAKIMFMMFMP,JALKELIHLPC,HIOHGCIKLNF,
             (MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).BAKIMFMMFMP;
  *ppPVar1 = BAKIMFMMFMP;
  thunk_FUN_01c20e04(ppPVar1,BAKIMFMMFMP);
  ppPVar1 = &(__this->fields).JALKELIHLPC;
  *ppPVar1 = JALKELIHLPC;
  thunk_FUN_01c20e04(ppPVar1,JALKELIHLPC);
  return;
}

