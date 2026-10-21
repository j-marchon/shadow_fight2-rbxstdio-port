// NGOAFBAIMNM$$HNOPGFODECN @ RVA 0x3158C0C

int32_t NGOAFBAIMNM__HNOPGFODECN(System_String_o *CMDCEGDPKFO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CMDCEGDPKFO,(MethodInfo *)0x0);
  if (!bVar1) {
    if (CMDCEGDPKFO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = System_String__Split(CMDCEGDPKFO,0x5f,0,(MethodInfo *)0x0);
    if ((pSVar3 != (System_String_array *)0x0) && ((int)pSVar3->max_length == 3)) {
      iVar2 = PCOEHCPGBBG__JBGCINPPLAC(pSVar3->m_Items[1],-1,(MethodInfo *)0x0);
      return iVar2;
    }
  }
                    /* try { // try from 03258d74 to 03358d7b has its CatchHandler @ 03258ea8 */
  return -1;
}

