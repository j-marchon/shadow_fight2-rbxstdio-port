// LCKCDEKNLOA$$MAHFCKJGBPP @ RVA 0x31D7F30

void LCKCDEKNLOA__MAHFCKJGBPP(LCKCDEKNLOA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  int32_t index;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  BOFEMGGNODC_o *__this_01;
  System_Action_PKHMIGFEJCL__o *CJNHFNHJHPE;
  System_Action_o *pSVar2;
  
  if ((DAT_04566cf9 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&Method_LCKCDEKNLOA_NDJAJHFFPKP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Item__);
    DAT_04566cf9 = 1;
  }
  pSVar2 = (__this->fields).IGHHPBIADKJ;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    __this_00 = (__this->fields).NEIJJHEFLHP;
    if (__this_00 != (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 < 1) {
        pSVar2 = (__this->fields).BHHLJDLBINB;
        if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d8058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
          return;
        }
      }
      else {
        index = (__this->fields).KMCAGKMDGBB;
        if (iVar1 <= index) {
          return;
        }
        __this_01 = (BOFEMGGNODC_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<BOFEMGGNODC>_get_Item__);
        CJNHFNHJHPE = (System_Action_PKHMIGFEJCL__o *)
                      thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (BOFEMGGNODC_o *)0x0) {
          BOFEMGGNODC__EIAAJACOKDP(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032d8034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this_01->klass->vtable)._5_MAHFCKJGBPP.methodPtr)
                    (__this_01,AAJBIMFNMBB,(__this_01->klass->vtable)._5_MAHFCKJGBPP.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

