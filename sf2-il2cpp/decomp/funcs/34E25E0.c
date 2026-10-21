// IPCACEBFONO$$EKBJDKNNHGL @ RVA 0x34E25E0

void IPCACEBFONO__EKBJDKNNHGL(IPCACEBFONO_o *__this,NKOIBKNPICN_o *CJNHFNHJHPE,MethodInfo *method)

{
  NKOIBKNPICN_o *pNVar1;
  MethodInfo *method_00;
  NKOIBKNPICN_o **ppNVar2;
  
  if (CJNHFNHJHPE != (NKOIBKNPICN_o *)0x0) {
    pNVar1 = NKOIBKNPICN__GOGPCNMIJOB(CJNHFNHJHPE,(MethodInfo *)CJNHFNHJHPE);
    (__this->fields).MAABMIGPEIL = pNVar1;
    thunk_FUN_01c20e04();
    pNVar1 = NKOIBKNPICN__GOGPCNMIJOB(CJNHFNHJHPE,method_00);
    ppNVar2 = &(__this->fields).EANHEBKMBKB;
    *ppNVar2 = pNVar1;
    thunk_FUN_01c20e04(ppNVar2,pNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

