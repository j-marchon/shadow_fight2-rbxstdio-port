// KEFHDOHHHML$$JKJADOKFMAA @ RVA 0x3370A60

bool KEFHDOHHHML__JKJADOKFMAA
               (KEFHDOHHHML_o *__this,System_Enum_array *ALMDLFIEFLF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  
  if (ALMDLFIEFLF == (System_Enum_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)ALMDLFIEFLF->max_length < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    uVar5 = 0;
    uVar3 = ALMDLFIEFLF->max_length & 0xffffffff;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      bVar2 = KEFHDOHHHML__JKJADOKFMAA(__this,ALMDLFIEFLF->m_Items[uVar5],method);
      uVar1 = (uint)ALMDLFIEFLF->max_length;
      uVar3 = (ulong)uVar1;
      uVar5 = uVar5 + 1;
      bVar4 = (bool)(bVar4 | bVar2);
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  return bVar4;
}

