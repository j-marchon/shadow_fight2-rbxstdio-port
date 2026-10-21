// Nekki.SF2.GUI.ProgressButton$$SetProgBarValueBorders @ RVA 0x30ADFF0

void Nekki_SF2_GUI_ProgressButton__SetProgBarValueBorders
               (Nekki_SF2_GUI_ProgressButton_o *__this,float PEOMJHJICCM,float GKBCJOEFFCP,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).FFAANJKJBFJ;
  fVar2 = (__this->fields).CCIKLAFHFAH;
  (__this->fields).FFAANJKJBFJ = GKBCJOEFFCP;
  (__this->fields).CCIKLAFHFAH = PEOMJHJICCM;
  (__this->fields).CPCHMIPKLCO =
       (GKBCJOEFFCP - PEOMJHJICCM) * ((fVar1 - fVar2) / ((__this->fields).CPCHMIPKLCO - fVar2)) +
       PEOMJHJICCM;
  return;
}

