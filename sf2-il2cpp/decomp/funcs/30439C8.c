// PJKHAJKEHEL$$.cctor @ RVA 0x30439C8

void PJKHAJKEHEL___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_List_LDHGBBPECKF__o *__this_00;
  System_Collections_Generic_List_LDHGBBPECKF__o **ppSVar1;
  
                    /* try { // try from 031439c8 to 032439d3 has its CatchHandler @ 03143888 */
                    /* try { // try from 031439d4 to 032439db has its CatchHandler @ 031439dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031439bc with catch @ 031439dc
                       catch(type#2 @ 00000000) { ... } // from try @ 031439d4 with catch @ 031439dc
                        */
  if ((DAT_04565dbd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<CILAFHOFEGC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<CILAFHOFEGC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LDHGBBPECKF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LDHGBBPECKF>_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    DAT_04565dbd = 1;
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<CILAFHOFEGC>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this,Method_System_Collections_Generic_HashSet<CILAFHOFEGC>__ctor__);
  PJKHAJKEHEL_TypeInfo->static_fields->PDHFDFNFKHE =
       (System_Collections_Generic_HashSet_CILAFHOFEGC__o *)__this;
  thunk_FUN_01c20e04(PJKHAJKEHEL_TypeInfo->static_fields,__this);
  __this_00 = (System_Collections_Generic_List_LDHGBBPECKF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LDHGBBPECKF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LDHGBBPECKF>__ctor__);
  ppSVar1 = &PJKHAJKEHEL_TypeInfo->static_fields->KCAOHMFJGIC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}

