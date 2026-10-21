// SFButton$$get_ActiveAndInteractable @ RVA 0x34BB7A4

bool SFButton__get_ActiveAndInteractable(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).super.super.m_Interactable != false)) {
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

