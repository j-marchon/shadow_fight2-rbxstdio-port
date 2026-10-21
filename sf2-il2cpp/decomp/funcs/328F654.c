// BKKENCMPLLF$$ODCJNJBFOLB @ RVA 0x328F654

int32_t BKKENCMPLLF__ODCJNJBFOLB(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  System_String_o *pSVar3;
  
  bVar1 = PCOEHCPGBBG__KCDAEMMGHNM((__this->fields).HONOOAELMFJ,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).HONOOAELMFJ,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 3;
    }
    else {
      pSVar3 = (__this->fields).HONOOAELMFJ;
      if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = (uint)((pSVar3->fields)._stringLength < 3) << 1;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

