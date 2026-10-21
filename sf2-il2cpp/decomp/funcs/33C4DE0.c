// OGNCMFBMBMB.AFGELJDFHIF$$LPJNHOACLDJ @ RVA 0x33C4DE0

int32_t OGNCMFBMBMB_AFGELJDFHIF__LPJNHOACLDJ(OGNCMFBMBMB_AFGELJDFHIF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567dec & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_get_Count__
                         );
    DAT_04567dec = 1;
  }
  pSVar1 = (__this->fields).LNAPCDLIOOE;
  if (pSVar1 != (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

