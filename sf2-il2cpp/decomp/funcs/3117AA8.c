// NGJHCIGFLFD$$.ctor @ RVA 0x3117AA8

void NGJHCIGFLFD___ctor(NGJHCIGFLFD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  System_Collections_Generic_List_OANBNKOOJFH__o **ppSVar1;
  
  if ((DAT_045665c4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo);
    DAT_045665c4 = 1;
  }
  __this_00 = (System_Collections_Generic_List_OANBNKOOJFH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OANBNKOOJFH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OANBNKOOJFH>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  OANBNKOOJFH___ctor((OANBNKOOJFH_o *)__this,2,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03217b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  return;
}

