// OCOEAJMJEOP$$.ctor @ RVA 0x32AAD70

void OCOEAJMJEOP___ctor(OCOEAJMJEOP_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_PKKLIJLIKGF__o **ppSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456742f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_0456742f = 1;
  }
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  ppSVar1 = &(__this->fields).BJNEIDNIMHI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.NOBEFHEECKJ = 1;
  ppSVar2 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar2 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar2,KGLJICLJHEL);
  ppSVar2 = &(__this->fields).IDHLEGNBHLC;
  *ppSVar2 = JLAFGLDIFOC;
  thunk_FUN_01c20e04(ppSVar2,JLAFGLDIFOC);
  (__this->fields).GBDPLCLDMIG = 0;
  return;
}

