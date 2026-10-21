// Nekki.SF2.GUI.Scripts.EditBox$$OnSelect @ RVA 0x324984C

void Nekki_SF2_GUI_Scripts_EditBox__OnSelect
               (Nekki_SF2_GUI_Scripts_EditBox_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  System_Action_EditBox__o *pSVar1;
  
  UnityEngine_UI_InputField__OnSelect
            ((UnityEngine_UI_InputField_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  if ((__this->fields).OIHLBDPHBMI == false) {
    pSVar1 = (__this->fields).HHHKCKLPENH;
    if (pSVar1 == (System_Action_EditBox__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,__this,(pSVar1->fields).super.super.method);
  }
  (__this->fields).OIHLBDPHBMI = true;
  return;
}

