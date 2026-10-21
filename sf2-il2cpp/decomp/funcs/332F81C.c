// Nekki.SF2.GUI.Pvp.PlayerSelector$$OnDisable @ RVA 0x332F81C

void Nekki_SF2_GUI_Pvp_PlayerSelector__OnDisable
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar1 = (__this->fields)._LeftBorderContainer;
  if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._RightBorderContainer;
    if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

