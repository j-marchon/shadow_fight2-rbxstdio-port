// DebugSimpleScroll.<>c$$HLHKOPBGNBE @ RVA 0x3595EDC

void DebugSimpleScroll_<>c__HLHKOPBGNBE
               (DebugSimpleScroll___c_o *__this,DebugSimpleScroll_ScrollItem_o *item,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((item != (DebugSimpleScroll_ScrollItem_o *)0x0) &&
     (__this_00 = (item->fields).ScrollRoot, __this = (DebugSimpleScroll___c_o *)0x0,
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

