// KAMNHNFJCBK$$AJGHCILADAI @ RVA 0x33C78D0

bool KAMNHNFJCBK__AJGHCILADAI(KAMNHNFJCBK_o *__this,KAMNHNFJCBK_o *NECMHLICHNE,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (NECMHLICHNE != (KAMNHNFJCBK_o *)0x0) {
    iVar1 = (__this->fields)._ACAPMJLHGIA_k__BackingField;
    iVar2 = (NECMHLICHNE->fields)._ACAPMJLHGIA_k__BackingField;
    if ((iVar1 < iVar2) || (iVar2 < (__this->fields)._DMNBLKDCIOM_k__BackingField)) {
      iVar2 = (NECMHLICHNE->fields)._DMNBLKDCIOM_k__BackingField;
      if (iVar1 < iVar2) {
        bVar3 = false;
      }
      else {
        bVar3 = (__this->fields)._DMNBLKDCIOM_k__BackingField <= iVar2;
      }
    }
    else {
      bVar3 = true;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

