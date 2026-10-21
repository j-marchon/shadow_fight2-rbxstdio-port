// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$Hide @ RVA 0x34DAB4C

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__Hide
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

