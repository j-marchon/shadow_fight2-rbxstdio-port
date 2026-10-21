// DebugSimpleScroll$$JJONOCGMEMK @ RVA 0x3595914

void DebugSimpleScroll__JJONOCGMEMK
               (DebugSimpleScroll_o *__this,int32_t MJBMLNKAPGC,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = DebugSimpleScroll__CKPKMBBIMOP(__this,(MethodInfo *)(ulong)(uint)MJBMLNKAPGC);
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems
              (__this_00,MJBMLNKAPGC,(__this->fields)._move1Time,(__this->fields)._ease,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

