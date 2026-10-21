// Nekki.SF2.GUI.Map.BattlePrizeElement$$Update @ RVA 0x339D048

void Nekki_SF2_GUI_Map_BattlePrizeElement__Update
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  int iVar1;
  
  if ((__this->fields).IKBBLGEBDGM != false) {
    (__this->fields).IKBBLGEBDGM = false;
    Nekki_SF2_GUI_Map_BattlePrizeElement__ODOKFKCAILG(__this,method);
    method = extraout_x1;
  }
  iVar1 = (__this->fields).CKPLHEOCNEC;
  if (iVar1 == 0) {
                    /* try { // try from 0349d06c to 0359d093 has its CatchHandler @ 0349d1c4 */
    Nekki_SF2_GUI_Map_BattlePrizeElement__BGFNABFMNIN(__this,method);
    iVar1 = (__this->fields).CKPLHEOCNEC;
  }
  (__this->fields).CKPLHEOCNEC = iVar1 + -1;
  return;
}

