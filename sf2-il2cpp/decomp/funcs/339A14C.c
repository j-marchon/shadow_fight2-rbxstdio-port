// MMDPNDAECII$$.ctor @ RVA 0x339A14C

void MMDPNDAECII___ctor(MMDPNDAECII_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  EBGMOLCMOHK_StaticFields *pEVar2;
  GBJGJEGPHKD_o **ppGVar3;
  
  if ((DAT_04567c71 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567c71 = 1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).MJBOGDFFGKL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 0349a1c4 to 0359a277 has its CatchHandler @ 0349a1c4
                       catch() { ... } // from try @ 0349a1c4 with catch @ 0349a1c4
                       catch() { ... } // from try @ 0349a2a0 with catch @ 0349a1c4
                       catch() { ... } // from try @ 0349a304 with catch @ 0349a1c4
                       catch() { ... } // from try @ 0349a344 with catch @ 0349a1c4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppGVar3 = &(__this->fields).HMIAFJALFCJ;
  *ppGVar3 = NCNGALIAHJL;
  (__this->fields).EGLKIPHJCDL = 0.0;
  (__this->fields).HFAFMEICFLA = 0.0;
  thunk_FUN_01c20e04(ppGVar3,NCNGALIAHJL);
  (__this->fields).BNHJIKJAHHF = false;
  (__this->fields).AGHCNFGKHCH = 0;
  if (DAT_04567c96 == '\0') {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04567c96 = '\x01';
  }
  pEVar2 = EBGMOLCMOHK_TypeInfo->static_fields;
  (__this->fields).LMIMAJBNOIL = pEVar2->NBPIFEDENED;
  if (DAT_04567c97 == '\0') {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04567c97 = '\x01';
    pEVar2 = EBGMOLCMOHK_TypeInfo->static_fields;
  }
  (__this->fields).PLLMHJOMBIE = pEVar2->DBIHPEGBLNF;
  return;
}

