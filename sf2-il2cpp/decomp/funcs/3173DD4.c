// LDHGBBPECKF$$.ctor @ RVA 0x3173DD4

void LDHGBBPECKF___ctor(LDHGBBPECKF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LPACFIDMJOM__o *__this_00;
  System_Collections_Generic_List_LPACFIDMJOM__o **ppSVar1;
  System_Collections_Generic_List_CJMPPFAJNBH__o *__this_01;
  System_Collections_Generic_List_CJMPPFAJNBH__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566947 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LPACFIDMJOM>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CJMPPFAJNBH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CJMPPFAJNBH>_TypeInfo);
                    /* catch() { ... } // from try @ 03273e68 with catch @ 03273e40
                       catch() { ... } // from try @ 03273ea8 with catch @ 03273e40
                       catch() { ... } // from try @ 03273f80 with catch @ 03273e40 */
    FUN_01bab630(&System_Collections_Generic_List<LPACFIDMJOM>_TypeInfo);
    DAT_04566947 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LPACFIDMJOM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LPACFIDMJOM>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LPACFIDMJOM>__ctor__);
  ppSVar1 = &(__this->fields).ACHJNNOKEDK;
                    /* try { // try from 03273e64 to 03373e67 has its CatchHandler @ 03273e78 */
  *ppSVar1 = __this_00;
                    /* try { // try from 03273e68 to 03373e8f has its CatchHandler @ 03273e40 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_CJMPPFAJNBH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CJMPPFAJNBH>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03273e64 with catch @ 03273e78
                        */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<CJMPPFAJNBH>__ctor__);
  ppSVar2 = &(__this->fields).HBKCPJFPNIG;
  *ppSVar2 = __this_01;
                    /* try { // try from 03273e90 to 03373ea7 has its CatchHandler @ 03273f78 */
  thunk_FUN_01c20e04(ppSVar2,__this_01);
                    /* try { // try from 03273ea8 to 03373f67 has its CatchHandler @ 03273e40 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

