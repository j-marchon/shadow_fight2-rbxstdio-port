// Nekki.SF2.Core.InputControllers.KeyboardController$$AJHLLFEPMEH @ RVA 0x30972E0

void Nekki_SF2_Core_InputControllers_KeyboardController__AJHLLFEPMEH
               (Nekki_SF2_Core_InputControllers_KeyboardController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int key;
  System_Action_KeyCode__o *pSVar2;
  
  if (((__this->fields).AEKEGMAOOHO != (System_Action_KeyCode__o *)0x0) ||
     ((__this->fields).AHGJIANNLBP != (System_Action_KeyCode__o *)0x0)) {
    key = 0;
    do {
      bVar1 = UnityEngine_Input__GetKeyDown(key,(MethodInfo *)0x0);
      if ((bVar1) &&
         (pSVar2 = (__this->fields).AEKEGMAOOHO, pSVar2 != (System_Action_KeyCode__o *)0x0)) {
        if (pSVar2 == (System_Action_KeyCode__o *)0x0) goto LAB_031973a0;
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,key,(pSVar2->fields).super.super.method)
        ;
      }
      bVar1 = UnityEngine_Input__GetKeyUp(key,(MethodInfo *)0x0);
      if ((bVar1) &&
         (pSVar2 = (__this->fields).AHGJIANNLBP, pSVar2 != (System_Action_KeyCode__o *)0x0)) {
        if (pSVar2 == (System_Action_KeyCode__o *)0x0) {
LAB_031973a0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,key,(pSVar2->fields).super.super.method)
        ;
      }
      key = key + 1;
    } while (key != 0x14a);
  }
  return;
}

