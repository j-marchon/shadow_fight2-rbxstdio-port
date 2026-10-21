// Nekki.SF2.GUI.Shop.InfoPanelContent$$FNIAJKKLKCB @ RVA 0x3005D80

int64_t Nekki_SF2_GUI_Shop_InfoPanelContent__FNIAJKKLKCB
                  (int64_t FJJJGOHDLBH,int32_t IPBCCKOHOBD,MethodInfo *method)

{
  int64_t iVar1;
  float fVar2;
  
  fVar2 = (float)FJJJGOHDLBH / ((float)IPBCCKOHOBD / 100.0 + 1.0);
  iVar1 = -0x7ffffffffffffff8;
  if (fVar2 != INFINITY) {
    iVar1 = ((long)fVar2 / 10) * 10;
  }
  return iVar1;
}

