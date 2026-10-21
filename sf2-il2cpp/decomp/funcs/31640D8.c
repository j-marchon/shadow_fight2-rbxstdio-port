// MFLHNKGKEGA$$KJKKNEIENKA @ RVA 0x31640D8

void MFLHNKGKEGA__KJKKNEIENKA(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  MethodInfo *extraout_x1;
  UniRx_ReactiveProperty_string____o *pUVar5;
  System_String_array *pSVar6;
  
  if ((DAT_0456689c & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_0456689c = 1;
    method = extraout_x1;
  }
  bVar4 = MFLHNKGKEGA__BNNOJJPPGBM(__this,method);
  if (bVar4) {
    pUVar5 = (__this->fields).IDPIHPBEHFC;
    if ((pUVar5 == (UniRx_ReactiveProperty_string____o *)0x0) ||
       (pSVar6 = (pUVar5->fields).value, pSVar6 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (int)pSVar6->max_length;
    iVar1 = (__this->fields).JLGMCFKNPAK + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    (__this->fields).JLGMCFKNPAK = iVar1 - iVar3 * iVar2;
  }
  return;
}

