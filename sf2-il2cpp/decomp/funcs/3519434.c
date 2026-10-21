// PLIIGOCLJDL$$CMIAHPINBOM @ RVA 0x3519434

void PLIIGOCLJDL__CMIAHPINBOM(PLIIGOCLJDL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_0456895c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_Remove__);
    DAT_0456895c = 1;
  }
  pSVar1 = (__this->fields).NKPMKDCHLOF;
  if (pSVar1 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,1,
               Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_Remove__);
    pSVar1 = (__this->fields).NKPMKDCHLOF;
    if (pSVar1 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Remove
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,2,
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_Remove__);
      PLIIGOCLJDL__HENKNGNOKPE(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

