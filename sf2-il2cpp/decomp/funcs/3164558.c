// MFLHNKGKEGA$$MJDCKODLHLK @ RVA 0x3164558

bool MFLHNKGKEGA__MJDCKODLHLK(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  bool bVar1;
  UniRx_ReactiveProperty_string____o *pUVar2;
  System_String_array *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_045668a2 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_045668a2 = 1;
  }
  pUVar2 = (__this->fields).IDPIHPBEHFC;
  if (pUVar2 != (UniRx_ReactiveProperty_string____o *)0x0) {
    pSVar3 = (pUVar2->fields).value;
    if (pSVar3 == (System_String_array *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = 0 < (int)pSVar3->max_length;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

