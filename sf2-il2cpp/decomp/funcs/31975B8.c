// Nekki.SF2.Core.Fights.Controls.ActionButtons$$SetVisible @ RVA 0x31975B8

void Nekki_SF2_Core_Fights_Controls_ActionButtons__SetVisible
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,bool MNODCIGLHEL,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,MNODCIGLHEL,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

