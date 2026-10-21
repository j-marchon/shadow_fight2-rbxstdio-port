// IGPDCHBJAPD.JMPAGIGEFME$$.ctor @ RVA 0x31B0FC4

void IGPDCHBJAPD_JMPAGIGEFME___ctor(IGPDCHBJAPD_JMPAGIGEFME_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *__this_00;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o **ppSVar1;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *__this_01;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o **ppSVar2;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *__this_02;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o **ppSVar3;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032b0fe4 to 033b0fef has its CatchHandler @ 032b0c04 */
                    /* try { // try from 032b0ff0 to 033b0ff7 has its CatchHandler @ 032b0ff8 */
                    /* catch() { ... } // from try @ 032b0f7c with catch @ 032b0ff8
                       catch() { ... } // from try @ 032b0ff0 with catch @ 032b0ff8 */
  if ((DAT_04566b7e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
    DAT_04566b7e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>__ctor__);
  ppSVar1 = &(__this->fields).GHAAKPDHIJJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>__ctor__);
  ppSVar2 = &(__this->fields).GMCEHJAIFBJ;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>__ctor__);
  ppSVar3 = &(__this->fields).OJFMFMHCPOA;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

