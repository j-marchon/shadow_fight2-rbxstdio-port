// HIJGJNFACPG$$.ctor @ RVA 0x3291F10

void HIJGJNFACPG___ctor(HIJGJNFACPG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar1;
  
  if ((DAT_0456732d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    DAT_0456732d = 1;
  }
  __this_00 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
  ppSVar1 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  PNEKMHMACLG___ctor((PNEKMHMACLG_o *)__this,0x29,AHDGNOJPPIB,(MethodInfo *)0x0);
  return;
}

