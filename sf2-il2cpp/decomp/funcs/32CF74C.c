// CJCCEHEKBPD$$FDCADKOAMKI @ RVA 0x32CF74C

void CJCCEHEKBPD__FDCADKOAMKI(CJCCEHEKBPD_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
  if ((__this_00 != (CocosAnimation_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    (__this->fields).super._ILHGDFFOGHP_k__BackingField = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

