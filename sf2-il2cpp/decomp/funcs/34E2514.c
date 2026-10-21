// IPCACEBFONO$$BDHAMOEKNNK @ RVA 0x34E2514

void IPCACEBFONO__BDHAMOEKNNK(IPCACEBFONO_o *__this,MethodInfo *method)

{
  NKOIBKNPICN_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_int__o *pSVar2;
  
  if ((DAT_0456873f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    DAT_0456873f = 1;
    method = extraout_x1;
  }
  if ((__this->fields).BJIKPLGMOMI == 0x1e) {
    pNVar1 = (__this->fields).MAABMIGPEIL;
    if (pNVar1 == (NKOIBKNPICN_o *)0x0) goto LAB_035e25b4;
    NKOIBKNPICN__NDNPGAKJLHM(pNVar1,method);
    (__this->fields).BJIKPLGMOMI = 0;
    method = extraout_x1_00;
  }
  if (0xe < (__this->fields).EHMBDMLBKEA) {
    pNVar1 = (__this->fields).MAABMIGPEIL;
    if ((pNVar1 == (NKOIBKNPICN_o *)0x0) ||
       (pSVar2 = (pNVar1->fields).OOIGOEAHPMA,
       pSVar2 == (System_Collections_Generic_List_int__o *)0x0)) {
LAB_035e25b4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    (__this->fields).EHMBDMLBKEA = 0;
  }
  IPCACEBFONO__NKMKIGOGMPK(__this,method);
  (__this->fields).EHMBDMLBKEA = (__this->fields).EHMBDMLBKEA + 1;
  (__this->fields).BJIKPLGMOMI = (__this->fields).BJIKPLGMOMI + 1;
  return;
}

