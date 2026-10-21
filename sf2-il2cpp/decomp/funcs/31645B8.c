// MFLHNKGKEGA$$AFAMFABPLFH @ RVA 0x31645B8

System_String_o * MFLHNKGKEGA__AFAMFABPLFH(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  UniRx_ReactiveProperty_string____o *pUVar4;
  System_String_array *pSVar5;
  
  if ((DAT_045668a3 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_045668a3 = 1;
    method = extraout_x1;
  }
  bVar2 = MFLHNKGKEGA__BNNOJJPPGBM(__this,method);
  if (bVar2) {
    pUVar4 = (__this->fields).IDPIHPBEHFC;
    if ((pUVar4 == (UniRx_ReactiveProperty_string____o *)0x0) ||
       (pSVar5 = (pUVar4->fields).value, pSVar5 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields).JLGMCFKNPAK;
    if ((uint)pSVar5->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar3 = pSVar5->m_Items[(int)uVar1];
  }
  else {
    pSVar3 = (System_String_o *)0x0;
  }
  return pSVar3;
}

