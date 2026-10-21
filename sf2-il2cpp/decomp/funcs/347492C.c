// Nekki.SF2.GUI.Map.BattleButton$$set_Hidden @ RVA 0x347492C

void Nekki_SF2_GUI_Map_BattleButton__set_Hidden
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool value;
  UnityEngine_GameObject_o *__this_00;
  OOMHDDBCBJP_o *pOVar1;
  
  (__this->fields).GEOICCNOABO = CJNHFNHJHPE;
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pOVar1 = (__this->fields).CLMFOMEABFA;
  if (pOVar1 != (OOMHDDBCBJP_o *)0x0) {
    if ((pOVar1->fields).HHDBIGKBMEC == false) {
      value = false;
    }
    else {
      value = (__this->fields).GEOICCNOABO == false;
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

