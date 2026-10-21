// Nekki.SF2.GUI.Tutorial.ArrowCanvas$$HideArrow @ RVA 0x35CC310

void Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow
               (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_Arrow_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  
  pNVar1 = (__this->fields)._arrow;
  if ((pNVar1 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._arrow;
    if (pNVar1 != (Nekki_SF2_GUI_Tutorial_Arrow_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

