// Nekki.SF2.GUI.Map.LampsPanel$$Flashing @ RVA 0x32CA5DC

void Nekki_SF2_GUI_Map_LampsPanel__Flashing
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar3;
  
  if ((DAT_04567513 & 1) == 0) {
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04567513 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).FAOGPCBDLCE;
  if (iVar1 < 1) {
    if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
    }
    pMVar3 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
    if (pMVar3 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (pMVar3->fields).NJAMIACMNCG) {
      iVar1 = (pMVar3->fields).CBEFHLDCMFF;
      if ((__this->fields).MIIHHLIFPJM != false) {
        Nekki_SF2_GUI_Map_LampsPanel__FKJDCPIAFLK(__this,(__this->fields).FGFAMIEFDEO,in_x2);
        iVar2 = (__this->fields).GJNBBEBNALP;
        if ((iVar2 <= iVar1) && ((__this->fields).ABNHKOFADPD != false)) {
          (__this->fields).AJJDFCMECEO = true;
        }
        if (iVar2 < 1) {
          (__this->fields).MIIHHLIFPJM = false;
        }
      }
      if ((__this->fields).AJJDFCMECEO != false) {
        Nekki_SF2_GUI_Map_LampsPanel__AGHFDDGCCJN(__this,(__this->fields).GENBELDCMGN,in_x2);
        iVar2 = (__this->fields).NFBFPDJLJBG;
        if ((iVar2 <= iVar1) && ((__this->fields).CHEKKHNGMMP != false)) {
          (__this->fields).MIIHHLIFPJM = true;
        }
        if (iVar2 < 1) {
          (__this->fields).AJJDFCMECEO = false;
        }
      }
    }
  }
  else {
    (__this->fields).FAOGPCBDLCE = iVar1 + -1;
  }
  return;
}

