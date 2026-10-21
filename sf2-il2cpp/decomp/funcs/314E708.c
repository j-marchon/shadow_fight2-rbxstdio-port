// Nekki.SF2.GUI.ModuleHolder.<>c$$EKLCINBJPAG @ RVA 0x314E708

int32_t Nekki_SF2_GUI_ModuleHolder_<>c__EKLCINBJPAG
                  (Nekki_SF2_GUI_ModuleHolder___c_o *__this,Nekki_SF2_GUI_UIModule_o *p_a,
                  Nekki_SF2_GUI_UIModule_o *p_b,MethodInfo *method)

{
  int32_t iVar1;
  int32_t local_4;
  
  if (p_a == p_b) {
    iVar1 = 0;
  }
  else {
    if ((p_a == (Nekki_SF2_GUI_UIModule_o *)0x0) ||
       (local_4 = (p_a->fields)._Order, p_b == (Nekki_SF2_GUI_UIModule_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = System_Int32__CompareTo((int32_t)&local_4,(p_b->fields)._Order,(MethodInfo *)0x0);
  }
  return iVar1;
}

