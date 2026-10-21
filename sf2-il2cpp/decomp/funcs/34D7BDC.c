// NKOIBKNPICN$$NDNPGAKJLHM @ RVA 0x34D7BDC

void NKOIBKNPICN__NDNPGAKJLHM(NKOIBKNPICN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045686e6 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    DAT_045686e6 = 1;
  }
  pSVar1 = (__this->fields).KJNPENJKBKD;
  if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    pSVar1 = (__this->fields).JCJPICMGIHE;
    if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
      (pSVar1->fields)._size = 0;
      (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
      (__this->fields).BHJAGFIAEAA = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

