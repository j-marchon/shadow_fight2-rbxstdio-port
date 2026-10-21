// Nekki.SF2.Core.Fights.ModelContainer$$Update @ RVA 0x3562568

void Nekki_SF2_Core_Fights_ModelContainer__Update
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if ((__this->fields).ALBNJDPLOKJ != false) {
    iVar1 = (__this->fields).IBGCIPCGICB + -1;
    (__this->fields).IBGCIPCGICB = iVar1;
    if (0 < iVar1) {
      (__this->fields).ALBNJDPLOKJ = true;
      return;
    }
    if (iVar1 != 0) {
      (__this->fields).IBGCIPCGICB = 0;
    }
  }
  return;
}

