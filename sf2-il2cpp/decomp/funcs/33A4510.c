// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsShowController @ RVA 0x33A4510

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsShowController
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

