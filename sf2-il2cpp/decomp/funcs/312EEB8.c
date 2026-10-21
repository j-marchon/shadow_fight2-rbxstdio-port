// CNIFAIKGHKO$$JKFKGCPILBE @ RVA 0x312EEB8

IFFFKKMMKFO_o *
CNIFAIKGHKO__JKFKGCPILBE
          (CNIFAIKGHKO_o *__this,int32_t OGPGLGPMEPD,System_Comparison_IFFFKKMMKFO__o *NGDCHEBEAJK,
          MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  IFFFKKMMKFO_o *pIVar2;
  
  if ((DAT_045666b7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
    DAT_045666b7 = 1;
  }
  __this_00 = (__this->fields).NEJBDJKOGOM;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<long,_object>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    if (iVar1 <= OGPGLGPMEPD) {
      return (IFFFKKMMKFO_o *)0x0;
    }
    CNIFAIKGHKO__AOFMCBBKHEE(__this,NGDCHEBEAJK,false,method);
    __this_01 = (__this->fields).ELMHAOJGABL;
    if (__this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0) {
      pIVar2 = (IFFFKKMMKFO_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,OGPGLGPMEPD,
                          Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

