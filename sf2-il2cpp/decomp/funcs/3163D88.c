// MCEIBCKPIAD$$MHGHLDANJBO @ RVA 0x3163D88

void MCEIBCKPIAD__MHGHLDANJBO(MCEIBCKPIAD_o *__this,KKLFGJCMPDA_o *IMNBAFCEDMA,MethodInfo *method)

{
  System_Collections_Generic_List_KKLFGJCMPDA__o *__this_00;
  System_Action_FAIJGJCCKJC__o *pSVar1;
  
  if ((DAT_04566898 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
    DAT_04566898 = 1;
  }
  if ((IMNBAFCEDMA != (KKLFGJCMPDA_o *)0x0) &&
     (pSVar1 = (__this->fields).BJPKLLHHPAO, pSVar1 != (System_Action_FAIJGJCCKJC__o *)0x0)) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(IMNBAFCEDMA->fields).EAAEJJKFKEG,
               (pSVar1->fields).super.super.method);
    __this_00 = (__this->fields).BDIHNIGKDLK;
    if (__this_00 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IMNBAFCEDMA,
                 Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
      DJNBJHPDKDP__OFNFOGHFDML<object>
                ((System_Collections_Generic_List_T__o *)(__this->fields).FEOGLGJBJDE,
                 (Il2CppObject *)IMNBAFCEDMA,Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

