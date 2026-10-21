// MatchingDialog$$KOBMELKNNLE @ RVA 0x342C730

void MatchingDialog__KOBMELKNNLE(MatchingDialog_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
                    /* catch() { ... } // from try @ 0352c6b8 with catch @ 0352c730
                       catch() { ... } // from try @ 0352c714 with catch @ 0352c730
                       catch() { ... } // from try @ 0352c728 with catch @ 0352c730 */
  pCVar1 = (__this->fields)._hourGlassEffect;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFirstFrame(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._hourGlassEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 1;
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

