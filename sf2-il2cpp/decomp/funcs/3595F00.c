// DebugSimpleScroll.<>c$$OJPMOCDNLIH @ RVA 0x3595F00

void DebugSimpleScroll_<>c__OJPMOCDNLIH
               (DebugSimpleScroll___c_o *__this,DebugSimpleScroll_ScrollItem_o *item,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  
  if ((item != (DebugSimpleScroll_ScrollItem_o *)0x0) &&
     (pNVar1 = (item->fields).Scroll, pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0)) {
    *(byte *)((long)&(pNVar1->fields)._visibilityChecker + 1) =
         *(byte *)((long)&(pNVar1->fields)._visibilityChecker + 1) ^ 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

