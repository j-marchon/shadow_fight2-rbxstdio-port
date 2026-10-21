// Nekki.SF2.GUI.TableView$$set_Spacing @ RVA 0x30DAC10

void Nekki_SF2_GUI_TableView__set_Spacing
               (Nekki_SF2_GUI_TableView_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  KMAKOOHEKNB_o *pKVar1;
  
  pKVar1 = (__this->fields).HCLHHHKCABP;
  (__this->fields)._spacing = CJNHFNHJHPE;
  if (pKVar1 != (KMAKOOHEKNB_o *)0x0) {
    (pKVar1->fields).KPGBDEPEHJD = CJNHFNHJHPE;
  }
  return;
}

