// Nekki.SF2.GUI.Scripts.LoadingCircle$$Stop @ RVA 0x308C2C8

void Nekki_SF2_GUI_Scripts_LoadingCircle__Stop
               (Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this,MethodInfo *method)

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

