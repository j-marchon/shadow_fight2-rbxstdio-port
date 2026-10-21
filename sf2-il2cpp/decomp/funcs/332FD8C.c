// Nekki.SF2.GUI.Pvp.PlayerSelector$$MoveTo @ RVA 0x332FD8C

void Nekki_SF2_GUI_Pvp_PlayerSelector__MoveTo
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,int32_t MLGDMNLHIKD,int32_t JHLALAPPDFE,
               UnityEngine_Vector2_o BLEOKMIDGIK,float LFJGFLNMBMC,bool MBOJNOFHMCP,bool JKHALGFBMFC
               ,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)MBOJNOFHMCP;
  if ((__this->fields).KKPJEFOMLBP == false) {
    if ((__this->fields).xPosition != MLGDMNLHIKD) {
      Nekki_SF2_GUI_Pvp_PlayerSelector__DKOKAFFCHHJ
                (__this,MBOJNOFHMCP,BLEOKMIDGIK,LFJGFLNMBMC,0,method_00);
    }
    if ((__this->fields).yPosition != JHLALAPPDFE) {
      Nekki_SF2_GUI_Pvp_PlayerSelector__DKOKAFFCHHJ
                (__this,JKHALGFBMFC,BLEOKMIDGIK,LFJGFLNMBMC,1,method_00);
    }
    (__this->fields).xPosition = MLGDMNLHIKD;
    (__this->fields).yPosition = JHLALAPPDFE;
  }
  return;
}

