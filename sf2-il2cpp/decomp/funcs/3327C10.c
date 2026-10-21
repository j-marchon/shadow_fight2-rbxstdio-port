// Nekki.SF2.GUI.Map.RaidKeysRowView$$Update @ RVA 0x3327C10

void Nekki_SF2_GUI_Map_RaidKeysRowView__Update
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  if ((__this->fields).super.DFGLKIENEIH != false) {
    pUVar2 = (__this->fields)._keyPanel;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (__this->fields)._keyPanel;
      (__this->fields).super.DFGLKIENEIH = false;
      Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

