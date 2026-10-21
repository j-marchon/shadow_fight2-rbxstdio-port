// IKMOIKFPPBF$$JCDHIOHIFEL @ RVA 0x3051990

bool IKMOIKFPPBF__JCDHIOHIFEL(System_String_o *ILENGCADNIH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  IKMOIKFPPBF_c *pIVar2;
  System_String_o *value;
  IKMOIKFPPBF_StaticFields *pIVar3;
  
  if ((DAT_04565e4e & 1) == 0) {
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
    DAT_04565e4e = 1;
  }
  __this = CMEBCBKGFFL__NFBODKMCAMM(ILENGCADNIH,(MethodInfo *)0x0);
  pIVar2 = IKMOIKFPPBF_TypeInfo;
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    pIVar2 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
  }
  value = IKMOIKFPPBF__CDDEBPCPMNB((MethodInfo *)pIVar2);
  if (__this != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(__this,value,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = IKMOIKFPPBF_TypeInfo;
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        pIVar2 = (IKMOIKFPPBF_c *)thunk_FUN_01ba7564();
      }
      IKMOIKFPPBF__HPDELGJFBDK((MethodInfo *)pIVar2);
      pIVar3 = IKMOIKFPPBF_TypeInfo->static_fields;
      if (pIVar3->ODDBHAIDAOM == (System_Collections_Generic_List_ObscuredString__o *)0x0) {
        bVar1 = true;
      }
      else {
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pIVar3 = IKMOIKFPPBF_TypeInfo->static_fields;
        }
        bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                          (__this,(System_Collections_Generic_IEnumerable_ObscuredString__o *)
                                  pIVar3->ODDBHAIDAOM,(MethodInfo *)0x0);
        bVar1 = !bVar1;
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

