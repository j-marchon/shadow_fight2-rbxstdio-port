// OMANDMDCGMF$$GOIFPODNLCH @ RVA 0x32987E0

bool OMANDMDCGMF__GOIFPODNLCH
               (uint16_t ALCMPEINKGL,System_Collections_Generic_HashSet_char__array *HAKPMGCKCLB,
               MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((DAT_0456737c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Contains__);
    DAT_0456737c = 1;
  }
  if ((HAKPMGCKCLB != (System_Collections_Generic_HashSet_char__array *)0x0) &&
     (0 < (int)HAKPMGCKCLB->max_length)) {
    uVar3 = 0;
    uVar2 = HAKPMGCKCLB->max_length & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (HAKPMGCKCLB->m_Items[uVar3] != (System_Collections_Generic_HashSet_char__o *)0x0) {
        bVar1 = System_Collections_Generic_HashSet<char>__Contains
                          (HAKPMGCKCLB->m_Items[uVar3],ALCMPEINKGL,
                           Method_System_Collections_Generic_HashSet<char>_Contains__);
        if (bVar1) {
          return true;
        }
        uVar2 = (ulong)(uint)HAKPMGCKCLB->max_length;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar2);
  }
  return false;
}

