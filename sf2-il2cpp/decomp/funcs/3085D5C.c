// Nekki.SF2.GUI.Fight.ActivePerkItem$$get_FramesToEnd @ RVA 0x3085D5C

int32_t Nekki_SF2_GUI_Fight_ActivePerkItem__get_FramesToEnd
                  (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  MMDDDDFHOLG_DOCBHLNBECF_o *pMVar3;
  
  pMVar3 = (__this->fields)._EKIGEJEMNNN_k__BackingField;
  if (pMVar3 == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = (pMVar3->fields).AEPIFFHAKJG;
    iVar1 = (pMVar3->fields).CMPJANOIJAF;
  }
  return iVar1 - iVar2;
}

