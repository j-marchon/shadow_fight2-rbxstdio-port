// Nekki.SF2.GUI.Scripts.CheckBox$$set_State @ RVA 0x3520E9C

void Nekki_SF2_GUI_Scripts_CheckBox__set_State
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar1;
  
  if ((__this->fields).OIKLOAGFFGO == CJNHFNHJHPE) {
    return;
  }
  pSVar1 = (__this->fields).LCDOFOMLNLI;
  (__this->fields).OIKLOAGFFGO = CJNHFNHJHPE;
  if (pSVar1 != (System_Action_CheckBox_EKFFAMKMBIH__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,CJNHFNHJHPE,
               (pSVar1->fields).super.super.method);
    Nekki_SF2_GUI_Scripts_CheckBox__NKIOJIILDGG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

