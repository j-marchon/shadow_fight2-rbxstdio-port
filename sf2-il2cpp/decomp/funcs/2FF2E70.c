// HDHBGBEEKDM$$.ctor @ RVA 0x2FF2E70

void HDHBGBEEKDM___ctor(HDHBGBEEKDM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_NJPIKDFEOCN__o *__this_00;
  System_Collections_Generic_List_NJPIKDFEOCN__o **ppSVar1;
  
  if ((DAT_04565a7d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPIKDFEOCN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NJPIKDFEOCN>_TypeInfo);
    DAT_04565a7d = 1;
  }
  __this_00 = (System_Collections_Generic_List_NJPIKDFEOCN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NJPIKDFEOCN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NJPIKDFEOCN>__ctor__);
  ppSVar1 = &(__this->fields).HEHMAPDMHIG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,0,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x030f2f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

