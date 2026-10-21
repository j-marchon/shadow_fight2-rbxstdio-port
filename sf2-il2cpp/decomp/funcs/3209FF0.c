// Util$$IHPDCBOFHPA @ RVA 0x3209FF0

void Util__IHPDCBOFHPA(UnityEngine_GameObject_o *CMMIJCJOBBF,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  if (CMMIJCJOBBF == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(CMMIJCJOBBF,(MethodInfo *)0x0);
  if (bVar1 != CJNHFNHJHPE) {
    UnityEngine_GameObject__SetActive(CMMIJCJOBBF,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
  return;
}

