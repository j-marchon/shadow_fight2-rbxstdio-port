// FOKJBDHLIMG.HLPNOAPFHNP$$BIAGCPOFFKO @ RVA 0x30A0340

bool FOKJBDHLIMG_HLPNOAPFHNP__BIAGCPOFFKO
               (FOKJBDHLIMG_HLPNOAPFHNP_o *__this,HEFOANCOHDC_o *x,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  System_String_o *__this_00;
  
  if ((x != (HEFOANCOHDC_o *)0x0) &&
     (__this_00 = (x->fields).JIJLBFGKNJK, __this_00 != (System_String_o *)0x0)) {
    bVar3 = System_String__Equals(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    iVar1 = (__this->fields).upgradeLevel;
    if (iVar1 < 0) {
      bVar2 = true;
    }
    else {
      bVar2 = (x->fields).AEIJFFBOBCP == iVar1;
    }
    return (bool)(bVar3 & bVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

