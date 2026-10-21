// MatchingDialog$$EEEHHJNBPMG @ RVA 0x342C6B0

void MatchingDialog__EEEHHJNBPMG(MatchingDialog_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* catch() { ... } // from try @ 0352c68c with catch @ 0352c6b0 */
  __this_00 = (__this->fields)._hourGlassEffect;
  if (__this_00 != (CocosAnimation_o *)0x0) {
    (__this_00->fields)._NOAJIBNJKPE_k__BackingField = false;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

