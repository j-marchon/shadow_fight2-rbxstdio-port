// PNEKMHMACLG$$.ctor @ RVA 0x3503FD0

void PNEKMHMACLG___ctor(PNEKMHMACLG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o **ppSVar1;
  
  if ((DAT_0456887d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    DAT_0456887d = 1;
  }
  __this_00 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
                    /* try { // try from 03604030 to 03704037 has its CatchHandler @ 036041d0 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  ppSVar1 = &(__this->fields).LJNCACBBIBD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03604050 to 03704057 has its CatchHandler @ 036041cc */
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0x16,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 0360406c to 03704073 has its CatchHandler @ 03604120 */
                    /* WARNING: Could not recover jumptable at 0x03604074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

