// Nekki.SF2.GUI.Pvp.PhaseItem$$FPBFCPPDGNI @ RVA 0x30B09F0

bool Nekki_SF2_GUI_Pvp_PhaseItem__FPBFCPPDGNI
               (Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

